/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener> {
    WebGeolocationProviderIOS * _provider;
}

- (void)errorOccurred:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)initWithProvider:(id)arg1;
- (void)positionChanged:(struct GeolocationPosition { unsigned int x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; bool x12; bool x13; }*)arg1;
- (void)resetGeolocation;

@end
