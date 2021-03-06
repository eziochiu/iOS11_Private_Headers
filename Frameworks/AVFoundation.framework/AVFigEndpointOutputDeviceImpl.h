/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {
    struct OpaqueFigEndpoint { } * _figEndpoint;
    AVOutputDevice * _parentDevice;
    struct OpaqueFigVolumeControllerState { } * _volumeController;
    AVWeakReference * _weakObserver;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) bool canAccessRemoteAssets;
@property (nonatomic, readonly) bool canBeGroupLeader;
@property (nonatomic, readonly) bool canBeGrouped;
@property (readonly) bool canSetVolume;
@property (nonatomic, readonly) NSNumber *caseBatteryLevel;
@property (nonatomic, readonly, copy) NSArray *connectedPairedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceFeatures;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) bool groupContainsGroupLeader;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *identifyingMACAddress;
@property (getter=isInUseByPairedDevice, nonatomic, readonly) bool inUseByPairedDevice;
@property (nonatomic, readonly) bool isGroupLeader;
@property (nonatomic, readonly) NSNumber *leftBatteryLevel;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly, copy) NSString *name;
@property AVOutputDevice *parentOutputDevice;
@property (nonatomic, readonly) bool requiresAuthorization;
@property (nonatomic, readonly) NSNumber *rightBatteryLevel;
@property (readonly) Class superclass;
@property (readonly) float volume;

+ (void)initialize;

- (void).cxx_destruct;
- (id)ID;
- (void)_canSetEndpointVolumeDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { }*)arg1;
- (void)_volumeDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (id)batteryLevel;
- (bool)canAccessRemoteAssets;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canSetVolume;
- (id)caseBatteryLevel;
- (id)connectedPairedDevices;
- (void)dealloc;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (struct OpaqueFigEndpoint { }*)figEndpoint;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (unsigned long long)hash;
- (id)identifyingMACAddress;
- (id)init;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isInUseByPairedDevice;
- (id)leftBatteryLevel;
- (id)modelID;
- (id)name;
- (id)parentOutputDevice;
- (bool)requiresAuthorization;
- (id)rightBatteryLevel;
- (void)setAdministrativeConfiguration:(id)arg1 administrationPassword:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setParentOutputDevice:(id)arg1;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
