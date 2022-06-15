// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "vwo-ios",
    products: [
        .library(
            name: "vwo-ios",
            targets: ["vwo-ios"]),
    ],
    dependencies: [
        .package(url: "https://github.com/socketio/socket.io-client-swift", "15.2.0"..<"15.2.1")
    ],
    targets: [
        .target(
            name: "vwo-ios",
            dependencies: [
                .product(name: "SocketIO", package: "socket.io-client-swift")
            ],
            path: "VWO/",
            publicHeadersPath: "include",
            cSettings: [
                .headerSearchPath(""),
                .headerSearchPath("Extensions/"),
                .headerSearchPath("Helpers/"),
                .headerSearchPath("Models/")
            ]
        )
    ]
)
