/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCBatterySaverMode : NSObject

+ (id)batterySaverRestrictions;
+ (id)currentBatterySaverRestrictions;
+ (id)currentBatterySaverRestrictions:(int)arg1;
+ (bool)isBatterySaverModeActive;
+ (bool)isBatterySaverModeActive:(int)arg1;
+ (id)setOfActiveRestrictionUUIDs;

@end