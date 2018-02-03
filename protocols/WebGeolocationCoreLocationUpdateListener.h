/* made by EzioChiu.
 */

@protocol WebGeolocationCoreLocationUpdateListener

@required

- (void)errorOccurred:(NSString *)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)positionChanged:(struct GeolocationPosition { unsigned int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; bool x12; bool x13; }*)arg1;
- (void)resetGeolocation;

@end
