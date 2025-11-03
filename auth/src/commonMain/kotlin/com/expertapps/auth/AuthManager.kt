package com.expertapps.auth

import com.expertapps.auth.database.AuthDatabase
import com.expertapps.auth.models.ApiResponse
import com.expertapps.auth.models.PaginatedUsers
import com.expertapps.auth.models.ResponseStatus
import com.expertapps.auth.models.User

class AuthManager(
    private val database: AuthDatabase
) {
    suspend fun saveUser(username: String, password: String): ApiResponse<User> {
        return try {
            val currentTime = kotlinx.datetime.Clock.System.now().toEpochMilliseconds()
            database.authDatabaseQueries.insertUser(username, password, currentTime)
            
            // Get the last inserted user using mapper
            val user = database.authDatabaseQueries.getAllUsers(1, 0) { id, username, password, created_at ->
                User(
                    id = id,
                    username = username,
                    password = password,
                    createdAt = created_at
                )
            }.executeAsOne()
            
            // Log success message
            Logger.d("AuthManager", "$username added successfully")
            
            ApiResponse(
                status = ResponseStatus.SUCCESS,
                data = user
            )
        } catch (e: Exception) {
            ApiResponse(
                status = ResponseStatus.ERROR,
                error = e.message ?: "Failed to save user"
            )
        }
    }
    
    suspend fun getUsers(page: Int = 1, pageSize: Int = 10): ApiResponse<PaginatedUsers> {
        return try {
            val offset = (page - 1) * pageSize
            
            // Collect users from database using mapper to avoid generated code bug
            val userList = database.authDatabaseQueries.getAllUsers(
                pageSize.toLong(), 
                offset.toLong()
            ) { id, username, password, created_at ->
                User(
                    id = id,
                    username = username,
                    password = password,
                    createdAt = created_at
                )
            }.executeAsList()
            
            // Get count from the database
            val totalCount = database.authDatabaseQueries.getUsersCount().executeAsOne()
            
            val totalPages = if (pageSize > 0) ((totalCount + pageSize - 1) / pageSize).toInt() else 0
            
            val paginatedUsers = PaginatedUsers(
                users = userList,
                currentPage = page,
                pageSize = pageSize,
                totalCount = totalCount,
                totalPages = totalPages
            )
            
            ApiResponse(
                status = ResponseStatus.SUCCESS,
                data = paginatedUsers
            )
        } catch (e: Exception) {
            ApiResponse(
                status = ResponseStatus.ERROR,
                error = e.message ?: "Failed to get users"
            )
        }
    }
    
    suspend fun deleteUser(userId: Long): ApiResponse<Unit> {
        return try {
            database.authDatabaseQueries.deleteUser(userId)
            ApiResponse(
                status = ResponseStatus.SUCCESS,
                data = Unit
            )
        } catch (e: Exception) {
            ApiResponse(
                status = ResponseStatus.ERROR,
                error = e.message ?: "Failed to delete user"
            )
        }
    }
}
