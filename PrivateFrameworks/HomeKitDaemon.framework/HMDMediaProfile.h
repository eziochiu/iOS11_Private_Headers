/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaProfile : HMDAccessoryProfile {
    HMDMediaSession * _mediaSession;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDAccessorySettingGroup * _rootSettings;
}

@property (retain) HMDMediaSession *mediaSession;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (retain) HMDAccessorySettingGroup *rootSettings;

+ (id)logCategory;
+ (id)namespace;
+ (id)sessionNamespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)_handleMediaSessionSetPlayback:(id)arg1;
- (void)configureWithMessageDispatcher:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)mediaSession;
- (void)notifyClientsOfUpdatedRootSettings:(id)arg1;
- (id)propertyQueue;
- (void)registerForMessages;
- (id)rootSettings;
- (void)sessionAudioControlUpdated:(id)arg1;
- (void)sessionPlaybackStateUpdated:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setRootSettings:(id)arg1;

@end
