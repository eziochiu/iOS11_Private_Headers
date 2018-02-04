/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioRoute : NSObject {
    NSString * _name;
    TUAudioRoutePreferredRouteOptions * _preferredRouteOptions;
    NSDictionary * _route;
    NSString * _uniqueIdentifier;
}

@property (getter=isAirTunes, nonatomic, readonly) bool airTunes;
@property (getter=isBluetooth, nonatomic, readonly) bool bluetooth;
@property (nonatomic, readonly) long long bluetoothEndpointType;
@property (getter=isBluetoothLE, nonatomic, readonly) bool bluetoothLE;
@property (nonatomic, readonly, copy) NSString *bluetoothProductIdentifier;
@property (getter=isCarAudio, nonatomic, readonly) bool carAudio;
@property (getter=isCurrentlyPicked, nonatomic, readonly) bool currentlyPicked;
@property (getter=isDefaultRoute, nonatomic, readonly) bool defaultRoute;
@property (nonatomic, readonly) long long deviceModelType;
@property (getter=isHandset, nonatomic, readonly) bool handset;
@property (getter=isHeadphoneJackConnected, nonatomic, readonly) bool headphoneJackConnected;
@property (nonatomic, readonly) NSArray *identifiersOfOtherConnectedDevices;
@property (nonatomic, copy) NSString *name;
@property (getter=isPreferred, nonatomic, readonly) bool preferred;
@property (nonatomic, retain) TUAudioRoutePreferredRouteOptions *preferredRouteOptions;
@property (getter=isReceiver, nonatomic, readonly) bool receiver;
@property (nonatomic, readonly, copy) NSDictionary *route;
@property (getter=isSpeaker, nonatomic, readonly) bool speaker;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (getter=isWiredHeadphones, nonatomic, readonly) bool wiredHeadphones;
@property (getter=isWiredHeadset, nonatomic, readonly) bool wiredHeadset;
@property (getter=isWirelessHeadset, nonatomic, readonly) bool wirelessHeadset;

- (void).cxx_destruct;
- (bool)_routeNameEqualTo:(id)arg1;
- (bool)_routeTypeEqualTo:(id)arg1;
- (void)_updatePreferredRouteOptions;
- (long long)bluetoothEndpointType;
- (id)bluetoothProductIdentifier;
- (id)description;
- (long long)deviceModelType;
- (unsigned long long)hash;
- (id)identifiersOfOtherConnectedDevices;
- (id)initWithDictionary:(id)arg1;
- (bool)isAirTunes;
- (bool)isBluetooth;
- (bool)isBluetoothLE;
- (bool)isCarAudio;
- (bool)isCurrentlyPicked;
- (bool)isDefaultRoute;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTUAudioRoute:(id)arg1;
- (bool)isHandset;
- (bool)isHeadphoneJackConnected;
- (bool)isPreferred;
- (bool)isReceiver;
- (bool)isSpeaker;
- (bool)isWiredHeadphones;
- (bool)isWiredHeadset;
- (bool)isWirelessHeadset;
- (id)name;
- (id)preferredRouteOptions;
- (id)route;
- (void)setName:(id)arg1;
- (void)setPreferredRouteOptions:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
