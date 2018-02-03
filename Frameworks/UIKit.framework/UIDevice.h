/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDevice : NSObject {
    float  _batteryLevel;
    struct { 
        unsigned int batteryMonitoringEnabled : 1; 
        unsigned int proximityMonitoringEnabled : 1; 
        unsigned int expectsFaceContactInLandscape : 1; 
        unsigned int orientation : 3; 
        unsigned int batteryState : 2; 
        unsigned int proximityState : 1; 
        unsigned int hasTouchPadOverride : 1; 
        unsigned int hasTouchPad : 1; 
    }  _deviceFlags;
    long long  _numDeviceOrientationObservers;
}

@property (setter=_setBacklightLevel:, nonatomic) float _backlightLevel;
@property (nonatomic, readonly) float batteryLevel;
@property (getter=isBatteryMonitoringEnabled, nonatomic) bool batteryMonitoringEnabled;
@property (nonatomic, readonly) long long batteryState;
@property (nonatomic, readonly, retain) NSString *buildVersion;
@property (getter=_feedbackSupportLevel, nonatomic, readonly) long long feedbackSupportLevel;
@property (getter=isGeneratingDeviceOrientationNotifications, nonatomic, readonly) bool generatesDeviceOrientationNotifications;
@property (nonatomic, readonly) NSUUID *identifierForVendor;
@property (nonatomic, readonly) NSString *localizedModel;
@property (nonatomic, readonly) NSString *model;
@property (getter=isMultitaskingSupported, nonatomic, readonly) bool multitaskingSupported;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) long long orientation;
@property (getter=isProximityMonitoringEnabled, nonatomic) bool proximityMonitoringEnabled;
@property (nonatomic, readonly) bool proximityState;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) long long userInterfaceIdiom;

+ (bool)_isLowEnd;
+ (bool)_isWatch;
+ (bool)_isWatchCompanion;
+ (id)currentDevice;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(bool)arg1;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;

- (float)_backlightLevel;
- (void)_clearGraphicsQualityOverride;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (void)_enableDeviceOrientationEvents:(bool)arg1;
- (long long)_feedbackSupportLevel;
- (long long)_graphicsQuality;
- (bool)_hasGraphicsQualityOverride;
- (bool)_hasTouchPad;
- (bool)_isSystemSoundEnabled;
- (long long)_keyboardGraphicsQuality;
- (long long)_nativeScreenGamut;
- (void)_playInputDeleteSound;
- (void)_playInputSelectSound;
- (void)_playSystemSound:(unsigned int)arg1;
- (long long)_predictionGraphicsQuality;
- (void)_registerForSystemSounds:(id)arg1;
- (void)_setActiveUserInterfaceIdiom:(long long)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(long long)arg1;
- (void)_setExpectsFaceContactInLandscape:(bool)arg1;
- (void)_setGraphicsQualityOverride:(long long)arg1;
- (void)_setHasTouchPad:(bool)arg1;
- (void)_setProximityState:(bool)arg1;
- (float)_softwareDimmingAlpha;
- (bool)_supportsDeepColor;
- (bool)_supportsForceTouch;
- (id)_tapticEngine;
- (void)_unregisterForSystemSounds:(id)arg1;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (float)batteryLevel;
- (long long)batteryState;
- (void)beginGeneratingDeviceOrientationNotifications;
- (id)buildVersion;
- (void)endGeneratingDeviceOrientationNotifications;
- (id)identifierForVendor;
- (bool)isBatteryMonitoringEnabled;
- (bool)isGeneratingDeviceOrientationNotifications;
- (bool)isMultitaskingSupported;
- (bool)isProximityMonitoringEnabled;
- (id)localizedModel;
- (id)model;
- (id)name;
- (long long)orientation;
- (void)playInputClick;
- (bool)proximityState;
- (void)setBatteryMonitoringEnabled:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setProximityMonitoringEnabled:(bool)arg1;
- (id)systemName;
- (id)systemVersion;
- (long long)userInterfaceIdiom;

@end
