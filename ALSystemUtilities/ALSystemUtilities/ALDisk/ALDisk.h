//
//  ALDisk.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 19/07/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 * Check total and free disk space
 */
@interface ALDisk : NSObject

/*! 总的磁盘空间
 The total disk space
 @return String which represents the total disk space
 */
+ (NSString *)totalDiskSpace;

/*! 剩余磁盘空间
 The free disk space
 @return String which represents the free disk space
 */
+ (NSString *)freeDiskSpace;

/*! 已经使用的磁盘空间
 The used disk space
 @return String which represents the used disk space
 */
+ (NSString *)usedDiskSpace;

/*! 总的磁盘空间的字节数
 The total disk space in bytes
 @return CGFloat represents the total disk space in bytes
 */
+ (CGFloat)totalDiskSpaceInBytes;

/*! 剩余磁盘空间的字节数
 The free disk space in bytes
 @return CGFloat represents the free disk space in bytes
 */
+ (CGFloat)freeDiskSpaceInBytes;

/*! 已经使用的磁盘空间的字节数
 The used disk space in bytes
 @return CGFloat represents the used disk space in bytes
 */
+ (CGFloat)usedDiskSpaceInBytes;

@end
