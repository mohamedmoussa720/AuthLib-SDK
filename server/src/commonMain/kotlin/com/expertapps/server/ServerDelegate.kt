package com.expertapps.server

import com.expertapps.server.models.HTTPRequest
import com.expertapps.server.models.HTTPResponse

interface ServerDelegate {
    suspend fun onRequest(request: HTTPRequest): HTTPResponse
    fun onClientConnected(connectionId: String)
    fun onClientDisconnected(connectionId: String)
    fun onError(error: Throwable)
}

