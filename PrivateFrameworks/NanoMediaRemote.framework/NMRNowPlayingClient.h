/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRNowPlayingClient : NSObject <NMROriginMediaRemoteObserverNotificationHandler> {
    NSString * _bundleIdentifier;
    NSString * _displayName;
    void * _mediaRemoteNowPlayingClient;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) void*mediaRemoteNowPlayingClient;

+ (void*)_nowPlayingClientFromNotification:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)displayName;
- (id)initFromNotification:(id)arg1;
- (id)initWithMRNowPlayingClient:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (void*)mediaRemoteNowPlayingClient;
- (bool)shouldHandleNotification:(id)arg1;

@end