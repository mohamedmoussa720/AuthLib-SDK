package com.expertapps.server

import kotlinx.coroutines.*
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.datetime.Clock

class ServerManager(
    private val server: HTTPServer
) {
    private val _isRunning = MutableStateFlow(false)
    val isRunning: StateFlow<Boolean> = _isRunning.asStateFlow()
    
    private val _serverIP = MutableStateFlow("Not Started")
    val serverIP: StateFlow<String> = _serverIP.asStateFlow()
    
    private val _connectionCount = MutableStateFlow(0)
    val connectionCount: StateFlow<Int> = _connectionCount.asStateFlow()
    
    private val _logs = MutableStateFlow<List<String>>(emptyList())
    val logs: StateFlow<List<String>> = _logs.asStateFlow()
    
    private val _isHealthy = MutableStateFlow(false)
    val isHealthy: StateFlow<Boolean> = _isHealthy.asStateFlow()
    
    private val scope = CoroutineScope(Dispatchers.Main + SupervisorJob())
    private var healthCheckJob: Job? = null
    
    suspend fun startServer() {
        addLog("🚀 Starting server on port ${server.getPort()}...")
        server.start().fold(
            onSuccess = {
                val ip = server.getLocalIPAddress()
                val port = server.getPort()
                _serverIP.value = "http://$ip:$port"
                _isRunning.value = true
                addLog("✅ Server started successfully | URL: ${_serverIP.value} | Status: Running")
                startHealthCheck()
            },
            onFailure = { error ->
                val errorMsg = error.message ?: "Unknown error"
                addLog("❌ Failed to start server | Error: $errorMsg")
                _isRunning.value = false
                _serverIP.value = "Failed to Start"
            }
        )
    }
    
    fun stopServer() {
        addLog("🛑 Stopping server...")
        val currentConnections = _connectionCount.value
        server.stop()
        _isRunning.value = false
        _serverIP.value = "Not Started"
        _connectionCount.value = 0
        healthCheckJob?.cancel()
        addLog("🛑 Server stopped | Closed $currentConnections active connection(s)")
    }
    
    private fun startHealthCheck() {
        healthCheckJob?.cancel()
        healthCheckJob = scope.launch {
            while (isActive && _isRunning.value) {
                delay(5000)
                val healthy = server.isRunning()
                _isHealthy.value = healthy
                
                if (healthy) {
                    addLog("✅ Health check: OK")
                } else {
                    addLog("⚠️ Health check: FAILED | Server may be unhealthy")
                }
            }
        }
    }
    
    private fun addLog(message: String) {
        val timestamp = Clock.System.now().toEpochMilliseconds()
        val logEntry = "[$timestamp] $message"
        _logs.value = (listOf(logEntry) + _logs.value).take(50)
    }
    
    fun cleanup() {
        healthCheckJob?.cancel()
        scope.cancel()
        server.stop()
    }
}

