//
//  ALBattery.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 18/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sys/utsname.h>
#import "ALHardware.h"

/*!
 * This class is useful to retrieve informations about the battery status
 */

@interface ALBattery : NSObject

/*!
 ----------------------------
 /// @name Methods
 ----------------------------
 */

/*! 检查电池是否充满电
 Check if the battery is fully charged
 @return YES if the battery is fully charged, NO if it isn't
 */
+ (BOOL)batteryFullCharged;

/*! 检查是否在充电中
 Check if the battery is charging
 @return YES if the battery is charging, NO if it isn't
 */
+ (BOOL)inCharge;

/*! 检查设备被插入电源
 Check if the device is plugged into power
 @return YES if the device is plugged into power, NO if it isn't
 */
+ (BOOL)devicePluggedIntoPower;

/*! 电池状态
 The battery state of the device
 @return UIDeviceBatteryState value which represent the current status of the battery
 */
+ (UIDeviceBatteryState)batteryState;

/*! 电池电量
 Retrieve the battery level of the battery
 @return A CGFloat value which represents the current battery level
 */
+ (CGFloat)batteryLevel;

/*! 剩下备用还有几个小时
 The remaining hours for standby
 @return NSString represents the remaining hours for standby
 */
+ (NSString *)remainingHoursForStandby;

/*! 3 g的通话 剩下几个小时
 The remaining hours for 3g conversation
 @return NSString represents the remaining hours for 3g conversation
 */
+ (NSString *)remainingHoursFor3gConversation;

/*! 2 g的通话 剩下几个小时
 The remaining hours for 2g conversation
 @return NSString represents the remaining hours for 2g conversation
 */
+ (NSString *)remainingHoursFor2gConversation;

/*! 3 g网络导航 剩下几个小时
 The remaining hours for 3g internet navigation
 @return NSString represents the remaining hours for 3g internet navigation
 */
+ (NSString *)remainingHoursForInternet3g;

/*! Wifi 网络导航 剩下几个小时
 The remaining hours for WiFi internet navigation
 @return NSString represents the remaining hours for WiFi internet navigation
 */
+ (NSString *)remainingHoursForInternetWiFi;

/*! 用户视频复制 剩下的时间
 The remaining hours for video reproduction
 @return NSString represents the remaining hours for video reproduction
 */
+ (NSString *)remainingHoursForVideo;

/*! 用于语音复制 剩下的时间
 The remaining hours for audio reproduction
 @return NSString represents the remaining hours for reproduction
 */
+ (NSString *)remainingHoursForAudio;

@end
