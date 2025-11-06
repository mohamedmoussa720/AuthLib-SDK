package com.expertapps.server

import com.expertapps.auth.AuthLibrary
import com.expertapps.auth.createIOSAuthLibrary
import com.expertapps.server.models.HTTPRequest
import com.expertapps.server.models.HTTPResponse
import kotlinx.coroutines.runBlocking

/**
 * Helper object for easy integration with Swift code.
 * This provides a simple way to process HTTP requests from Swift.
 */
object ServerHelper {
    private var requestHandler: RequestHandler? = null
    
    /**
     * Initialize the server helper with AuthLib integration.
     * Call this once before processing requests.
     */
    fun initialize() {
        if (requestHandler == null) {
            val authLibrary = createIOSAuthLibrary()
            requestHandler = RequestHandler(authLibrary)
        }
    }
    
    /**
     * Process an HTTP request and return the response.
     * This can be called from Swift code.
     * 
     * @param method HTTP method (GET, POST, etc.)
     * @param path Request path
     * @param headers Request headers as a map
     * @param body Request body as byte array (can be null)
     * @return HTTP response as byte array
     */
    fun processRequest(
        method: String,
        path: String,
        headers: Map<String, String>,
        body: ByteArray?
    ): ByteArray {
        initialize()
        
        val request = HTTPRequest(method, path, headers, body)
        
        return runBlocking {
            val response = requestHandler!!.onRequest(request)
            serializeHTTPResponse(response)
        }
    }
    
    /**
     * Process an HTTP request from raw request data.
     * This is the easiest way to integrate with existing Swift code.
     * 
     * @param requestData Raw HTTP request bytes
     * @return HTTP response as byte array
     */
    fun processRequestFromRawData(requestData: ByteArray): ByteArray {
        initialize()
        
        val request = parseHTTPRequest(requestData)
        
        return runBlocking {
            val response = requestHandler!!.onRequest(request)
            serializeHTTPResponse(response)
        }
    }
    
    private fun parseHTTPRequest(data: ByteArray): HTTPRequest {
        val requestString = data.decodeToString()
        val lines = requestString.split("\r\n")
        
        if (lines.isEmpty()) {
            return HTTPRequest("", "/", emptyMap(), null)
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
        
        // Parse body - find header-body separator in raw bytes
        val headerEndMarker = "\r\n\r\n".encodeToByteArray()
        var headerEndIndex: Int? = null
        
        for (i in 0..(data.size - headerEndMarker.size)) {
            val slice = data.copyOfRange(i, i + headerEndMarker.size)
            if (slice.contentEquals(headerEndMarker)) {
                headerEndIndex = i + headerEndMarker.size
                break
            }
        }
        
        val body = if (headerEndIndex != null && headerEndIndex < data.size) {
            data.copyOfRange(headerEndIndex, data.size)
        } else {
            null
        }
        
        return HTTPRequest(method, path, headers, body)
    }
    
    private fun serializeHTTPResponse(response: HTTPResponse): ByteArray {
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

