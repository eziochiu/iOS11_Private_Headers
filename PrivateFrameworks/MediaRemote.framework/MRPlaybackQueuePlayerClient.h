/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlaybackQueuePlayerClient : NSObject {
    NSMutableDictionary * _cache;
    void * _context;
    NSMutableDictionary * _offsets;
    void * _playerPath;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _requests;
}

@property (nonatomic) void*context;
@property (nonatomic, readonly) NSDictionary *lookup;
@property (nonatomic, readonly) void*playerPath;

- (void)_OnQueue_setContext:(void*)arg1;
- (void)_invalidate;
- (id)_onQueue_writeData;
- (void)addPlaybackQueue:(void*)arg1 forRequest:(void*)arg2;
- (void)addRequest:(void*)arg1;
- (bool)augmentCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;
- (void*)contentItemForOffset:(long long)arg1;
- (void*)context;
- (void)dealloc;
- (id)description;
- (bool)hasRequest:(id)arg1;
- (id)initWithPlayerPath:(void*)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)invalidateWithContext:(void*)arg1;
- (id)lookup;
- (void*)nowPlayingItem;
- (long long)offsetForContentItem:(void*)arg1;
- (id)offsetForQueueIdentifier:(void*)arg1;
- (id)offsetsForContentItem:(void*)arg1;
- (void*)playerPath;
- (void)readData:(id)arg1;
- (void)removeRequest:(id)arg1;
- (void*)requestForContentItem:(void*)arg1;
- (void*)requestForIdentifer:(id)arg1;
- (void)setContext:(void*)arg1;
- (id)subscribedContentItemRequests:(id)arg1;
- (id)subscribedContentItems:(id)arg1;
- (id)subscribedContentItems:(id)arg1 forRequest:(void*)arg2;
- (id)subscribedContentItemsIdentifiers:(id)arg1 forRequest:(void*)arg2;

@end
