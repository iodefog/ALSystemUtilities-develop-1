//
//  ALAccessory.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 22/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ExternalAccessory/ExternalAccessory.h>
#import <AudioToolbox/AudioToolbox.h>

/*!
 * This class detect if there are accessories plugged into the device
 */
@interface ALAccessory : NSObject

/*! 检查是否有配件插入
 Check if there are accessories plugged in
 @return YES if there are accessories plugged in, NO if there aren't
 */
+ (BOOL)accessoriesPluggedIn;

/*! 检查配件数量
 Check the number of accessories plugged in
 @return NSInteger which represents the number of accessories plugged in
 */
+ (NSInteger)numberOfAccessoriesPluggedIn;

/*! 检查是否耳机插入
 Check if headphones is plugged in
 @return YES if headphones are plugged in, NO if it aren't
 */
+ (BOOL)isHeadphonesAttached;

@end
