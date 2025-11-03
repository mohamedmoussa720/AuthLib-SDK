// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "AuthLib",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "AuthLib",
            targets: ["AuthLib"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "AuthLib",
            path: "./AuthLib.xcframework"
        )
    ]
)
