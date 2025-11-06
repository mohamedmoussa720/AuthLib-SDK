package com.expertapps.auth

import com.expertapps.auth.models.ApiResponse
import com.expertapps.auth.models.PaginatedUsers
import com.expertapps.auth.models.ResponseStatus
import com.expertapps.auth.models.User
import io.ktor.http.*
import io.ktor.serialization.kotlinx.json.*
import io.ktor.server.application.*
import io.ktor.server.plugins.contentnegotiation.*
import io.ktor.server.plugins.cors.*
import io.ktor.server.request.*
import io.ktor.server.response.*
import io.ktor.server.routing.*
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.launch
import kotlinx.serialization.Serializable
import kotlinx.serialization.json.Json

expect class ServerEngine {
    suspend fun start()
    suspend fun stop()
}

expect fun createServerEngine(host: String, port: Int, module: Application.() -> Unit): ServerEngine

@Serializable
data class LoginRequest(
    val username: String,
    val password: String
)

@Serializable
data class ServerResponse<T>(
    val status: Boolean,
    val data: T? = null,
    val error: String? = null
)

/**
 * HTTP Server that accepts connections from ANY client
 * Binds to 0.0.0.0 (all network interfaces) to accept connections from any IP address
 */
class HttpServer(private val authLibrary: AuthLibrary) {
    private var server: ServerEngine? = null
    private val serverScope = CoroutineScope(SupervisorJob() + Dispatchers.Default)
    
    /**
     * Start server on specified port, accepting connections from ANY client
     * @param host Host to bind to (use "0.0.0.0" to accept from any IP)
     * @param port Port to listen on
     */
    suspend fun start(host: String = "0.0.0.0", port: Int = 8080): Boolean {
        if (server != null) {
            Logger.w("HttpServer", "Server is already running")
            throw IllegalStateException("Server is already running")
        }
        
        try {
            // Bind to 0.0.0.0 to accept connections from any client IP
            server = createServerEngine(host, port) { serverModule() }
            
            // Start server in background
            serverScope.launch {
                try {
                    server?.start()
                } catch (e: Exception) {
                    Logger.e("HttpServer", "Server error: ${e.message}")
                }
            }
            
            // Give server a moment to initialize
            kotlinx.coroutines.delay(100)
            
            Logger.d("HttpServer", "Server started on $host:$port - accepting connections from ANY client")
            return true
        } catch (e: Exception) {
            Logger.e("HttpServer", "Failed to start server: ${e.message}")
            server = null
            throw Exception("Failed to start HTTP server on $host:$port: ${e.message}", e)
        }
    }
    
    suspend fun stop() {
        try {
            server?.stop()
            server = null
            Logger.d("HttpServer", "Server stopped")
        } catch (e: Exception) {
            Logger.e("HttpServer", "Error stopping server: ${e.message}")
            throw Exception("Failed to stop HTTP server: ${e.message}", e)
        }
    }
    
    fun isRunning(): Boolean {
        return server != null
    }
    
