//
//  ALProcessor.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 21/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <mach/mach.h>
#import <sys/sysctl.h>

/*!
 * This class provide informations about processors
 */
@interface ALProcessor : NSObject

/*! 获取处理器的总数量
 Check the number of processors
 @return NSInteger which represents the number of processors
 */
+ (NSInteger)processorsNumber;

/*! 获取获取活跃处理器的数量
 Check the number of active processors
 @return NSInteger which represents the number of active processors
 */
+ (NSInteger)activeProcessorsNumber;

/*! 获取app使用cpu 的大小
 The cpu usage for the app in use
 @return Float value represents the cpu usage for the app in use
 */
+ (CGFloat)cpuUsageForApp;

/*! 获取活跃的处理器数组
 The active processes list
 @return NSArray containing the list of active processes
 */
+ (NSArray *)activeProcesses;

/*! 获取活跃处理器个数
 The number of active processes
 @return NSInteger value represents the number of active processes
 */
+ (NSInteger)numberOfActiveProcesses;

@end
