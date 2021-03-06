/* made by EzioChiu.
 */

@protocol NACXPCInterface <NSObject>

@required

- (void)EULimitForCategory:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)audioRoutesForCategory:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)beginObservingAudioRoutesForCategory:(NSString *)arg1;
- (void)beginObservingVolume;
- (void)endObservingAudioRoutesForCategory:(NSString *)arg1;
- (void)endObservingVolume;
- (void)hapticIntensity:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)mutedStateForCategory:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)pickAudioRouteWithIdentifier:(NSString *)arg1 category:(NSString *)arg2;
- (void)playAudioAndHapticPreview;
- (void)playProminentHapticPreview;
- (void)prominentHapticEnabled:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setHapticIntensity:(float)arg1;
- (void)setMuted:(bool)arg1 category:(NSString *)arg2;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1 category:(NSString *)arg2;
- (void)systemMutedState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)volumeControlAvailabilityForCategory:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)volumeValueForCategory:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)volumeWarningForCategory:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
