plugins {
    kotlin("multiplatform") version "1.9.22"
    kotlin("native.cocoapods") version "1.9.22"
    kotlin("plugin.serialization") version "1.9.22"
}

kotlin {
    iosX64()
    iosArm64()
    iosSimulatorArm64()
    
    cocoapods {
        summary = "KMP HTTP Server Library"
        homepage = "https://github.com/yourorg/kmp-server"
        version = "1.0.0"
        ios.deploymentTarget = "14.1"
        framework {
            baseName = "ServerLib"
            isStatic = true
        }
    }
    
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.8.0")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.6.0")
                implementation("org.jetbrains.kotlinx:kotlinx-datetime:0.6.0")
                implementation(project(":auth"))
            }
        }
        val iosX64Main by getting
        val iosArm64Main by getting
        val iosSimulatorArm64Main by getting
        val iosMain by creating {
            dependsOn(commonMain)
            iosX64Main.dependsOn(this)
            iosArm64Main.dependsOn(this)
            iosSimulatorArm64Main.dependsOn(this)
        }
    }
}

