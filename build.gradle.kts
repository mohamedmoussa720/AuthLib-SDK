plugins {
    kotlin("multiplatform") version "1.9.22" apply false
    id("com.android.library") version "8.3.0" apply false
    id("com.squareup.sqldelight") version "1.5.5" apply false
    id("org.jetbrains.kotlin.native.cocoapods") version "1.9.22" apply false
}

allprojects {
    repositories {
        google()
        mavenCentral()
    }
}
