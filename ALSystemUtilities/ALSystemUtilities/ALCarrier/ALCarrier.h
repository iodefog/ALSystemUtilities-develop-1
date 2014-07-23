//
//  ALCarrier.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 21/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <CoreTelephony/CTCarrier.h>

/*!
 * This class provides method to get info about the carrier
 */
@interface ALCarrier : NSObject

/*! 载体名
 The carrier name
 @return NSString represents the carrier name
 */
+ (NSString *)carrierName;

/*! 代表载体的ISO国家编号
 The ISO country code of the carrier
 @return NSString represents the ISO country code of the carrier
 */
+ (NSString *)carrierISOCountryCode;

/*!代表载体手机国家编号
 The carrier mobile country code
 @return NSString represents the mobile country code of the carrier
 */
+ (NSString *)carrierMobileCountryCode;

/*! 代表了手机网络编号
 The carrier mobile network code
 @return NSString represents the mobile network code
 */
+ (NSString *)carrierMobileNetworkCode;

/*! 检查载体是否允许VOIP
 Check if the carrier allows VOIP
 @return YES if the carrier allows VOIP, NO if it isn't
 */
+ (BOOL)carrierAllowsVOIP;

@end
