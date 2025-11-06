package com.expertapps.server

/**
 * Factory functions for creating server components.
 * These can be easily called from Swift code.
 */

/**
 * Create a request handler that integrates with AuthLib.
 * This is the simplest way to get request handling functionality.
 */
fun createRequestHandler(): RequestHandler {
    val authLibrary = com.expertapps.auth.createIOSAuthLibrary()
    return RequestHandler(authLibrary)
}

/**
 * Create a server manager for a given port.
 * This provides a complete server solution with health checks and logging.
 */
fun createServerManager(port: Int): ServerManager {
    val server = createIOSServer(port)
    return ServerManager(server)
}

