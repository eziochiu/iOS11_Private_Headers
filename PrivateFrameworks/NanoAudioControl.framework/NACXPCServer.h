/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACXPCServer : NSObject <NACIDSClientDelegate, NACXPCInterface, NSXPCListenerDelegate> {
    TLAlert * _alert;
    bool  _audioAndHapticPreviewIsPlaying;
    NSObject<OS_dispatch_queue> * _audioAndHapticPreviewQueue;
    NSObject<OS_dispatch_source> * _audioRouteDeferTimer;
    NSMutableDictionary * _audioRoutesRecords;
    NPSDomainAccessor * _domainAccessor;
    float  _hapticIntensity;
    NACIDSClient * _idsClient;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _prominentHapticEnabled;
    bool  _prominentHapticPreviewIsPlaying;
    bool  _systemMutedState;
    NSMutableSet * _volumeObservers;
    NSMutableDictionary * _volumeRecords;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)server;

- (void).cxx_destruct;
- (void)EULimitForCategory:(id)arg1 result:(id /* block */)arg2;
- (id)_audioRoutesRecordForCategory:(id)arg1;
- (float)_cachedHapticIntensity;
- (bool)_cachedProminentHapticState;
- (bool)_cachedSystemMutedState;
- (id)_cachedVolumeRecords;
- (void)_cancelDeferredAudioRoutesUpdate;
- (void)_cleanupConnection:(id)arg1;
- (void)_endObservingAudioRoutesForCategory:(id)arg1 connection:(id)arg2;
- (void)_endObservingVolumeForConnection:(id)arg1;
- (void)_persistHapticIntensity;
- (void)_persistProminentHapticState;
- (void)_persistSystemMutedState;
- (void)_persistVolumeRecords;
- (id)_routeObservationCategoriesForConnection:(id)arg1;
- (void)_scheduleDeferredAudioRoutesUpdate:(id)arg1 category:(id)arg2;
- (void)_updateAudioRoutes:(id)arg1 category:(id)arg2;
- (id)_volumeRecordForCategory:(id)arg1;
- (void)audioAndHapticPreviewHasCompletedPlaying;
- (void)audioRoutesForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)beginObservingVolume;
- (void)beginObservingVolumeForConnection:(id)arg1;
- (void)client:(id)arg1 EULimit:(float)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 audioRoutes:(id)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 hapticIntensityDidChange:(float)arg2;
- (void)client:(id)arg1 mutedState:(bool)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 prominentHapticStateDidChange:(bool)arg2;
- (void)client:(id)arg1 routeObservationCancelledForCategory:(id)arg2;
- (void)client:(id)arg1 systemMutedStateDidChange:(bool)arg2;
- (void)client:(id)arg1 volumeControlAvailable:(bool)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 volumeValue:(float)arg2 didChangeForCategory:(id)arg3;
- (void)client:(id)arg1 volumeWarningEnabled:(bool)arg2 didChangeForCategory:(id)arg3;
- (void)clientVolumeObservationCancelled:(id)arg1;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)endObservingVolume;
- (void)hapticIntensity:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)mutedStateForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)playAudioAndHapticPreview;
- (void)playProminentHapticPreview;
- (void)prominentHapticEnabled:(id /* block */)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(bool)arg1 category:(id)arg2;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1 category:(id)arg2;
- (void)systemMutedState:(id /* block */)arg1;
- (void)volumeControlAvailabilityForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)volumeValueForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)volumeWarningForCategory:(id)arg1 result:(id /* block */)arg2;

@end
