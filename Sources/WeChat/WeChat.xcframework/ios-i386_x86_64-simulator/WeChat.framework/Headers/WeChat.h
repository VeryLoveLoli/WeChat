//
//  WeChat.h
//  WeChat
//
//  Created by 韦烽传 on 2021/3/15.
//

#import <Foundation/Foundation.h>

//! Project version number for WeChat.
FOUNDATION_EXPORT double WeChatVersionNumber;

//! Project version string for WeChat.
FOUNDATION_EXPORT const unsigned char WeChatVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <WeChat/PublicHeader.h>

/**
 在 `Link Binary With Libraries` 添加 `libc++.tbd`
 在 `Other Linker Flags` 添加 `-ObjC`、`-all_load`或`-force_load`
 */

/// 系统库
#import <Security/Security.h>
#import <CoreGraphics/CoreGraphics.h>
#import <WebKit/WebKit.h>

/// 微信头文件
#import <WeChat/WXApi.h>
#import <WeChat/WXApiObject.h>
#import <WeChat/WechatAuthSDK.h>
