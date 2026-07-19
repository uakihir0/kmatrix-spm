// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "kmatrix",
    platforms: [
        .iOS(.v15),
.macOS(.v12.0)
    ],
    products: [
        .library(
            name: "kmatrix",
            targets: ["kmatrix"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "kmatrix",
            path: "./kmatrix.xcframework"
        ),
    ]
)
