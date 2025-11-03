package com.expertapps.auth.models

data class User(
    val id: Long = 0,
    val username: String,
    val password: String,
    val createdAt: Long
)

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