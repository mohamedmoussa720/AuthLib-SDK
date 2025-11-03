package com.expertapps.auth

import android.content.Context
import com.expertapps.auth.database.AuthDatabase
import com.squareup.sqldelight.android.AndroidSqliteDriver
import com.squareup.sqldelight.db.SqlDriver

actual class DatabaseDriverFactory(private val context: Context) {
    actual fun createDriver(): SqlDriver {
        return AndroidSqliteDriver(AuthDatabase.Schema, context, "auth.db")
    }
}