/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState> {
    void * _activeNowPlayingClient;
    NSMutableArray * _applicationPickedRoutes;
    id /* block */  _beginLyricsEventCallback;
    bool  _canBeNowPlayingApp;
    double  _canBeNowPlayingAppTimestamp;
    id /* block */  _capabilitiesCallback;
    id /* block */  _commandCallback;
    id /* block */  _endLyricsEventCallback;
    unsigned int  _hardwareRemoteBehavior;
    unsigned int  _inputMode;
    bool  _isOverrideApp;
    NSMutableArray * _nowPlayingClients;
    void * _origin;
    NSString * _parentApplication;
    NSObject<OS_dispatch_queue> * _pendingNotificationQueue;
    struct NSMutableDictionary { Class x1; } * _pendingNotifications;
    id /* block */  _playbackQueueCallback;
    id /* block */  _playbackQueueTransactionCallback;
    bool  _queueContentNotifications;
    unsigned int  _routeDiscoveryMode;
    NSObject<OS_dispatch_queue> * _serialQueue;
    union _MRColor { 
        struct { 
            float red; 
            float green; 
            float blue; 
            float alpha; 
        } ; 
        float data[4]; 
    }  _tintColor;
    unsigned int  _visibility;
}

@property (nonatomic) void*activeNowPlayingClient;
@property (nonatomic, copy) NSArray *applicationPickedRoutes;
@property (nonatomic, copy) id /* block */ beginLyricsEventCallback;
@property (nonatomic) bool canBeNowPlayingApp;
@property (nonatomic, copy) id /* block */ commandCallback;
@property (nonatomic, copy) id /* block */ endLyricsEventCallback;
@property (nonatomic) unsigned int hardwareRemoteBehavior;
@property (nonatomic) unsigned int inputMode;
@property (nonatomic) bool isOverrideApp;
@property (nonatomic, readonly) NSArray *nowPlayingClients;
@property (nonatomic, readonly) void*origin;
@property (nonatomic, copy) NSString *parentApplication;
@property (nonatomic, copy) id /* block */ playbackQueueCallback;
@property (nonatomic, copy) id /* block */ playbackQueueTransactionCallback;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (nonatomic) union _MRColor { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[4]; } tintColor;
@property (nonatomic) unsigned int visibility;

- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)_registerMediaServerNotifications;
- (void)_unregisterMediaServerNotifications;
- (void*)activeNowPlayingClient;
- (id)applicationPickedRoutes;
- (id /* block */)beginLyricsEventCallback;
- (bool)canBeNowPlayingApp;
- (id /* block */)commandCallback;
- (void)dealloc;
- (id)description;
- (void)dispatchQueuedContentChanges;
- (id /* block */)endLyricsEventCallback;
- (unsigned int)hardwareRemoteBehavior;
- (id)initWithOrigin:(void*)arg1;
- (unsigned int)inputMode;
- (bool)isOverrideApp;
- (void)notifyChangeOfContentItem:(void*)arg1 withRequest:(void*)arg2;
- (id)nowPlayingClientForPlayerPath:(void*)arg1;
- (id)nowPlayingClients;
- (void*)origin;
- (id)parentApplication;
- (id /* block */)playbackQueueCallback;
- (id /* block */)playbackQueueTransactionCallback;
- (void)removeClient:(void*)arg1;
- (void)restoreNowPlayingClientState;
- (unsigned int)routeDiscoveryMode;
- (void)setActiveNowPlayingClient:(void*)arg1;
- (void)setApplicationPickedRoutes:(id)arg1;
- (void)setBeginLyricsEventCallback:(id /* block */)arg1;
- (void)setCanBeNowPlayingApp:(bool)arg1;
- (void)setCommandCallback:(id /* block */)arg1;
- (void)setEndLyricsEventCallback:(id /* block */)arg1;
- (void)setHardwareRemoteBehavior:(unsigned int)arg1;
- (void)setInputMode:(unsigned int)arg1;
- (void)setIsOverrideApp:(bool)arg1;
- (void)setParentApplication:(id)arg1;
- (void)setPlaybackQueueCallback:(id /* block */)arg1;
- (void)setPlaybackQueueTransactionCallback:(id /* block */)arg1;
- (void)setRouteDiscoveryMode:(unsigned int)arg1;
- (void)setTintColor:(union _MRColor { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[4]; })arg1;
- (void)setVisibility:(unsigned int)arg1;
- (void)startQueuingContentChanges;
- (union _MRColor { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[4]; })tintColor;
- (unsigned int)visibility;

@end
