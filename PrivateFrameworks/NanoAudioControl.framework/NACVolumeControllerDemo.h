/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACVolumeControllerDemo : NSObject <NACVolumeController> {
    NSString * _audioCategory;
    NACEventThrottler * _defaultsThrottler;
    <NACVolumeControllerDelegate> * _delegate;
    float  _hapticIntensity;
    bool  _prominentHapticEnabled;
    bool  _systemMuted;
    NSNumber * _volumeValue;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float hapticIntensity;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (getter=isProminentHapticEnabled, nonatomic) bool prominentHapticEnabled;
@property (readonly) Class superclass;
@property (getter=isSystemMuted, nonatomic) bool systemMuted;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly) float volumeValue;
@property (getter=isVolumeWarningEnabled, nonatomic, readonly) bool volumeWarningEnabled;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_persistVolumeValue:(id)arg1;
- (void)_setNeedsVolumeReload;
- (id)_volumeDictionary;
- (void)beginObservingVolume;
- (void)dealloc;
- (id)delegate;
- (void)endObservingVolume;
- (float)hapticIntensity;
- (id)init;
- (id)initWithAudioCategory:(id)arg1;
- (bool)isMuted;
- (bool)isProminentHapticEnabled;
- (bool)isSystemMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (void)setDelegate:(id)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(bool)arg1;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)setVolumeValue:(float)arg1 muted:(bool)arg2 overrideEULimit:(bool)arg3;
- (float)volumeValue;

@end
