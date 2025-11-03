package com.expertapps.auth

fun createIOSAuthLibrary(): AuthLibrary {
    val databaseFactory = DatabaseDriverFactory()
    return createAuthLibrary(databaseFactory)
}