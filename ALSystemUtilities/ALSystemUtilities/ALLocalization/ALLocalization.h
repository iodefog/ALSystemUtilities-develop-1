//
//  ALLocalization.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 21/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * This class provides some informations about the localization of the device
 */
@interface ALLocalization : NSObject

/*! 获取 系统语言
 The language of the system
 @return NSString representing the language
 */
+ (NSString *)language;

/*! 获取当前时区
 The current time zone
 @return NSString representing the time zone
 */
+ (NSString *)timeZone;

/*! 系统的货币符号
 The currency symbol of the system
 @return NSString representing the current currency symbol
 */
+ (NSString *)currencySymbol;

/*! 获取货币代码的系统
 The currency code of the system
 @return NSString representing the currency code
 */
+ (NSString *)currencyCode;

/*! 获取 国家名字
 The country
 @return NSString representing the country of the system
 */
+ (NSString *)country;

/*! 获取测量系统
 The measurement system
 @return NSString representing the measurement system
 */
+ (NSString *)measurementSystem;

@end
