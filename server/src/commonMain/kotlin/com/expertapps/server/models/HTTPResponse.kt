package com.expertapps.server.models

data class HTTPResponse(
    val statusCode: Int,
    val headers: Map<String, String> = emptyMap(),
    val body: String = ""
) {
    companion object {
        fun ok(body: String = "", headers: Map<String, String> = emptyMap()): HTTPResponse {
            return HTTPResponse(200, headers, body)
        }

        fun json(jsonBody: String, statusCode: Int = 200): HTTPResponse {
            return HTTPResponse(
                statusCode = statusCode,
                headers = mapOf("Content-Type" to "application/json"),
                body = jsonBody
            )
        }

        fun notFound(message: String = "Not Found"): HTTPResponse {
            return HTTPResponse(404, mapOf("Content-Type" to "application/json"), """{"error":"$message"}""")
        }

        fun badRequest(message: String = "Bad Request"): HTTPResponse {
            return HTTPResponse(400, mapOf("Content-Type" to "application/json"), """{"error":"$message"}""")
        }

        fun internalServerError(message: String = "Internal Server Error"): HTTPResponse {
            return HTTPResponse(500, mapOf("Content-Type" to "application/json"), """{"error":"$message"}""")
        }

        fun conflict(message: String = "Conflict"): HTTPResponse {
            return HTTPResponse(409, mapOf("Content-Type" to "application/json"), """{"error":"$message"}""")
        }

        fun methodNotAllowed(allowed: List<String> = emptyList()): HTTPResponse {
            val allowedStr = allowed.joinToString(", ")
            return HTTPResponse(
                405,
                mapOf("Content-Type" to "application/json"),
                """{"error":"Method Not Allowed","allowed":[$allowedStr]}"""
            )
        }
    }
}

