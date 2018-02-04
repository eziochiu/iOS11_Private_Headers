/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {
    void * _activePlayerPath;
    void * _client;
    int  _notifyRestoreClientStateForLaunch;
    NSMutableArray * _playerClients;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) void*activePlayerPath;
@property (nonatomic, readonly) void*client;
@property (nonatomic, readonly) NSArray *playerClients;

- (void*)activePlayerPath;
- (void*)client;
- (void)dealloc;
- (id)description;
- (id)initWithClient:(void*)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(void*)arg1;
- (id)playerClients;
- (void)removePlayer:(void*)arg1;
- (void)restoreNowPlayingClientState;
- (void)setActivePlayerPath:(void*)arg1;

@end
