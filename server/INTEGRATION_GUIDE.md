# Server Module Integration Guide

## Overview

The server module has been successfully converted from Swift to Kotlin Multiplatform (KMP). The module provides HTTP server functionality that can accept IP and port configuration and integrates with AuthLib for user management.

## Module Structure

```
server/
├── build.gradle.kts          # Build configuration
├── README.md                 # Documentation
├── INTEGRATION_GUIDE.md      # This file
└── src/
    ├── commonMain/           # Shared Kotlin code
    │   └── kotlin/com/expertapps/server/
    │       ├── HTTPServer.kt          # Main server interface
    │       ├── RequestHandler.kt      # Request processing logic
    │       ├── ServerManager.kt       # Server lifecycle management
    │       ├── ServerDelegate.kt      # Delegate interface
    │       ├── ServerConnection.kt    # Connection interface
    │       └── models/
    │           ├── HTTPRequest.kt     # Request model
    │           └── HTTPResponse.kt    # Response model
    └── iosMain/              # iOS-specific code
        └── kotlin/com/expertapps/server/
            ├── HTTPServer.ios.kt       # iOS platform implementation
            ├── IOSServerFactory.kt    # iOS factory
            ├── ServerFactory.kt        # General factory functions
            └── ServerHelper.kt        # Helper for Swift integration
```

## Key Features

1. **Request Handling**: All request processing logic is in Kotlin
2. **AuthLib Integration**: Automatic integration with AuthLib for `/api/users` and `/api/login`
3. **Multiple Integration Options**: Three ways to integrate with existing Swift code
4. **Type Safety**: Full type safety with Kotlin models
5. **Error Handling**: Proper error handling with appropriate HTTP status codes

## Quick Start

### Option 1: Use ServerHelper (Easiest)

In your Swift code, replace the request handling logic:

```swift
import ServerLib

// In your HTTPServer class, modify the didReceiveRequest method:
func server(_ server: HTTPServer, didReceiveRequest request: HTTPRequest, from connection: NWConnection) {
    // Convert Swift HTTPRequest to raw data
    let requestData = request.rawData  // Your existing HTTPRequest should have this
    
    // Process using Kotlin
    let responseData = ServerHelper.shared.processRequestFromRawData(requestData: requestData)
    
    // Send response
    connection.send(content: responseData, completion: .contentProcessed { error in
        if let error = error {
            print("Failed to send response: \(error)")
        }
    })
}
```

### Option 2: Use RequestHandler Directly

```swift
import ServerLib

let handler = ServerFactoryKt.createRequestHandler()

// Create HTTPRequest from your Swift HTTPRequest
let kotlinRequest = HTTPRequest(
    method: request.method,
    path: request.path,
    headers: request.headers,
    body: request.body
)

// Process request (this is a suspend function, so you'll need to handle it properly)
// You may need to use a completion handler or async/await
```

### Option 3: Full Kotlin Server

Use the Kotlin server implementation directly:

```kotlin
import com.expertapps.server.createIOSServer
import com.expertapps.server.ServerManager

val serverManager = createServerManager(port = 8080)
serverManager.startServer()
```

## Endpoints

All endpoints from your original Swift code are supported:

- `GET /` - Homepage
- `GET /health` - Health check
- `GET /api/data` - Sample data
- `GET /api/time` - Server time
- `GET /api/users` - Get users (uses AuthLib)
- `POST /api/login` - Login/create user (uses AuthLib)

## Differences from Swift Implementation

1. **Request Processing**: All request parsing and handling is done in Kotlin
2. **Response Format**: Responses are automatically serialized to JSON using Kotlinx Serialization
3. **Error Handling**: SQLite constraint errors are automatically detected and return appropriate status codes (409 for conflicts)
4. **Type Safety**: Full type safety with Kotlin data classes
5. **Coroutines**: Uses Kotlin coroutines for async operations

## Building

The server module is included in the main project. To build:

```bash
./gradlew :server:build
```

To generate the iOS framework:

```bash
./gradlew :server:podPublishReleaseXCFramework
```

## Next Steps

1. **Integrate with your Swift code**: Use Option 1 (ServerHelper) for the easiest integration
2. **Test endpoints**: Verify all endpoints work correctly
3. **Customize**: Add additional endpoints or modify request handling as needed
4. **Deploy**: The server module is ready to use in your iOS app

## Notes

- The iOS implementation requires external functions to be implemented in Swift for the Network framework integration
- For Option 1, you can keep most of your existing Swift server code
- The Kotlin code handles all the business logic, making it easier to maintain and test
- All AuthLib integration is automatic - no additional setup required

