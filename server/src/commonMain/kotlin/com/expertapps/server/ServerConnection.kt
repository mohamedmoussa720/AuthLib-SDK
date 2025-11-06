package com.expertapps.server

interface ServerConnection {
    fun sendResponse(response: com.expertapps.server.models.HTTPResponse)
    fun getConnectionId(): String
}

