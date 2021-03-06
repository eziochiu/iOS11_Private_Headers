/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIFlashlightController : NSObject {
    bool  _available;
    AVFlashlight * _flashlight;
    NSObject<OS_dispatch_queue> * _flashlightQueue;
    unsigned long long  _level;
    NSHashTable * _observers;
    bool  _overheated;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic) unsigned long long level;
@property (getter=isOverheated, nonatomic, readonly) bool overheated;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_loadFlashlightLevel;
- (void)_postAvailabilityChangeNotification:(bool)arg1;
- (void)_postLevelChangeNotification:(unsigned long long)arg1;
- (void)_postOverheatedChangeNotification:(bool)arg1;
- (void)_setFlashlightLevel:(float)arg1;
- (void)_storeFlashlightLevel:(unsigned long long)arg1;
- (void)_turnPowerOff;
- (void)_turnPowerOn;
- (void)_updateState;
- (void)addObserver:(id)arg1;
- (void)coolDown;
- (id)init;
- (bool)isAvailable;
- (bool)isOverheated;
- (unsigned long long)level;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)turnFlashlightOff;
- (void)turnFlashlightOn;
- (void)warmUp;

@end
