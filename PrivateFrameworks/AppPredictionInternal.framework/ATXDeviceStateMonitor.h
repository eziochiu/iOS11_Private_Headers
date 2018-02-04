/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXDeviceStateMonitor : NSObject

+ (id)SSID;
+ (bool)airplaneMode;
+ (void)asyncSSID:(id /* block */)arg1;
+ (bool)onWifi;
+ (void)setAirplaneMode:(bool)arg1;
+ (void)setSSID:(id)arg1;
+ (void)startMockingSystem;
+ (void)stopMockingSystem;

@end
