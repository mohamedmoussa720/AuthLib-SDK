package com.expertapps.server

import com.expertapps.auth.AuthLibrary
import com.expertapps.auth.models.ResponseStatus
import com.expertapps.server.models.HTTPRequest
import com.expertapps.server.models.HTTPResponse
import kotlinx.datetime.Clock
import kotlinx.serialization.Serializable
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json

@Serializable
data class ApiResponse<T>(
    val status: Boolean,
    val data: T? = null,
    val error: String? = null
)

@Serializable
data class LoginRequest(
    val username: String,
    val password: String
)

@Serializable
data class UserResponse(
    val id: Long,
    val username: String,
    val name: String,
    val email: String = "",
    val createdAt: Long
)

class RequestHandler(private val authLibrary: AuthLibrary) : ServerDelegate {
    
    override suspend fun onRequest(request: HTTPRequest): HTTPResponse {
        return when {
            request.path == "/" && request.method == "GET" -> handleHomePage()
            request.path == "/health" && request.method == "GET" -> handleHealth()
            request.path == "/api/data" && request.method == "GET" -> handleData()
            request.path == "/api/time" && request.method == "GET" -> handleTime()
            request.path == "/api/users" && request.method == "GET" -> handleGetUsers()
            request.path == "/api/login" && request.method == "POST" -> handleLogin(request)
            request.path == "/api/login" && request.method == "OPTIONS" -> handleCorsPreflight()
            else -> HTTPResponse.notFound("Path not found: ${request.path}")
        }
    }
    
    override fun onClientConnected(connectionId: String) {
        // Log connection if needed
    }
    
    override fun onClientDisconnected(connectionId: String) {
        // Log disconnection if needed
    }
    
    override fun onError(error: Throwable) {
        // Log error if needed
    }
    
    private fun handleHomePage(): HTTPResponse {
        val html = """
            <!DOCTYPE html>
            <html>
            <head>
                <title>iOS KMP Server</title>
                <style>
                    body { font-family: -apple-system; padding: 40px; background: #f5f5f5; }
                    .container { max-width: 600px; margin: 0 auto; background: white; padding: 30px; border-radius: 10px; box-shadow: 0 2px 10px rgba(0,0,0,0.1); }
                    h1 { color: #007AFF; }
                    .status { background: #34C759; color: white; padding: 10px; border-radius: 5px; display: inline-block; }
                </style>
            </head>
            <body>
                <div class="container">
                    <h1>🚀 iOS KMP Server</h1>
                    <p class="status">Server is Running!</p>
                    <p>This server is running on an iOS device using Kotlin Multiplatform.</p>
                    <h2>Available Endpoints:</h2>
                    <ul>
                        <li><code>/health</code> - Server health status</li>
                        <li><code>GET /api/users</code> - Get users list</li>
                        <li><code>POST /api/login</code> - Login with username and password</li>
                        <li><code>/api/data</code> - Sample API endpoint</li>
                        <li><code>/api/time</code> - Current server time</li>
                    </ul>
                </div>
            </body>
            </html>
        """.trimIndent()
        
        return HTTPResponse.ok(html, mapOf("Content-Type" to "text/html"))
    }
    
    private fun handleHealth(): HTTPResponse {
        val healthData = mapOf(
            "status" to "healthy",
            "uptime" to Clock.System.now().toEpochMilliseconds(),
            "platform" to "iOS KMP"
        )
        return HTTPResponse.json(Json.encodeToString(healthData))
    }
    
    private fun handleData(): HTTPResponse {
        val data = mapOf(
            "message" to "Hello from iOS KMP Server",
            "timestamp" to Clock.System.now().toEpochMilliseconds(),
            "random" to (1..100).random()
        )
        return HTTPResponse.json(Json.encodeToString(data))
    }
    
    private fun handleTime(): HTTPResponse {
        val timeData = mapOf(
            "time" to Clock.System.now().toEpochMilliseconds(),
            "timezone" to "UTC"
        )
        return HTTPResponse.json(Json.encodeToString(timeData))
    }
    
    private suspend fun handleGetUsers(): HTTPResponse {
        return try {
            val response = authLibrary.getUsers(page = 1, pageSize = 100)
            
            if (response.status == ResponseStatus.SUCCESS && response.data != null) {
                val users = response.data?.users?.map { user ->
                    UserResponse(
                        id = user.id,
                        username = user.username,
                        name = user.username,
                        email = "",
                        createdAt = user.createdAt
                    )
                }
                
                val apiResponse = ApiResponse(
                    status = true,
                    data = users,
                    error = null
                )
                
                HTTPResponse.json(
                    Json.encodeToString(apiResponse),
                    headers = mapOf("Access-Control-Allow-Origin" to "*")
                )
            } else {
                val apiResponse = ApiResponse<List<UserResponse>>(
                    status = false,
                    data = emptyList(),
                    error = response.error ?: "Unknown error"
                )
                HTTPResponse.json(Json.encodeToString(apiResponse), statusCode = 500)
            }
        } catch (e: Exception) {
            val apiResponse = ApiResponse<List<UserResponse>>(
                status = false,
                data = emptyList(),
                error = e.message ?: "Internal server error"
            )
            HTTPResponse.json(Json.encodeToString(apiResponse), statusCode = 500)
        }
    }
    
