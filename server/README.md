# Server Module - Kotlin Multiplatform HTTP Server

This module provides an HTTP server implementation for iOS using Kotlin Multiplatform.

## Overview

The server module is designed to:
- Accept IP and port configuration from other apps
- Handle HTTP requests and responses
- Integrate with the AuthLib for user management endpoints
- Provide endpoints for `/api/users` and `/api/login`

## Architecture

The module is structured as follows:

- **Common Code**: Request/Response models, request handler, server interface
- **iOS Implementation**: Platform-specific server using Network framework (requires Swift bridge)

## Usage

### Creating a Server

```kotlin
import com.expertapps.server.createIOSServer
import com.expertapps.server.ServerManager

// Create server on port 8080
val server = createIOSServer(port = 8080)
val serverManager = ServerManager(server)

// Start the server
serverManager.startServer()
```

### Available Endpoints

- `GET /` - Homepage with server information
- `GET /health` - Health check endpoint
- `GET /api/data` - Sample data endpoint
- `GET /api/time` - Current server time
- `GET /api/users` - Get list of users (requires AuthLib)
- `POST /api/login` - Login/create user (requires AuthLib)

## Integration with Existing Swift Code

You can use your existing Swift HTTP server code and integrate it with the Kotlin request handlers. Here's how:

### Option 1: Use ServerHelper (Recommended)

The easiest way is to use the `ServerHelper` object from Kotlin in your Swift code:

```swift
import ServerLib

// In your Swift server code, when you receive a request:
func handleRequest(_ request: HTTPRequest, from connection: NWConnection) {
    // Parse the request to get method, path, headers, body
    let method = request.method
    let path = request.path
    let headers = request.headers
    let body = request.body
    
    // Call the Kotlin request processor
    let responseData = ServerHelper.shared.processRequest(
        method: method,
        path: path,
        headers: headers,
        body: body
    )
    
    // Send the response back to the client
    connection.send(content: responseData, completion: .contentProcessed { error in
        if let error = error {
            print("Failed to send response: \(error)")
        }
    })
}
```

### Option 2: Use RequestHandler Directly

You can also create a `RequestHandler` instance and use it:

```swift
import ServerLib

// Create the handler (this will initialize AuthLib)
let handler = RequestHandlerKt.createRequestHandler()

// Process requests
let response = handler.processRequest(request: httpRequest)
```

### Option 3: Full Kotlin Integration

If you want to use the full Kotlin server implementation, you need to implement the external functions in Swift:

```swift
import Foundation
import Network
import ServerLib

@_cdecl("initSwiftServer")
public func initSwiftServer(
    port: UInt64,
    onRequest: @escaping (UnsafePointer<UInt8>, Int) -> UnsafePointer<UInt8>?,
    onConnect: @escaping (UnsafePointer<CChar>) -> Void,
    onDisconnect: @escaping (UnsafePointer<CChar>) -> Void,
    onError: @escaping (UnsafePointer<CChar>) -> Void
) -> UInt64 {
    // Create NWListener and return handle
}

@_cdecl("startSwiftServer")
public func startSwiftServer(handle: UInt64) -> Bool {
    // Start the server listener
}

@_cdecl("stopSwiftServer")
public func stopSwiftServer(handle: UInt64) {
    // Stop the server listener
}

@_cdecl("getSwiftServerIPAddress")
public func getSwiftServerIPAddress(handle: UInt64) -> UnsafePointer<CChar>? {
    // Return the local IP address
}
```

### Implementation Notes

1. The Swift implementation should use `NWListener` and `NWConnection` from the Network framework
2. Memory management is critical - ensure proper allocation/deallocation of buffers
3. The `onRequest` callback should be called on a background queue to avoid blocking
4. Consider using a serial queue for thread safety
5. For Option 1, you can keep most of your existing Swift server code and just replace the request handling logic

## Integration with AuthLib

The server automatically integrates with AuthLib for user management:

- `/api/users` calls `authLibrary.getUsers()`
- `/api/login` calls `authLibrary.saveUser()`

The server handles errors and returns appropriate HTTP status codes (409 for conflicts, 500 for server errors, etc.).

## Configuration

The server can be configured with:
- **Port**: The port number to listen on (default: 8080)
- **IP Address**: Automatically detected from the device's network interface

## Dependencies

- Kotlin Multiplatform
- Kotlinx Coroutines
- Kotlinx Serialization
- AuthLib module (for user management)

