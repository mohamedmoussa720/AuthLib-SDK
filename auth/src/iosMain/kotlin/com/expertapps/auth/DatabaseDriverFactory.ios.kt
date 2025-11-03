package com.expertapps.auth

import com.expertapps.auth.database.AuthDatabase
import com.squareup.sqldelight.db.SqlDriver
import com.squareup.sqldelight.drivers.native.NativeSqliteDriver

actual class DatabaseDriverFactory {
    actual fun createDriver(): SqlDriver {
        return NativeSqliteDriver(AuthDatabase.Schema, "auth.db")
    }
}
