package com.expertapps.server

import com.expertapps.server.models.HTTPRequest
import com.expertapps.server.models.HTTPResponse

class HTTPServer(
    private val port: Int,
    private val delegate: ServerDelegate
) {
    private val platformServer: PlatformHTTPServer = createPlatformHTTPServer(port, delegate)

    suspend fun start(): Result<Unit> {
        return platformServer.start()
    }

    fun stop() {
        platformServer.stop()
    }

    fun isRunning(): Boolean {
        return platformServer.isRunning()
    }

    fun getLocalIPAddress(): String {
        return platformServer.getLocalIPAddress()
    }

    fun getPort(): Int = port
}

expect fun createPlatformHTTPServer(port: Int, delegate: ServerDelegate): PlatformHTTPServer

interface PlatformHTTPServer {
    suspend fun start(): Result<Unit>
    fun stop()
    fun isRunning(): Boolean
    fun getLocalIPAddress(): String
}

