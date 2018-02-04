/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *downloadSize;
@property (nonatomic, retain) HMFSoftwareVersion *softwareVersion;
@property (nonatomic, retain) NSNumber *state;

+ (id)properties;

@end
