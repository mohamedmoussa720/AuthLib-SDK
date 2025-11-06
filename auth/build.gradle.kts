plugins {
    kotlin("multiplatform") version "1.9.22"
    kotlin("native.cocoapods") version "1.9.22"
    // id("com.android.library") version "8.3.0"  // Disabled for iOS-only
    id("com.squareup.sqldelight") version "1.5.5"
}

kotlin {
    // Android target temporarily disabled for iOS-only build
    // androidTarget {
    //     publishLibraryVariants("release", "debug")
    // }
    
    iosX64()
    iosArm64()
    iosSimulatorArm64()
    
    cocoapods {
        summary = "KMP Auth Library with SQLDelight"
        homepage = "https://github.com/yourorg/kmp-auth"
        version = "1.0.2"
        ios.deploymentTarget = "14.1"
        framework {
            baseName = "AuthLib"
            isStatic = true
        }
    }
    
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("com.squareup.sqldelight:runtime:1.5.5")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.8.0")
                implementation("org.jetbrains.kotlinx:kotlinx-datetime:0.6.0")
            }
        }
        // val androidMain by getting {
        //     dependencies {
        //         implementation("app.cash.sqldelight:android-driver:2.0.2")
        //     }
        // }
        val iosX64Main by getting
        val iosArm64Main by getting
        val iosSimulatorArm64Main by getting
        val iosMain by creating {
            dependsOn(commonMain)
            iosX64Main.dependsOn(this)
            iosArm64Main.dependsOn(this)
            iosSimulatorArm64Main.dependsOn(this)
            dependencies {
                implementation("com.squareup.sqldelight:native-driver:1.5.5")
            }
        }
    }
}

// Android configuration disabled for iOS-only build
// android {
//     namespace = "com.expertapps.auth"
//     compileSdk = 34
//     
//     defaultConfig {
//         minSdk = 24
//     }
//     
//     compileOptions {
//         sourceCompatibility = JavaVersion.VERSION_17
//         targetCompatibility = JavaVersion.VERSION_17
//     }
// }

sqldelight {
    database("AuthDatabase") {
        packageName = "com.expertapps.auth.database"
    }
}

// Fix SQLDelight generated code bug
afterEvaluate {
    tasks.matching { it.name.contains("compileKotlin") }.configureEach {
        doFirst {
            val file = file("${buildDir}/generated/sqldelight/code/AuthDatabase/com/expertapps/auth/database/auth/AuthDatabaseImpl.kt")
            if (file.exists()) {
                val content = file.readText()
                val fixed = content.replace("value__", "value_")
                file.writeText(fixed)
            }
        }
    }
}
