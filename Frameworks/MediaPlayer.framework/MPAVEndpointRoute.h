/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVEndpointRoute : MPAVRoute {
    MPAVRouteConnection * _connection;
    void * _endpoint;
}

@property (nonatomic, readonly) void*endpoint;

+ (void)getActiveEndpointRouteWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)canAccessRemoteAssets;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void*)endpoint;
- (id)initWithEndpoint:(void*)arg1;
- (bool)isAppleTVRoute;
- (bool)isB238Route;
- (bool)isDeviceRoute;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;

@end
