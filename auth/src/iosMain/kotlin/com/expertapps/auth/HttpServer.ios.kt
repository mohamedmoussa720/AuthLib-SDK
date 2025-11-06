package com.expertapps.auth

import io.ktor.server.application.*
import io.ktor.server.cio.*
import io.ktor.server.engine.*
import kotlinx.coroutines.*

/**
 * iOS-specific server engine wrapper
 * Binds to the specified host (0.0.0.0 for all interfaces) and port
 * Accepts connections from ANY client IP address
 */
actual class ServerEngine(private val engine: ApplicationEngine) {
    actual suspend fun start() {
        engine.start(wait = true)
    }
    
    actual suspend fun stop() {
        engine.stop(1000, 2000)
    }
}

actual fun createServerEngine(host: String, port: Int, module: Application.() -> Unit): ServerEngine {
    val engine = embeddedServer(
        factory = CIO,
        host = host, // Use 0.0.0.0 to accept from any client
        port = port,
        module = module
    )
    return ServerEngine(engine)
}

