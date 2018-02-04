/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingInfoCenter : NSObject {
    NSDictionary * __mediaRemoteNowPlayingInfo;
    MPArtworkResizeUtility * _artworkResizeUtility;
    void * _artworkToken;
    bool  _coalescingUpdates;
    NSMutableOrderedSet * _contentItemIdentifiersNotSentToMediaRemote;
    NSMutableOrderedSet * _contentItemIdentifiersSentToMediaRemote;
    NSDictionary * _convertedNowPlayingInfo;
    void * _createChildItemToken;
    void * _createItemForIdentifierToken;
    void * _createItemForOffsetToken;
    void * _createPlaybackQueueToken;
    void * _infoToken;
    void * _languageOptionsToken;
    <MPNowPlayingInfoLyricsDelegate> * _lyricsDelegate;
    void * _lyricsToken;
    void * _metadataToken;
    NSMutableDictionary * _mutatedContentItems;
    NSMutableDictionary * _mutatedPlaybackQueueRequests;
    bool  _needsInvalidation;
    NSDictionary * _nowPlayingInfo;
    <MPNowPlayingPlaybackQueueDataSource> * _playbackQueueDataSource;
    <MPNowPlayingPlaybackQueueDelegate> * _playbackQueueDelegate;
    unsigned long long  _playbackState;
    NSString * _playerID;
    void * _playerPath;
    MPNowPlayingInfoCenterArtworkContext * _publishedContext;
    NSDate * _pushDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _queuedNowPlayingInfo;
    NSObject<OS_dispatch_queue> * _utilityQueue;
}

@property (nonatomic, readonly) NSDictionary *_mediaRemoteNowPlayingInfo;
@property (nonatomic) <MPNowPlayingInfoLyricsDelegate> *lyricsDelegate;
@property (copy) NSDictionary *nowPlayingInfo;
@property (nonatomic) MPCPlaybackEngine *playbackEngine;
@property (nonatomic) <MPNowPlayingPlaybackQueueDataSource> *playbackQueueDataSource;
@property (nonatomic) <MPNowPlayingPlaybackQueueDelegate> *playbackQueueDelegate;
@property unsigned long long playbackState;
@property (nonatomic, readonly) NSString *playerID;
@property (nonatomic, readonly, copy) NSSet *unpublishedChangedContentItemIDs;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)defaultCenter;
+ (id)infoCenterForPlayerID:(id)arg1;

- (void).cxx_destruct;
- (void)_clearPlaybackQueueDataSourceCallbacks;
- (void)_contentItemChangedNotification:(id)arg1;
- (void)_getArtworkForRequest:(void*)arg1 item:(id)arg2 returnItem:(id)arg3 completion:(id /* block */)arg4;
- (void)_getInfoForRequest:(void*)arg1 item:(id)arg2 returnItem:(id)arg3 completion:(id /* block */)arg4;
- (void)_getLanguageOptionsForRequest:(void*)arg1 item:(id)arg2 returnItem:(id)arg3 completion:(id /* block */)arg4;
- (void)_getLyricsForRequest:(void*)arg1 item:(id)arg2 returnItem:(id)arg3 completion:(id /* block */)arg4;
- (void)_invalidatePlaybackQueueImmediately;
- (id)_mediaRemoteNowPlayingInfo;
- (void)_pushContentItemsUpdate;
- (void)_pushNowPlayingInfoAndRetry:(bool)arg1;
- (id)_queryChildItemFromDataSource:(id)arg1 atIndexPath:(id)arg2 fromRoot:(id)arg3;
- (void)_registerLyricsDelegateCallbacks:(id)arg1;
- (void)_registerPlaybackQueueDataSourceCallbacks:(id)arg1;
- (void)_removeToken:(void**)arg1;
- (void)becomeActive;
- (void)beginObservingChangesForContentItemIDs:(id)arg1;
- (void)beginPlaybackQueueContentItemUpdates;
- (void)dealloc;
- (void)endPlaybackQueueContentItemUpdates;
- (id)init;
- (id)initWithPlayerID:(id)arg1;
- (void)invalidatePlaybackQueue;
- (id)lyricsDelegate;
- (id)nowPlayingInfo;
- (id)playbackQueueDataSource;
- (id)playbackQueueDelegate;
- (unsigned long long)playbackState;
- (id)playerID;
- (void)setLyricsDelegate:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueueDataSource:(id)arg1;
- (void)setPlaybackQueueDelegate:(id)arg1;
- (void)setPlaybackState:(unsigned long long)arg1;
- (id)unpublishedChangedContentItemIDs;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)playbackEngine;
- (void)setPlaybackEngine:(id)arg1;

@end
