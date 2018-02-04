/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    void * _applicationOutputContext;
    bool  _attemptedToInitializeAppOutputContext;
    void * _callbackToken;
    void * _discoverySession;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) NSString *routingContextUID;

+ (id)_globalAudioSessionLock;

- (void).cxx_destruct;
- (void*)_copyApplicationOutputContext;
- (void*)_createDefaultApplicationOutputContext;
- (void)_endpointsDidChangeNotification:(id)arg1;
- (void)_outputDevicesDidChange:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (long long)discoveryMode;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)routingContextUID;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;
- (void)setRoutingContextUID:(id)arg1;

@end
