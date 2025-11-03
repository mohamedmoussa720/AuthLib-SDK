package com.expertapps.auth

actual object Logger {
    actual fun d(tag: String, message: String) {
        println("[$tag] $message")
    }
}

