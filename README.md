# AuthLib - KMP Auth Library

Kotlin Multiplatform authentication library with SQLDelight.

## 📦 Installation

### Swift Package Manager

1. Open Xcode
2. **File → Add Package Dependencies...**
3. Enter URL: `https://github.com/mohamedmoussa720/AuthLib-SDK.git`
4. Select version (or use latest)
5. Click **"Add Package"**

## 🚀 Usage

```swift
import AuthLib

// Create library instance
let authLib = IOSAuthFactoryKt.createIOSAuthLibrary()

// Save user
let response = try await authLib.saveUser(
    username: "john", 
    password: "secret"
)

// Get users with pagination
let usersResponse = try await authLib.getUsers(
    page: 1, 
    pageSize: 10
)
```

## 📚 Features

- ✅ User authentication
- ✅ SQLDelight database integration
- ✅ Pagination support
- ✅ Type-safe API
- ✅ iOS-ready framework

## 📄 License

MIT License
