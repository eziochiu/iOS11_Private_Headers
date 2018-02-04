/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoute : NSObject {
    NSArray * _auxiliaryDevices;
    NSDictionary * _avRouteDescription;
    bool  _b238Route;
    MPAVBatteryLevel * _batteryLevel;
    bool  _canAccessRemoteAssets;
    bool  _carplayRoute;
    MPAVRouteConnection * _connection;
    long long  _displayRouteType;
    void * _externalDevice;
    long long  _pickableRouteType;
    bool  _picked;
    bool  _pickedOnPairedDevice;
    bool  _playingOnPairedDevice;
    NSString * _productIdentifier;
    bool  _requiresPassword;
    NSString * _routeName;
    long long  _routeSubtype;
    long long  _routeType;
    NSString * _routeUID;
    MPAVRoute * _wirelessDisplayRoute;
}

@property (getter=isAirpodsRoute, nonatomic, readonly) bool airpodsRoute;
@property (getter=isAppleTVRoute, nonatomic, readonly) bool appleTVRoute;
@property (nonatomic, readonly) NSArray *auxiliaryDevices;
@property (nonatomic, readonly) NSDictionary *avRouteDescription;
@property (getter=isB238Route, nonatomic, readonly) bool b238Route;
@property (nonatomic, readonly) MPAVBatteryLevel *batteryLevel;
@property (getter=isBeatsSoloRoute, nonatomic, readonly) bool beatsSoloRoute;
@property (getter=isBeatsStudioRoute, nonatomic, readonly) bool beatsStudioRoute;
@property (getter=isBeatsXRoute, nonatomic, readonly) bool beatsXRoute;
@property (nonatomic, readonly) bool canAccessRemoteAssets;
@property (getter=isCarplayRoute, nonatomic, readonly) bool carplayRoute;
@property (nonatomic, readonly) MPAVRouteConnection *connection;
@property (nonatomic, readonly) bool displayIsPicked;
@property (nonatomic) long long displayRouteType;
@property (getter=_externalDevice, nonatomic, readonly) void*externalDevice;
@property (nonatomic, readonly) bool isDeviceRoute;
@property (nonatomic, readonly) long long passwordType;
@property (nonatomic, readonly) long long pickableRouteType;
@property (getter=isPicked, nonatomic) bool picked;
@property (getter=isPickedOnPairedDevice, nonatomic, readonly) bool pickedOnPairedDevice;
@property (getter=isPlayingOnPairedDevice, nonatomic, readonly) bool playingOnPairedDevice;
@property (getter=isPowerbeatsRoute, nonatomic, readonly) bool powerbeatsRoute;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (nonatomic, readonly) bool requiresPassword;
@property (nonatomic, copy) NSString *routeName;
@property (nonatomic, readonly) long long routeSubtype;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) NSString *routeUID;
@property (nonatomic, readonly) bool supportsWirelessDisplay;
@property (nonatomic, retain) MPAVRoute *wirelessDisplayRoute;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (void*)_externalDevice;
- (id)auxiliaryDevices;
- (id)avRouteDescription;
- (id)batteryLevel;
- (bool)canAccessRemoteAssets;
- (id)connection;
- (id)debugDescription;
- (id)description;
- (bool)displayIsPicked;
- (long long)displayRouteType;
- (unsigned long long)hash;
- (bool)isAirpodsRoute;
- (bool)isAppleTVRoute;
- (bool)isB238Route;
- (bool)isBeatsSoloRoute;
- (bool)isBeatsStudioRoute;
- (bool)isBeatsXRoute;
- (bool)isCarplayRoute;
- (bool)isDeviceRoute;
- (bool)isEqual:(id)arg1;
- (bool)isPicked;
- (bool)isPickedOnPairedDevice;
- (bool)isPlayingOnPairedDevice;
- (bool)isPowerbeatsRoute;
- (long long)passwordType;
- (long long)pickableRouteType;
- (id)productIdentifier;
- (bool)requiresPassword;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setAVRouteDescription:(id)arg1;
- (void)setDisplayRouteType:(long long)arg1;
- (void)setPicked:(bool)arg1;
- (void)setRouteName:(id)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (bool)supportsWirelessDisplay;
- (id)wirelessDisplayRoute;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (long long)rc_audioRouteType;
- (bool)rc_shouldExpectFaceContact;

@end
