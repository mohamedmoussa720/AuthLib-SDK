package com.expertapps.auth

actual object Logger {
    actual fun d(tag: String, message: String) {
        println("[$tag] $message")
    }
    
    actual fun w(tag: String, message: String) {
        print("⚠️ [$tag] $message")
    }
    
    actual fun e(tag: String, message: String) {
        print("❌ [$tag] $message")
    }
}


