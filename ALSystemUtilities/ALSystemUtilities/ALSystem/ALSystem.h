//
//  ALSystem.h
//  ALSystem
//
//  Created by Andrea Mario Lufino on 09/09/13.
//  Copyright (c) 2013 Andrea Mario Lufino. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ALBattery.h"
#import "ALDisk.h"
#import "ALHardware.h"
#import "ALJailbreak.h"
#import "ALLocalization.h"
#import "ALMemory.h"
#import "ALNetwork.h"
#import "ALProcessor.h"
#import "ALCarrier.h"
#import "ALAccessory.h"
#import "ALSystemConstants.h"


/*!
 * This class imports all the other classes of the ALSystemUtilities library, so you can import only ALSystem.h to import all the library.
 * ALSystem provides methods to get the informations about every specific purview in a NSDictionary object which keys are declared in the relative extension header of ALSystem.
 */
@interface ALSystem : NSObject

/*! 系统信息
 All the informations of the library
 @return NSDictionary which contains all informations the library can provides
 */
+ (NSDictionary *)systemInformations;

/*! 电池信息
 All the informations about the battery
 @return NSDictionary which contains all informations about the battery
 */
+ (NSDictionary *)batteryInformations;

/*! 磁盘信息
 All the informations about the disk
 @return NSDictionary which contains all informations about the disk
 */
+ (NSDictionary *)diskInformations;

/*! 硬件信息
 All the informations about the hardware
 @return NSDictionary which contains all informations about the hardware
 */
+ (NSDictionary *)hardwareInformations;

/*! 越狱信息
 All the informations about the jailbreak
 @return NSDictionary which contains all informations about the jailbreak
 */
+ (NSDictionary *)jailbreakInformations;

/*! 本地化信息
 All the informations about the localization
 @return NSDictionary which contains all informations about the localization
 */
+ (NSDictionary *)localizationInformations;

/*! 内存信息
 All the informations about the memory
 @return NSDictionary which contains all informations about the memory
 */
+ (NSDictionary *)memoryInformations;

/*!网络信息
 All the informations about the network
 @return NSDictionary which contains all informations about the network
 */
+ (NSDictionary *)networkInformations;

/*! 处理器信息
 All the informations avout the processor
 @return NSDictionary which contains all informations about the processor
 */
+ (NSDictionary *)processorInformations;

/*! 载体信息
 All the informations acout the carrier
 @return NSDictionary which contains all informations about the carrier
 */
+ (NSDictionary *)carrierInformations;

/*! 附件信息
 All the informations about the accessories
 @return NSDictionary which contains all informations about the accessories
 */
+ (NSDictionary *)accessoryInformations;

@end
