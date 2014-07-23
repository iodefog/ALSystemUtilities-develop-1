//
//  ALHardware.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 21/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <sys/utsname.h>
#include <sys/types.h>
#include <sys/sysctl.h>

/*!
 * This class check some hardware (and software) informations
 */
@interface ALHardware : NSObject

/*! 获取设备模型
 Check the device model
 @return NSString with the device model
 */
+ (NSString *)deviceModel;

/*! 获取设备名字
 Check the device name
 @return NSString with the device name
 */
+ (NSString *)deviceName;

/*! 获取系统名字
 Check the system name
 @return NSString with the system name
 */
+ (NSString *)systemName;

/*! 获取系统版本
 Check the system version
 @return NSString with the system version
 */
+ (NSString *)systemVersion;

/*! 获取屏幕宽度的像素
 Check the screen width in pixel
 @return NSInteger value of the width of the screen
 */
+ (NSInteger)screenWidth;

/*! 获取屏幕高度的像素
 Check the screen height in pixel
 @return NSInteger value of the height of the screen
 */
+ (NSInteger)screenHeight;

/*! 获取屏幕的亮度
 Check the screen brightness
 @return CGFloat value of the brightness of the screen
 */
+ (CGFloat)brightness;

/*! 获取硬件的类型
 Get the device type
 @return NSString represents the platform type (ex. : iPhone 5)
 */
+ (NSString *)platformType;

/*! 获取启动时间的时、分、秒
 Get the boot time in hours, minutes and seconds
 @return NSString represents the boot time in hours, minutes and seconds
 */
+ (NSDate *)bootTime;

/*! 检查是否存在传感器
 Check for the proximity sensor
 @return YES if the proximity sensor exist, NO if it isn't
 */
+ (BOOL)proximitySensor;

/*! 检查是否启用了多任务处理是否开启
 Check if the multitasking is enabled
 @return YES if the multitasking is enabled, NO if it isn't
 */
+ (BOOL)multitaskingEnabled;

// 1.2

/*! 获取仿真类型
 The sim type
 @return NSString with the sim type
 */
+ (NSString *)sim;

/*! 获取硬件的外形尺寸
 The device's dimensions
 @return NSString with the dimensions
 */
+ (NSString *)dimensions;

/*! 获取硬件的重量
 The weight of the device
 @return NSString with the weight of the device
 */
+ (NSString *)weight;

/*! 获取硬件的显示类型
 The display type of the device
 @return NSString with the display type
 */
+ (NSString *)displayType;

/*! 获取显示的密度
 The display density
 @return NSString with the display density
 */
+ (NSString *)displayDensity;

/*! 获取WLAN类型
 The WLAN type
 @return NSString with the WLAN type
 */
+ (NSString *)WLAN;

/*! 获取蓝牙版本
 The bluetooth version
 @return NSString with the bluetooth version
 */
+ (NSString *)bluetooth;

/*! 获取硬件原生摄像机的详情
 Details about primary camera of the device
 @return NSString with details about primary camera
 */
+ (NSString *)cameraPrimary;

/*! 获取硬件第二摄像机的详情
 Details about secondary camera of the device
 @return NSString with details about secondary camera
 */
+ (NSString *)cameraSecondary;

/*! 获取硬件的cpu
 The cpu of the device
 @return NSString with the cpu of the device
 */
+ (NSString *)cpu;

/*! 获取硬件的gpu
 The gpu of the device
 @return NSString with the gpu of the device
 */
+ (NSString *)gpu;

/*! 检查 当前是否在使用siri
 Check for Siri
 @return YES if Siri is present, NO if it isn't
 */
+ (BOOL)siri;

/*! 检查是否有指纹识别
 Check for the Touch ID
 @return YES if Touch ID is present, NO if it isn't
 */
+ (BOOL)touchID;

@end
