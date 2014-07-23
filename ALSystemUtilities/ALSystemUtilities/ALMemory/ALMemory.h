//
//  ALMemory.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 21/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <mach/mach.h>
#import <mach/mach_host.h>

/*!
 * This class provides some informations about the memory of the device
 */
@interface ALMemory : NSObject

/*! 获取硬件的总的内存信息大小
 Check the total memory of the device
 @return NSInteger value which represents the total memory
 */
+ (NSInteger)totalMemory;

/*! 获取硬件的剩余内存大小
 Check free memory
 @return CGFloat which represents the free memory
 */
+ (CGFloat)freeMemory;

/*! 获取硬件已经使用的内存大小
 Check the used memory
 @return CGFloat which represents the used memory
 */
+ (CGFloat)usedMemory;

/*! 获取活跃的内存大小
 Check the active memory
 @return CGFloat which represents the active memory of the device
 */
+ (CGFloat)activeMemory;

/*! 获取有线内存大小
 Check wired memory
 @return CGFloat which represents the wired memory
 */
+ (CGFloat)wiredMemory;

/*! 获取未活跃的内存大小
 Check the inactive memory
 @return CGFloat which represents the inactive memory
 */
+ (CGFloat)inactiveMemory;

@end
