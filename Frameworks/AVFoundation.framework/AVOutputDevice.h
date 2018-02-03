/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDevice : NSObject {
    AVOutputDeviceInternal * _outputDevice;
}

@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSData *identifyingMACAddress;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *name;

+ (void)initialize;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { }*)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
+ (bool)prefersRouteDescriptors;
+ (id)sharedLocalDevice;

- (id)ID;
- (float)batteryLevel;
- (bool)canAccessRemoteAssets;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canSetVolume;
- (id)connectedPairedDevices;
- (void)dealloc;
- (id)description;
- (unsigned long long)deviceFeatures;
- (id)deviceID;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)figEndpointOutputImpl;
- (double)frecencyScore;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (bool)hasBatteryLevel;
- (unsigned long long)hash;
- (id)identifyingMACAddress;
- (id)impl;
- (id)init;
- (id)initWithOutputDeviceImpl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isInUseByPairedDevice;
- (id)modelID;
- (id)modelSpecificInformation;
- (id)name;
- (void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1;
- (void)outputDeviceImplDidChangeVolume:(id)arg1;
- (bool)requiresAuthorization;
- (void)setAdministrativeConfiguration:(id)arg1 administrationPassword:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)updateFrecencyScore;
- (float)volume;

@end
