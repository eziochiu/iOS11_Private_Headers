/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteServiceClient : NSObject {
    void * _activePlayerPath;
    MRNotificationClient * _notificationClient;
    int  _notifyRestoreClientStateForLaunch;
    NSObject<OS_dispatch_queue> * _playbackQueueDispatchQueue;
    NSString * _preparedBundleID;
    NSMutableArray * _registeredOrigins;
    MRAVRoutingClientController * _routingClientController;
    NSObject<OS_dispatch_queue> * _serialQueue;
    struct MRMediaRemoteService { } * _service;
}

@property (nonatomic) void*activePlayerPath;
@property (nonatomic, readonly) MRNotificationClient *notificationClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (nonatomic, copy) NSString *preparedBundleID;
@property (nonatomic, readonly) NSArray *registeredOrigins;
@property (nonatomic, readonly) struct MRMediaRemoteService { }*service;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workerQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workerSerialQueue;

+ (id)sharedServiceClient;

- (void)_onQueue_setActivePlayerPath:(void*)arg1;
- (void*)activePlayerPath;
- (void)dealloc;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)notificationClient;
- (id)playbackQueueDispatchQueue;
- (id)preparedBundleID;
- (void)registerOrigin:(void*)arg1 withCompletion:(id /* block */)arg2;
- (id)registeredOrigins;
- (struct MRMediaRemoteService { }*)service;
- (void)setActivePlayerPath:(void*)arg1;
- (void)setPlaybackQueueDispatchQueue:(id)arg1;
- (void)setPreparedBundleID:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(id /* block */)arg1;
- (void)unregisterOrigin:(void*)arg1 withCompletion:(id /* block */)arg2;
- (id)workerQueue;
- (id)workerSerialQueue;

@end
