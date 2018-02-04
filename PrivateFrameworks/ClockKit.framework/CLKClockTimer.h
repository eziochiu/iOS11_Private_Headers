/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKClockTimer : NSObject {
    CADisplayLink * _30fpsDisplayLink;
    NSMutableDictionary * _30fpsHandlers;
    CADisplayLink * _displayLink;
    NSMutableDictionary * _identificationLogsByToken;
    long long  _lastHour;
    long long  _lastMinute;
    long long  _lastSecond;
    double  _lastSubsecondFraction;
    NSMutableDictionary * _minuteHandlers;
    CADisplayLink * _nativeDisplayLink;
    NSMutableDictionary * _nativeHandlers;
    unsigned long long  _nextToken;
    bool  _permittedToRun;
    NSMutableDictionary * _secondHandlers;
    NSObject<OS_dispatch_source> * _signalSource;
    NSMutableDictionary * _subsecondHandlers;
}

+ (void)_forceDate:(id)arg1;
+ (id)now;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_backgrounded:(id)arg1;
- (void)_dumpIndentificationLogs;
- (void)_foregrounded:(id)arg1;
- (void)_handleTimePassed;
- (void)_maybeClearLastSeenTimeComponents;
- (struct NSNumber { Class x1; }*)_nextTokenWithIdentificationLog:(id /* block */)arg1;
- (void)_on30fpsDisplayLink:(id)arg1;
- (void)_onDisplayLink:(id)arg1;
- (void)_onNativeDisplayLink:(id)arg1;
- (void)_removeToken:(struct NSNumber { Class x1; }*)arg1;
- (void)_update30fpsDisplayLink;
- (void)_updateDisplayLink;
- (void)_updateDisplayLinkFrameIntervalAccuracyIfNecessaryForTimePastMinuteInSeconds:(double)arg1;
- (void)_updateNativeDisplayLink;
- (void)dealloc;
- (id)init;
- (struct NSNumber { Class x1; }*)start30fpsUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (struct NSNumber { Class x1; }*)startDisplayNativeUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (struct NSNumber { Class x1; }*)startMinuteUpdatesWithHandler:(id /* block */)arg1;
- (struct NSNumber { Class x1; }*)startMinuteUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (struct NSNumber { Class x1; }*)startSecondUpdatesWithHandler:(id /* block */)arg1;
- (struct NSNumber { Class x1; }*)startSecondUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (struct NSNumber { Class x1; }*)startSubsecondUpdatesWithHandler:(id /* block */)arg1;
- (struct NSNumber { Class x1; }*)startSubsecondUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (void)stop30fpsUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;
- (void)stopDisplayNativeUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;
- (void)stopMinuteUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;
- (void)stopSecondUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;
- (void)stopSubsecondUpdatesForToken:(id)arg1;

@end