package com.expertapps.server

import kotlinx.coroutines.*
import platform.Foundation.*

actual fun createPlatformHTTPServer(port: Int, delegate: ServerDelegate): PlatformHTTPServer {
    return IOSHTTPServer(port, delegate)
}

class IOSHTTPServer(
    private val port: Int,
    private val delegate: ServerDelegate
) : PlatformHTTPServer {
    
    private var isServerRunning = false
    private val serverScope = CoroutineScope(Dispatchers.Main + SupervisorJob())
    
    // This will be set by the Swift wrapper
    private var swiftServerHandle: Long = 0
    
    override suspend fun start(): Result<Unit> {
        return withContext(Dispatchers.Main) {
            try {
                // Initialize Swift server wrapper
                // Note: This requires a Swift implementation that bridges to Network framework
                // The Swift implementation should be created separately and linked to this module
                swiftServerHandle = initSwiftServer(
                    port.toULong(),
                    { requestData -> 
                        runBlocking { handleRequest(requestData) }
                    },
                    { connectionId -> delegate.onClientConnected(connectionId) },
                    { connectionId -> delegate.onClientDisconnected(connectionId) },
                    { error -> delegate.onError(RuntimeException(error)) }
                )
                
                val result = startSwiftServer(swiftServerHandle)
                if (result) {
                    isServerRunning = true
                    Result.success(Unit)
                } else {
                    Result.failure(Exception("Failed to start iOS server"))
                }
            } catch (e: Exception) {
                Result.failure(e)
            }
        }
    }
    
    override fun stop() {
        if (swiftServerHandle != 0L) {
            stopSwiftServer(swiftServerHandle)
            swiftServerHandle = 0
        }
        isServerRunning = false
        serverScope.cancel()
    }
    
    override fun isRunning(): Boolean {
        return isServerRunning && swiftServerHandle != 0L
    }
    
    override fun getLocalIPAddress(): String {
        return if (swiftServerHandle != 0L) {
            getSwiftServerIPAddress(swiftServerHandle) ?: "Unknown"
        } else {
            "Unknown"
        }
    }
    
    private suspend fun handleRequest(requestData: ByteArray): ByteArray {
        return try {
            val request = parseHTTPRequest(requestData)
            val response = delegate.onRequest(request)
            serializeHTTPResponse(response)
        } catch (e: Exception) {
            delegate.onError(e)
            serializeHTTPResponse(HTTPResponse.internalServerError(e.message ?: "Unknown error"))
        }
    }
    
    private fun parseHTTPRequest(data: ByteArray): com.expertapps.server.models.HTTPRequest {
        val requestString = data.decodeToString()
        val lines = requestString.split("\r\n")
        
        if (lines.isEmpty()) {
            return com.expertapps.server.models.HTTPRequest("", "/", emptyMap(), null)
        }
        
        // Parse first line: METHOD /path HTTP/1.1
        val firstLine = lines[0].split(" ")
        val method = firstLine.getOrNull(0) ?: ""
        val path = firstLine.getOrNull(1) ?: "/"
        
        // Parse headers
        val headers = mutableMapOf<String, String>()
        var bodyStartIndex = 0
        
        for (i in 1 until lines.size) {
            val line = lines[i]
            if (line.isEmpty()) {
                bodyStartIndex = i + 1
                break
            }
            val colonIndex = line.indexOf(':')
            if (colonIndex > 0) {
                val key = line.substring(0, colonIndex).trim()
                val value = line.substring(colonIndex + 1).trim()
                headers[key] = value
            }
        }
        
        // Parse body
        val body = if (bodyStartIndex < lines.size) {
            val bodyLines = lines.subList(bodyStartIndex, lines.size)
            val bodyString = bodyLines.joinToString("\r\n")
            // Also check raw bytes for exact body content
            val headerEndMarker = "\r\n\r\n"
            val headerEndIndex = requestString.indexOf(headerEndMarker)
            if (headerEndIndex >= 0 && headerEndIndex + headerEndMarker.length < data.size) {
                data.copyOfRange(headerEndIndex + headerEndMarker.length, data.size)
            } else {
                bodyString.encodeToByteArray()
            }
        } else {
            null
        }
        
        return com.expertapps.server.models.HTTPRequest(method, path, headers, body)
    }
    
    private fun serializeHTTPResponse(response: com.expertapps.server.models.HTTPResponse): ByteArray {
        val statusMessage = when (response.statusCode) {
            200 -> "OK"
            201 -> "Created"
            400 -> "Bad Request"
            404 -> "Not Found"
            500 -> "Internal Server Error"
            else -> "Unknown"
        }
        
        var httpResponse = "HTTP/1.1 ${response.statusCode} $statusMessage\r\n"
        
        val allHeaders = response.headers.toMutableMap()
        allHeaders["Content-Length"] = response.body.encodeToByteArray().size.toString()
        allHeaders["Connection"] = "close"
        
        for ((key, value) in allHeaders) {
            httpResponse += "$key: $value\r\n"
        }
        
        httpResponse += "\r\n${response.body}"
        
        return httpResponse.encodeToByteArray()
    }
}

// External functions that will be implemented in Swift/Objective-C
// These functions need to be implemented in a Swift file that uses the Network framework
// See README.md in the server module for implementation details
@OptIn(ExperimentalForeignApi::class)
private external fun initSwiftServer(
    port: ULong,
    onRequest: (ByteArray) -> ByteArray,
    onConnect: (String) -> Unit,
    onDisconnect: (String) -> Unit,
    onError: (String) -> Unit
): Long

@OptIn(ExperimentalForeignApi::class)
private external fun startSwiftServer(handle: Long): Boolean

@OptIn(ExperimentalForeignApi::class)
private external fun stopSwiftServer(handle: Long)

@OptIn(ExperimentalForeignApi::class)
private external fun getSwiftServerIPAddress(handle: Long): String?
