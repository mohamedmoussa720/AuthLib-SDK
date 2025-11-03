package com.expertapps.auth

import com.expertapps.auth.database.AuthDatabase

expect class DatabaseDriverFactory {
    fun createDriver(): com.squareup.sqldelight.db.SqlDriver
}

fun createDatabase(driverFactory: DatabaseDriverFactory): AuthDatabase {
    val driver = driverFactory.createDriver()
    return AuthDatabase(driver)
}