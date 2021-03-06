/* made by EzioChiu.
 */

@protocol UIApplicationSceneSettings <NSObject>

@required

- (bool)canShowAlerts;
- (unsigned long long)deactivationReasons;
- (long long)deviceOrientation;
- (bool)deviceOrientationEventsEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (NSNumber *)forcedStatusBarHidden;
- (NSNumber *)forcedStatusBarStyle;
- (bool)idleModeEnabled;
- (bool)statusBarDisabled;
- (int)statusBarStyleOverridesToSuppress;
- (bool)underLock;
- (long long)userInterfaceStyle;

@end
