/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {
    NSMutableDictionary * _originClientRequests;
    NSMutableDictionary * _originClients;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedManager;

- (id)clientForPlayerPath:(void*)arg1;
- (id)clientRequestsForPlayerPath:(void*)arg1;
- (void)clientRequestsForUnresolvedPlayerPath:(void*)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)localOriginClient;
- (void)localOriginClientRequests:(id /* block */)arg1;
- (id)originClientForOrigin:(void*)arg1;
- (id)originClientForPlayerPath:(void*)arg1;
- (id)originClientRequestsForPlayerPath:(void*)arg1;
- (void)originClientRequestsForUnresolvedPlayerPath:(void*)arg1 completion:(id /* block */)arg2;
- (id)playerClientForPlayerPath:(void*)arg1;
- (id)playerClientRequestsForPlayerPath:(void*)arg1;
- (void)playerClientRequestsForUnresolvedPlayerPath:(void*)arg1 completion:(id /* block */)arg2;
- (void)removeClient:(void*)arg1;
- (void)removeOrigin:(void*)arg1;
- (void)removePlayer:(void*)arg1;
- (void)restoreNowPlayingClientState;

@end
