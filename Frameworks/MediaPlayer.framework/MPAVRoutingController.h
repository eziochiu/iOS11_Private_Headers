/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingController : NSObject {
    NSMutableArray * _asyncFetchingCompletionHandlers;
    bool  _asyncFetchingRoutes;
    MPAVRoute * _cachedPickedRoute;
    NSArray * _cachedRoutes;
    NSString * _category;
    MPAVRoutingDataSource * _dataSource;
    <MPAVRoutingControllerDelegate> * _delegate;
    int  _deviceAvailabilityNotifyToken;
    bool  _deviceAvailabilityOverrideState;
    long long  _discoveryMode;
    long long  _externalScreenType;
    bool  _hasExternalScreenType;
    MPAVRoute * _legacyCachedRoute;
    NSString * _name;
    MPAVRoute * _pendingPickedRoute;
    long long  _routeTypes;
    bool  _scheduledSendDelegateRoutesChanged;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned long long  _volumeControlStateForPickedRoute;
}

@property (nonatomic, readonly, copy) NSArray *availableRoutes;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, readonly) MPAVRoutingDataSource *dataSource;
@property (nonatomic) <MPAVRoutingControllerDelegate> *delegate;
@property (nonatomic) long long discoveryMode;
@property (nonatomic, readonly) long long externalScreenType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) MPAVRoute *pendingPickedRoute;
@property (nonatomic, readonly) MPAVRoute *pickedRoute;
@property (nonatomic) long long routeTypes;
@property (nonatomic, readonly) bool volumeControlIsAvailable;

+ (id)_currentDeviceRoutingIconImage;
+ (id)_currentDeviceRoutingIconImageName;
+ (id)_iconImageForRoute:(id)arg1;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (bool)_deviceAvailabilityOverrideState;
- (long long)_externalScreenType:(bool*)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_onQueueClearCachedRoutes;
- (void)_onQueueSetExternalScreenType:(long long)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (void)_registerNotifications;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_setExternalScreenType:(long long)arg1;
- (void)_setVolumeControlStateForPickedRoute:(unsigned long long)arg1;
- (void)_unregisterNotifications;
- (void)_updateCachedRoutes;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (unsigned long long)_volumeControlStateForPickedRoute;
- (bool)airtunesRouteIsPicked;
- (id)availableRoutes;
- (id)category;
- (void)clearCachedRoutes;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (long long)discoveryMode;
- (long long)externalScreenType;
- (void)fetchAvailableRoutesWithCompletionHandler:(id /* block */)arg1;
- (bool)handsetRouteIsPicked;
- (id)init;
- (id)initWithDataSource:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)logCurrentRoutes;
- (id)name;
- (id)pendingPickedRoute;
- (bool)pickBestDeviceRoute;
- (bool)pickHandsetRoute;
- (bool)pickRoute:(id)arg1;
- (bool)pickRoute:(id)arg1 withPassword:(id)arg2;
- (bool)pickSpeakerRoute;
- (id)pickedRoute;
- (bool)receiverRouteIsPicked;
- (bool)routeOtherThanHandsetAndSpeakerAvailable;
- (bool)routeOtherThanHandsetAvailable;
- (long long)routeTypes;
- (void)setCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setRouteTypes:(long long)arg1;
- (bool)speakerRouteIsPicked;
- (void)unpickAirPlayScreenRouteWithCompletion:(id /* block */)arg1;
- (id)videoRouteForRoute:(id)arg1;
- (bool)volumeControlIsAvailable;
- (bool)wirelessDisplayRouteIsPicked;
- (bool)wirelessDisplayRoutesAvailable;

@end
