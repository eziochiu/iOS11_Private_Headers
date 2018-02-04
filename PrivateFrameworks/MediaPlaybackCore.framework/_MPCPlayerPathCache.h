/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerPathCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableDictionary * _invalidatablePlayerPaths;
    NSMutableDictionary * _playerPathResolutions;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) NSMutableDictionary *invalidatablePlayerPaths;
@property (nonatomic, readonly) NSMutableDictionary *playerPathResolutions;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)_onQueue_invalidateForNotificationName:(id)arg1;
- (id)accessQueue;
- (void)activeOriginDidChangeNotification:(id)arg1;
- (id)calloutQueue;
- (void)dealloc;
- (id)invalidatablePlayerPaths;
- (void)nowPlayingApplicationDidChangeNotification:(id)arg1;
- (void)nowPlayingPlayerDidChangeNotification:(id)arg1;
- (id)playerPathResolutions;
- (id)resolvedPlayerPathForPlayerPath:(id)arg1;
- (void)routeConnectionDidInvalidateNotification:(id)arg1;

@end
