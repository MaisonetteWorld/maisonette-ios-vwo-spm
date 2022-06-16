# VWO
[![Version](https://img.shields.io/cocoapods/v/VWO.svg?style=flat)](http://cocoapods.org/pods/VWO)
[![License](https://img.shields.io/cocoapods/l/VWO.svg?style=flat)](http://cocoapods.org/pods/VWO)
[![Platform](https://img.shields.io/cocoapods/p/VWO.svg?style=flat)](http://cocoapods.org/pods/VWO)

## Swift package manager support
This fork re-publishes the VWO iOS SDK as a Swift package.

### Versioning
The versioning convention we follow is `100 + major version number published by VWO`.


For example `v101.2.3` of this fork corresponds to VWO `v1.2.3`

### Syncing and re-generating the package
1. Merge in changes from the source repository `master` into `master` of this repo
2. While resolving conflicts, ensure the `.swiftpm` directory and the `Package.swift` file are merged using *our* changes
2. Run the script `makePackage`. This moves source files into a common path and creates a separate public headers directory
3. Ensure compilation succeeds
4. Test integration into your app
5. Push your changes and tag the release with the appropriate version number


## Installation
VWO is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```
pod 'VWO'
```

## iOS Version Support

This library supports iOS version 9.0 and above.

## Setting up VWO Account

Sign Up for VWO account at https://vwo.com

## Getting Started Documentation
* [Installation Instructions](http://developers.vwo.com/reference#ios-sdk-installation)
* [Creating and Running Campaign](https://vwo.com/knowledge/folder-creating-mobile-app-campaigns/)

## Author

Wingify, info@wingify.com

## License

By using this SDK, you agree to abide by the [VWO Terms & Conditions](https://vwo.com/terms-conditions).
