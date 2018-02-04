/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteController : NSObject <MSVLRUDictionaryDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <MPArtworkDataSource> * _artworkDataSource;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    MSVLRUDictionary * _contentItemArtwork;
    NSMutableDictionary * _contentItemArtworkFutures;
    NSMutableDictionary * _contentItemChanges;
    NSMapTable * _contentItemFutures;
    NSMutableArray * _contentItemIDs;
    NSMapTable * _contentItemIDsFutures;
    MSVLRUDictionary * _contentItems;
    id  _invalidationToken;
    struct _MSVSignedRange { 
        long long location; 
        long long length; 
    }  _maximumLoadedRange;
    NSMutableDictionary * _optimisticStateContentItems;
    long long  _playbackStateCacheState;
    MPCFuture * _playbackStateFuture;
    long long  _playingIdentifierCacheState;
    NSString * _playingItemIdentifier;
    MPCFuture * _playingItemIdentifierFuture;
    MPCPlayerPath * _resolvedPlayerPath;
    long long  _supportedCommandsCacheState;
    MPCFuture * _supportedCommandsFuture;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) <MPArtworkDataSource> *artworkDataSource;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id invalidationToken;
@property (nonatomic, readonly) MPCFuture *playbackState;
@property (nonatomic, readonly) long long playbackStateCacheState;
@property (nonatomic, readonly) MPCFuture *playingIdentifier;
@property (nonatomic, readonly) long long playingIdentifierCacheState;
@property (nonatomic, retain) MPCPlayerPath *resolvedPlayerPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPCFuture *supportedCommands;
@property (nonatomic, readonly) long long supportedCommandsCacheState;

+ (bool)_isRemote;
+ (id)controllerForPlayerPath:(id)arg1;

- (void).cxx_destruct;
- (void)_contentItemArtworkChangedNotification:(id)arg1;
- (id)_init;
- (id)_legacyCommands;
- (id)_onQueue_identifiersForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)arg1;
- (void)_onQueue_mergeContentItems:(id)arg1 queueRange:(struct _MSVSignedRange { long long x1; long long x2; })arg2;
- (void)_onQueue_setOptimisticPlaybackPositionWithOptions:(id)arg1;
- (void)_onQueue_setOptimisticPlaybackState:(unsigned int)arg1 withOptions:(id)arg2;
- (void)_onQueue_updateOptimisticElapsedTimeForContentItem:(id)arg1 elapsedTime:(double)arg2 rate:(float)arg3;
- (void)_onQueue_updateOptimisticStateForCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (void)_playbackQueueContentItemsChangedNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_supportedCommandsDidChangedNotification:(id)arg1;
- (id)accessQueue;
- (id)artworkDataSource;
- (id)calloutQueue;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)contentItemArtworkForIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (void)dealloc;
- (void)dictionary:(id)arg1 willRemoveObject:(id)arg2 forKey:(id)arg3;
- (void)invalidateAllTokens;
- (id)invalidationToken;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (id)playbackState;
- (long long)playbackStateCacheState;
- (id)playingIdentifier;
- (long long)playingIdentifierCacheState;
- (id)resolvedPlayerPath;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccessQueue:(id)arg1;
- (void)setCalloutQueue:(id)arg1;
- (void)setInvalidationToken:(id)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (id)supportedCommands;
- (long long)supportedCommandsCacheState;

@end