    private suspend fun handleLogin(request: HTTPRequest): HTTPResponse {
        return try {
            val (username, password) = parseLoginRequest(request)
            
            if (username == null || password == null) {
                val errorResponse = ApiResponse<Unit>(
                    status = false,
                    data = null,
                    error = "Invalid request body. Expected 'username' and 'password' as form-encoded data or JSON."
                )
                return HTTPResponse.badRequest(Json.encodeToString(errorResponse))
            }
            
            val response = authLibrary.saveUser(username, password)
            
            if (response.status == ResponseStatus.SUCCESS) {
                val loginResponse = ApiResponse<Unit>(
                    status = true,
                    data = null,
                    error = null
                )
                HTTPResponse.json(
                    Json.encodeToString(loginResponse),
                    headers = mapOf("Access-Control-Allow-Origin" to "*")
                )
            } else {
                val errorMessage = response.error ?: "Unknown error"
                val statusCode = if (errorMessage.contains("already exists", ignoreCase = true)) {
                    409
                } else {
                    500
                }
                
                val errorResponse = ApiResponse<Unit>(
                    status = false,
                    data = null,
                    error = errorMessage
                )
                HTTPResponse.json(
                    Json.encodeToString(errorResponse),
                    statusCode = statusCode,
                    headers = mapOf("Access-Control-Allow-Origin" to "*")
                )
            }
        } catch (e: Exception) {
            val errorMessage = e.message ?: "Internal server error"
            val statusCode = if (errorMessage.contains("constraint", ignoreCase = true) ||
                errorMessage.contains("unique", ignoreCase = true) ||
                errorMessage.contains("duplicate", ignoreCase = true)) {
                409
            } else {
                500
            }
            
            val errorResponse = ApiResponse<Unit>(
                status = false,
                data = null,
                error = errorMessage
            )
            HTTPResponse.json(
                Json.encodeToString(errorResponse),
                statusCode = statusCode,
                headers = mapOf("Access-Control-Allow-Origin" to "*")
            )
        }
    }
    
    private fun handleCorsPreflight(): HTTPResponse {
        return HTTPResponse.ok(
            "",
            headers = mapOf(
                "Access-Control-Allow-Origin" to "*",
                "Access-Control-Allow-Methods" to "POST, OPTIONS",
                "Access-Control-Allow-Headers" to "Content-Type",
                "Access-Control-Max-Age" to "86400"
            )
        )
    }
    
    private fun parseLoginRequest(request: HTTPRequest): Pair<String?, String?> {
        val contentType = request.headers["Content-Type"]?.lowercase() ?: ""
        val body = request.body ?: return Pair(null, null)
        val bodyString = body.decodeToString()
        
        // Try JSON first
        if (contentType.contains("application/json") || bodyString.trimStart().startsWith("{")) {
            try {
                val json = Json.decodeFromString<LoginRequest>(bodyString)
                return Pair(json.username, json.password)
            } catch (e: Exception) {
                // Fall through to form-encoded
            }
        }
        
        // Try form-encoded
        val pairs = bodyString.split("&")
        var username: String? = null
        var password: String? = null
        
        for (pair in pairs) {
            val parts = pair.split("=", limit = 2)
            if (parts.size == 2) {
                val key = decodeURLComponent(parts[0])
                val value = decodeURLComponent(parts[1])
                when (key) {
                    "username" -> username = value
                    "password" -> password = value
                }
            }
        }
        
        return Pair(username, password)
    }
    
    private fun decodeURLComponent(encoded: String): String {
        return encoded
            .replace("+", " ")
            .replace("%20", " ")
            .replace("%21", "!")
            .replace("%22", "\"")
            .replace("%23", "#")
            .replace("%24", "$")
            .replace("%25", "%")
            .replace("%26", "&")
            .replace("%27", "'")
            .replace("%28", "(")
            .replace("%29", ")")
            .replace("%2A", "*")
            .replace("%2B", "+")
            .replace("%2C", ",")
            .replace("%2D", "-")
            .replace("%2E", ".")
            .replace("%2F", "/")
            .replace("%3A", ":")
            .replace("%3B", ";")
            .replace("%3C", "<")
            .replace("%3D", "=")
            .replace("%3E", ">")
            .replace("%3F", "?")
            .replace("%40", "@")
            // Add more common URL encodings as needed
    }
}

