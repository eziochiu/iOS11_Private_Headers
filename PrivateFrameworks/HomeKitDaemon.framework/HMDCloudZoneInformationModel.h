/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject {
    bool  _requiresHomeManagerUpdate;
}

@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic) bool requiresHomeManagerUpdate;

+ (id)properties;

- (id)dependentUUIDs;
- (bool)requiresHomeManagerUpdate;
- (void)setRequiresHomeManagerUpdate:(bool)arg1;

@end