    private fun Application.serverModule() {
        install(ContentNegotiation) {
            json(Json {
                ignoreUnknownKeys = true
                isLenient = true
                encodeDefaults = false
            })
        }
        
        // CORS configuration - allow requests from ANY origin (any client IP/port)
        install(CORS) {
            allowMethod(HttpMethod.Options)
            allowMethod(HttpMethod.Get)
            allowMethod(HttpMethod.Post)
            allowMethod(HttpMethod.Delete)
            allowMethod(HttpMethod.Put)
            allowMethod(HttpMethod.Patch)
            allowHeader(HttpHeaders.ContentType)
            allowHeader(HttpHeaders.Authorization)
            allowHeader(HttpHeaders.Accept)
            allowHeader(HttpHeaders.Origin)
            allowHeader(HttpHeaders.AccessControlRequestMethod)
            allowHeader(HttpHeaders.AccessControlRequestHeaders)
            // Allow ANY origin - accepts connections from any client
            anyHost()
            allowCredentials = true
        }
        
        routing {
            // Homepage
            get("/") {
                call.respondText(
                    """
                    <!DOCTYPE html>
                    <html>
                    <head>
                        <title>AuthLib API Server</title>
                        <style>
                            body { font-family: Arial, sans-serif; margin: 40px; }
                            h1 { color: #333; }
                            .endpoint { background: #f5f5f5; padding: 10px; margin: 10px 0; border-radius: 5px; }
                            code { background: #e0e0e0; padding: 2px 6px; border-radius: 3px; }
                        </style>
                    </head>
                    <body>
                        <h1>AuthLib API Server</h1>
                        <p>Server is running and accepting connections from ANY client!</p>
                        <div class="endpoint">
                            <h3>GET <code>/api/users</code></h3>
                            <p>Get list of users with pagination</p>
                            <p>Query params: <code>page</code> (default: 1), <code>pageSize</code> (default: 10)</p>
                        </div>
                        <div class="endpoint">
                            <h3>POST <code>/api/login</code></h3>
                            <p>Create/login user with username and password</p>
                            <p>Body: <code>{"username": "string", "password": "string"}</code></p>
                        </div>
                        <div class="endpoint">
                            <h3>DELETE <code>/api/users/{userId}</code></h3>
                            <p>Delete a user by ID</p>
                        </div>
                    </body>
                    </html>
                    """.trimIndent(),
                    ContentType.Text.Html
                )
            }
            
            // Get users endpoint
            get("/api/users") {
                try {
                    val page = call.request.queryParameters["page"]?.toIntOrNull() ?: 1
                    val pageSize = call.request.queryParameters["pageSize"]?.toIntOrNull() ?: 10
                    
                    Logger.d("HttpServer", "GET /api/users - page: $page, pageSize: $pageSize")
                    
                    val response = authLibrary.getUsers(page, pageSize)
                    
                    if (response.status == ResponseStatus.SUCCESS && response.data != null) {
                        val users = response.data.users.map { user ->
                            mapOf(
                                "id" to user.id,
                                "username" to user.username,
                                "createdAt" to user.createdAt
                            )
                        }
                        
                        val apiResponse = ServerResponse(
                            status = true,
                            data = users,
                            error = null
                        )
                        
                        call.respond(HttpStatusCode.OK, apiResponse)
                        Logger.d("HttpServer", "GET /api/users - Success: ${users.size} users sent")
                    } else {
                        val apiResponse = ServerResponse<List<Map<String, Any>>>(
                            status = false,
                            data = null,
                            error = response.error ?: "Failed to get users"
                        )
                        call.respond(HttpStatusCode.InternalServerError, apiResponse)
                        Logger.e("HttpServer", "GET /api/users - Error: ${response.error}")
                    }
                } catch (e: Exception) {
                    Logger.e("HttpServer", "GET /api/users - Exception: ${e.message}")
                    val apiResponse = ServerResponse<List<Map<String, Any>>>(
                        status = false,
                        data = null,
                        error = e.message ?: "Internal server error"
                    )
                    call.respond(HttpStatusCode.InternalServerError, apiResponse)
                }
            }
            
            // Login/Create user endpoint
            post("/api/login") {
                try {
                    // Handle CORS preflight
                    if (call.request.httpMethod == HttpMethod.Options) {
                        call.respond(HttpStatusCode.OK)
                        return@post
                    }
                    
                    Logger.d("HttpServer", "POST /api/login - received request")
                    
                    val loginRequest = call.receive<LoginRequest>()
                    
                    if (loginRequest.username.isBlank() || loginRequest.password.isBlank()) {
                        val apiResponse = ServerResponse<Nothing>(
                            status = false,
                            data = null,
                            error = "Username and password are required"
                        )
                        call.respond(HttpStatusCode.BadRequest, apiResponse)
                        return@post
                    }
                    
                    Logger.d("HttpServer", "POST /api/login - username: ${loginRequest.username}")
                    
                    val response = authLibrary.saveUser(loginRequest.username, loginRequest.password)
                    
                    if (response.status == ResponseStatus.SUCCESS) {
                        val apiResponse = ServerResponse<Nothing>(
                            status = true,
                            data = null,
                            error = null
                        )
                        call.respond(HttpStatusCode.OK, apiResponse)
                        Logger.d("HttpServer", "POST /api/login - Success: User saved")
                    } else {
                        // Check if it's a constraint error (duplicate username)
                        val errorMsg = response.error ?: "Failed to save user"
                        val isConstraintError = errorMsg.contains("constraint", ignoreCase = true) ||
                                              errorMsg.contains("unique", ignoreCase = true) ||
                                              errorMsg.contains("sqlite", ignoreCase = true)
                        
                        val statusCode = if (isConstraintError) {
                            HttpStatusCode.Conflict // 409
                        } else {
                            HttpStatusCode.InternalServerError // 500
                        }
                        
                        val apiResponse = ServerResponse<Nothing>(
                            status = false,
                            data = null,
                            error = if (isConstraintError) "Username already exists" else errorMsg
                        )
                        call.respond(statusCode, apiResponse)
                        Logger.e("HttpServer", "POST /api/login - Error: $errorMsg")
                    }
                } catch (e: Exception) {
                    Logger.e("HttpServer", "POST /api/login - Exception: ${e.message}")
                    val apiResponse = ServerResponse<Nothing>(
                        status = false,
                        data = null,
                        error = e.message ?: "Internal server error"
                    )
                    call.respond(HttpStatusCode.InternalServerError, apiResponse)
                }
            }
            
            // Delete user endpoint
            delete("/api/users/{userId}") {
                try {
                    val userId = call.parameters["userId"]?.toLongOrNull()
                    
                    if (userId == null) {
                        val apiResponse = ServerResponse<Nothing>(
                            status = false,
                            data = null,
                            error = "Invalid user ID"
                        )
                        call.respond(HttpStatusCode.BadRequest, apiResponse)
                        return@delete
                    }
                    
                    Logger.d("HttpServer", "DELETE /api/users/$userId - received request")
                    
                    val response = authLibrary.deleteUser(userId)
                    
                    if (response.status == ResponseStatus.SUCCESS) {
                        val apiResponse = ServerResponse<Nothing>(
                            status = true,
                            data = null,
                            error = null
                        )
                        call.respond(HttpStatusCode.OK, apiResponse)
                        Logger.d("HttpServer", "DELETE /api/users/$userId - Success")
                    } else {
                        val apiResponse = ServerResponse<Nothing>(
                            status = false,
                            data = null,
                            error = response.error ?: "Failed to delete user"
                        )
                        call.respond(HttpStatusCode.InternalServerError, apiResponse)
                        Logger.e("HttpServer", "DELETE /api/users/$userId - Error: ${response.error}")
                    }
                } catch (e: Exception) {
                    Logger.e("HttpServer", "DELETE /api/users - Exception: ${e.message}")
                    val apiResponse = ServerResponse<Nothing>(
                        status = false,
                        data = null,
                        error = e.message ?: "Internal server error"
                    )
                    call.respond(HttpStatusCode.InternalServerError, apiResponse)
                }
            }
        }
    }
}

