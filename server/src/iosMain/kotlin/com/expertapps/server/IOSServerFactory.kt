package com.expertapps.server

import com.expertapps.auth.AuthLibrary
import com.expertapps.auth.createIOSAuthLibrary

fun createIOSServer(port: Int): HTTPServer {
    val authLibrary = createIOSAuthLibrary()
    val requestHandler = RequestHandler(authLibrary)
    return HTTPServer(port, requestHandler)
}

