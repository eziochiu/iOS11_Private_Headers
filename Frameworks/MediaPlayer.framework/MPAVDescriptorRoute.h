/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVDescriptorRoute : MPAVRoute {
    NSArray * _auxiliaryDevices;
    MPAVBatteryLevel * _batteryLevel;
}

- (void).cxx_destruct;
- (id)_airPlayExtendedInfo;
- (id)auxiliaryDevices;
- (id)batteryLevel;
- (id)initWithRouteDescriptor:(id)arg1;
- (bool)isB238Route;
- (bool)isCarplayRoute;
- (bool)isPicked;
- (bool)isPickedOnPairedDevice;
- (long long)passwordType;
- (long long)pickableRouteType;
- (id)productIdentifier;
- (bool)requiresPassword;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;

@end
