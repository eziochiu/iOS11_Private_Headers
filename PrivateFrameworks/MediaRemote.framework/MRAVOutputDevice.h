/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputDevice : NSObject {
    NSString * _MACAddress;
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    AVOutputDevice * _avOutputDevice;
    bool  _forceRemoteControllability;
    NSString * _groupID;
    NSString * _modelID;
    NSDictionary * _modelSpecificInfo;
    NSString * _name;
    NSString * _uid;
}

@property (nonatomic, readonly) NSString *MACAddress;
@property (setter=setAVOutputDevice:, nonatomic, retain) AVOutputDevice *avOutputDevice;
@property (nonatomic, readonly) float batteryLevel;
@property (nonatomic, readonly) bool canAccessRemoteAssets;
@property (nonatomic, readonly) unsigned int deviceSubtype;
@property (nonatomic, readonly) unsigned int deviceType;
@property (nonatomic) bool forceRemoteControllability;
@property (nonatomic, readonly) NSString *groupID;
@property (getter=isGroupLeader, nonatomic, readonly) bool groupLeader;
@property (getter=isGroupable, nonatomic, readonly) bool groupable;
@property (nonatomic, readonly) bool hasBatteryLevel;
@property (getter=isLocalDevice, nonatomic, readonly) bool localDevice;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSDictionary *modelSpecificInfo;
@property (nonatomic, readonly) NSString *name;
@property (getter=isRemoteControllable, nonatomic, readonly) bool remoteControllable;
@property (nonatomic, readonly) bool requiresAuthorization;
@property (nonatomic, readonly) bool supportsExternalScreen;
@property (nonatomic, readonly) NSString *uid;

- (id)MACAddress;
- (void)_onqueue_clearCachedAVOutputDeviceProperties;
- (id)avOutputDevice;
- (float)batteryLevel;
- (bool)canAccessRemoteAssets;
- (void)dealloc;
- (id)description;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (bool)forceRemoteControllability;
- (id)groupID;
- (bool)hasBatteryLevel;
- (id)initWithAVOutputDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isGroupable;
- (bool)isLocalDevice;
- (bool)isRemoteControllable;
- (id)modelID;
- (id)modelSpecificInfo;
- (id)name;
- (bool)requiresAuthorization;
- (void)setAVOutputDevice:(id)arg1;
- (void)setForceRemoteControllability:(bool)arg1;
- (bool)supportsExternalScreen;
- (id)uid;

@end
