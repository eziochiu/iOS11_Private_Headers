/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDVolume : NSObject {
    NSNumber * _deviceID;
    NSString * _mountToPath;
    NSUUID * _volumeUUID;
}

@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic, retain) NSString *mountToPath;
@property (nonatomic, retain) NSUUID *volumeUUID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)deviceID;
- (id)initWithVolumeUUID:(id)arg1 deviceID:(id)arg2 mountToPath:(id)arg3;
- (id)mountToPath;
- (void)setDeviceID:(id)arg1;
- (void)setMountToPath:(id)arg1;
- (void)setVolumeUUID:(id)arg1;
- (id)volumeUUID;

@end