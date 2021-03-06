/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *configurationVersion;
@property (nonatomic, retain) NSData *constraints;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *properties;
@property (nonatomic, retain) NSNumber *type;
@property (nonatomic, retain) NSData *value;

+ (id)properties;

@end
