package com.expertapps.auth

import com.expertapps.auth.models.ApiResponse
import com.expertapps.auth.models.PaginatedUsers
import com.expertapps.auth.models.User

class AuthLibrary(private val authManager: AuthManager) {
    private var httpServer: HttpServer? = null
    
    suspend fun saveUser(username: String, password: String): ApiResponse<User> {
        return authManager.saveUser(username, password)
    }
    
    suspend fun getUsers(page: Int = 1, pageSize: Int = 10): ApiResponse<PaginatedUsers> {
        return authManager.getUsers(page, pageSize)
    }
    
    suspend fun deleteUser(userId: Long): ApiResponse<Unit> {
        return authManager.deleteUser(userId)
    }
    
    /**
     * Start HTTP server that accepts connections from ANY client
     * @param host Host to bind to (default: "0.0.0.0" to accept from any IP)
     * @param port Port to listen on (default: 8080)
     */
    suspend fun startServer(host: String = "0.0.0.0", port: Int = 8080) {
        if (httpServer == null) {
            httpServer = HttpServer(this)
        }
        val server = httpServer ?: throw Exception("Failed to create HTTP server instance")
        // start() will throw exception if it fails
        // Binds to 0.0.0.0 to accept connections from any client IP
        server.start(host, port)
    }
    
    /**
     * Stop the HTTP server
     */
    suspend fun stopServer() {
        try {
            httpServer?.stop()
        } catch (e: Exception) {
            throw Exception("Failed to stop HTTP server: ${e.message}")
        } finally {
            httpServer = null
        }
    }
    
    /**
     * Check if server is running
     */
    fun isServerRunning(): Boolean {
        return httpServer?.isRunning() ?: false
    }
}

fun createAuthLibrary(databaseFactory: DatabaseDriverFactory): AuthLibrary {
    val database = createDatabase(databaseFactory)
    val authManager = AuthManager(database)
    return AuthLibrary(authManager)
}