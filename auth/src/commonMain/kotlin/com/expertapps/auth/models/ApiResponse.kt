package com.expertapps.auth.models

import kotlinx.serialization.Serializable

@Serializable
data class User(
    val id: Long = 0,
    val username: String,
    val password: String,
    val createdAt: Long
)

@Serializable
data class UserDTO(
    val id: Long,
    val username: String,
    val createdAt: Long
)

@Serializable
data class PaginatedUsers(
    val users: List<User>,
    val currentPage: Int,
    val pageSize: Int,
    val totalCount: Long,
    val totalPages: Int
)

data class ApiResponse<T>(
    val status: ResponseStatus,
    val error: String? = null,
    val data: T? = null
)

enum class ResponseStatus {
    SUCCESS,
    ERROR
}