/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
    NSMapTable * _cachedEndpoints;
    void * _callbackToken;
    void * _discoverySession;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (void)_endpointsDidChange:(id)arg1;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (long long)discoveryMode;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;

@end
