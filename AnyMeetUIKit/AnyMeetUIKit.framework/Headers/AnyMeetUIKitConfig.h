//
//  AnyMeetUIKitConfig.h
//  AnyMeetUIKit
//
//  Created by derek on 2018/5/11.
//  Copyright © 2018年 derek. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AnyMeetUIKitConfig : NSObject

/**
 配置开发者信息
 
 @param strDeveloperId 开发者Id；
 @param strAppId     AppId；
 @param strAppKey    AppKey；
 @param strAppToken  AppToken；
 说明：该方法为配置开发者信息，上述参数均可在https://www.anyrtc.io/ manage创建应用后,管理中心获得；建议在AppDelegate.m调用。
 */
+ (void)initEngineWithAnyRTCInfo:(NSString*)strDeveloperId andAppId:(NSString*)strAppId andKey:(NSString*)strAppKey andToke:(NSString*)strAppToken andVerifyUrl:(NSString*)strVerifyUrl;

/**
 配置私有云
 
 @param strAddress 私有云服务地址；
 @param nPort   私有云服务端口；
 说明：配置私有云信息，当使用私有云时才需要进行配置，默认无需配置。
 */
+ (void)configServerForPriCloud:(NSString*)strAddress andPort:(int)nPort;

/**
 获取 RTMPC SDK 版本号
 
 @return 版本号
 */
+ (NSString*)getSdkVersion;

/**
 设置是否打开日子调试

 @param isDebugLogOpen 打开与否，默认打开
 */
+ (void)setDebugLogOpen:(BOOL)isDebugLogOpen;
@end
