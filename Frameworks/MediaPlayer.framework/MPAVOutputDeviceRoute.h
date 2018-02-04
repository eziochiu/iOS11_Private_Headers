/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVOutputDeviceRoute : MPAVRoute {
    void * _outputDevice;
}

@property (nonatomic, readonly) void*outputDevice;

- (bool)canAccessRemoteAssets;
- (void)dealloc;
- (id)description;
- (id)initWithOutputDevice:(void*)arg1;
- (bool)isAppleTVRoute;
- (bool)isB238Route;
- (bool)isDeviceRoute;
- (void*)outputDevice;
- (long long)pickableRouteType;
- (id)productIdentifier;
- (bool)requiresPassword;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (bool)supportsWirelessDisplay;

@end
