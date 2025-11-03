package com.expertapps.auth

import com.expertapps.auth.models.ApiResponse
import com.expertapps.auth.models.PaginatedUsers
import com.expertapps.auth.models.User

class AuthLibrary(private val authManager: AuthManager) {
    
    suspend fun saveUser(username: String, password: String): ApiResponse<User> {
        return authManager.saveUser(username, password)
    }
    
    suspend fun getUsers(page: Int = 1, pageSize: Int = 10): ApiResponse<PaginatedUsers> {
        return authManager.getUsers(page, pageSize)
    }
    
    suspend fun deleteUser(userId: Long): ApiResponse<Unit> {
        return authManager.deleteUser(userId)
    }
}

fun createAuthLibrary(databaseFactory: DatabaseDriverFactory): AuthLibrary {
    val database = createDatabase(databaseFactory)
    val authManager = AuthManager(database)
    return AuthLibrary(authManager)
}