# WeChat

微信 1.9.9 SDK XCFramework SwiftPackage

### 工程引用
在 `Link Binary With Libraries` 添加 `libc++.tbd`
在 `Other Linker Flags` 添加 `-ObjC`、`-all_load`或`-force_load` 

注意：`WeChat` 和 `Bugly` 冲突，需去掉 `-all_load`

### SwiftPackage 引用

```swift
.target(
    name: "Name",
    dependencies: ["WeChat"],
    linkerSettings: [.linkedLibrary("c++")]),
```
