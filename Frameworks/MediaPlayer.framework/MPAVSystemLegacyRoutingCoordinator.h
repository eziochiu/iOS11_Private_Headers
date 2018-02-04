/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVSystemLegacyRoutingCoordinator : NSObject {
    NSPointerArray * _clientDataSources;
    long long  _clientDiscoveryMode;
    int  _debugNotifyToken;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedRoutingCoordinator;

- (void).cxx_destruct;
- (void)_debugLogSystemControllerState;
- (id)_init;
- (void)_onQueueUpdateClientRouteDiscoveryMode;
- (void)dealloc;
- (id)init;
- (void)registerClientDataSource:(id)arg1;
- (void)reloadClientRouteDiscoveryMode;
- (void)unregisterClientDataSource:(id)arg1;

@end
