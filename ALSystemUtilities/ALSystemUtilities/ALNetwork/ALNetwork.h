//
//  ALNetwork.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 21/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ifaddrs.h>
#import <arpa/inet.h>
#import "Reachability.h"
#include <sys/socket.h>
#include <sys/sysctl.h>
#include <net/if.h>
#include <net/if_dl.h>
#include <sys/ioctl.h>

@protocol ALNetworkDelegate <NSObject>

/*! 链接下载速度的回调，返回的是下载速度
 Called when the connection speed test has finished
 @param  downloadSpeedInKbPerSeconds NSString value which represents the speed connection
 */
- (void)downloadSpeedTestFinished:(NSString *)downloadSpeedInKbPerSeconds;

@end

/*!
 * This class provide methods to get current IP address and check WiFi or 3G connection
 */
@interface ALNetwork : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate>

/*!
 * The delegate of the object
 */
@property id <ALNetworkDelegate> delegate;

+ (ALNetwork *)sharedInstance;

/*! 获取当前IP地址
 Get the current IP address
 @return NSString value which represents the current IP address
 */
+ (NSString *)currentIPAddress;

/*! 检查当前链接是否为WiFi
 Check if the device is connected to WiFi
 @return YES if the device is connected to WiFi network, NO if it isn't
 */
+ (BOOL)connectedViaWiFi;

/*! 检查当前链接是否为3G
 Check if the device is connected to 3G
 @return YES if the device is connected to 3G network, NO if it isn't
 */
+ (BOOL)connectedVia3G;

/*! 获取iPhone的物理地址
 Get the MAC Address of the iPhone
 @return NSString represents the MAC address
 */
+ (NSString *)macAddress;

/*! 开始测试下载速度
 Start the test for the speed of the connection
 */
- (void)downloadSpeedInKbPerSec;

/*!  获取外部IP地址
 * The external IP Address
 @return NSString represents the external IP address
 */
+ (NSString *)externalIPAddress;

/*! 获取小单位的IP地址
 * The cell IP address
 @return NSString represents the cell IP address
 */
+ (NSString *)cellIPAddress;

/*! 获取WiFI 网络掩码地址
 * The WiFi netmask address
 @return NSString represents the WiFi netmask address
 */
+ (NSString *)WiFiNetmaskAddress;

/*! 获取WiFi的广播地址
 * The WiFi broadcast address
 @return NSString represents the WiFi broadcast address
 */
+ (NSString *)WiFiBroadcastAddress;

@end
