// swift-tools-version:5.1
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

let package = Package(
    name: "GoogleAPIClientForREST",
    platforms: [
        .iOS(.v10),
        .macOS(.v10_12),
        .tvOS(.v10),
        .watchOS(.v6)
    ],
    products: [
        // The main library, only thing you need to use your own services.
        .library(
            name: "GoogleAPIClientForRESTCore",
            targets: ["GoogleAPIClientForRESTCore"]
        ),
        // Products for all the Services.
        .library(
            name: "GoogleAPIClientForREST_Drive",
            targets: ["GoogleAPIClientForREST_Drive"]
        ),
        // End of products.
    ],
    dependencies: [
        .package(url: "https://github.com/google/gtm-session-fetcher.git", "1.6.1" ..< "4.0.0"),
    ],
    targets: [
        .target(
            name: "GoogleAPIClientForRESTCore",
            dependencies: ["GTMSessionFetcherFull"],
            path: "Sources/Core",
            publicHeadersPath: "Public"
        ),
        .testTarget(
            name: "GoogleAPIClientForRESTTests",
            dependencies: ["GoogleAPIClientForRESTCore"],
            path: "UnitTests",
            exclude: ["GenerateTestingSvc", "TestingSvc.json"]
        ),
        .testTarget(
            name: "swift-import-test",
            dependencies: ["GoogleAPIClientForRESTCore"],
            path: "SwiftPMTests/SwiftImportTest"
        ),
        .testTarget(
            name: "objc-import-test",
            dependencies: ["GoogleAPIClientForRESTCore"],
            path: "SwiftPMTests/ObjCImportTest"
        ),
        // Targets for all the Services.
        .target(
            name: "GoogleAPIClientForREST_Drive",
            dependencies: ["GoogleAPIClientForRESTCore"],
            path: "Sources/GeneratedServices/Drive",
            publicHeadersPath: "Public"
        ),
        // End of targets.
    ]
)
