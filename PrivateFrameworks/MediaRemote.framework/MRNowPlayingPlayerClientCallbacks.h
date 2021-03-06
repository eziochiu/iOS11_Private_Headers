/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingPlayerClientCallbacks : NSObject {
    MRPlaybackQueueContentItemCallbacks * _artworkCallbacks;
    id /* block */  _audioAmplitudeSamplesCallback;
    id /* block */  _beginLyricsEventCallback;
    NSMutableDictionary * _commandHandlerBlocks;
    void * _context;
    MRPlaybackQueueContentItemCallbacks * _createChildItemCallbacks;
    MRPlaybackQueueContentItemCallbacks * _createItemForIdentifierCallbacks;
    MRPlaybackQueueContentItemCallbacks * _createItemForOffsetCallbacks;
    MRPlaybackQueueContentItemCallbacks * _createPlaybackQueueForRequestCallbacks;
    id /* block */  _endLyricsEventCallback;
    MRPlaybackQueueContentItemCallbacks * _infoCallbacks;
    MRPlaybackQueueContentItemCallbacks * _languageOptionCallbacks;
    MRPlaybackQueueContentItemCallbacks * _lyricsCallbacks;
    MRPlaybackQueueContentItemCallbacks * _metadataCallbacks;
    void * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
    id /* block */  _videoThumbnailsCallback;
}

@property (nonatomic, readonly) NSArray *artworkCallbacks;
@property (nonatomic, copy) id /* block */ audioAmplitudeSamplesCallback;
@property (nonatomic, copy) id /* block */ beginLyricsEventCallback;
@property (nonatomic, readonly) void*capabilities;
@property (nonatomic, readonly, copy) NSArray *commandHandlerBlocks;
@property (nonatomic, readonly) void*context;
@property (nonatomic, readonly) id /* block */ createChildItemCallback;
@property (nonatomic, readonly) id /* block */ createItemForIdentifierCallback;
@property (nonatomic, readonly) id /* block */ createItemForOffsetCallback;
@property (nonatomic, readonly) id /* block */ createPlaybackQueueForRequestCallback;
@property (nonatomic, copy) id /* block */ endLyricsEventCallback;
@property (nonatomic, readonly) bool hasPlaybackQueueCallbacks;
@property (nonatomic, readonly) NSArray *infoCallbacks;
@property (nonatomic, readonly) NSArray *languageOptionsCallbacks;
@property (nonatomic, readonly) NSArray *lyricsCallbacks;
@property (nonatomic, readonly) NSArray *metadataCallbacks;
@property (nonatomic, readonly) void*playerPath;
@property (nonatomic, copy) id /* block */ videoThumbnailsCallback;

- (void*)_addCallback:(id)arg1 toList:(id*)arg2 prepend:(bool)arg3;
- (id)_callbacksFromList:(id)arg1;
- (void*)_onQueue_capabilities;
- (void*)addArtworkCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (void)addCommandHandlerBlock:(id /* block */)arg1 forKey:(id)arg2;
- (void*)addCreateChildItemCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (void*)addCreateItemForIdentifierCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (void*)addCreateItemForOffsetCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (void*)addCreatePlaybackQueueForRequestCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (void*)addInfoCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (void*)addLanguageOptionsCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (void*)addLyricsCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (void*)addMetadataCallback:(id /* block */)arg1 prepend:(bool)arg2;
- (id)artworkCallbacks;
- (id /* block */)audioAmplitudeSamplesCallback;
- (id /* block */)beginLyricsEventCallback;
- (void*)capabilities;
- (id)commandHandlerBlocks;
- (void*)context;
- (id /* block */)createChildItemCallback;
- (id /* block */)createItemForIdentifierCallback;
- (id /* block */)createItemForOffsetCallback;
- (id /* block */)createPlaybackQueueForRequestCallback;
- (void)dealloc;
- (id /* block */)endLyricsEventCallback;
- (bool)hasPlaybackQueueCallbacks;
- (id)infoCallbacks;
- (id)initWithPlayerPath:(void*)arg1 queue:(id)arg2;
- (id)languageOptionsCallbacks;
- (id)lyricsCallbacks;
- (id)metadataCallbacks;
- (void*)playerPath;
- (bool)removeCallback:(void*)arg1;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)setAudioAmplitudeSamplesCallback:(id /* block */)arg1;
- (void)setBeginLyricsEventCallback:(id /* block */)arg1;
- (void)setEndLyricsEventCallback:(id /* block */)arg1;
- (void)setVideoThumbnailsCallback:(id /* block */)arg1;
- (id /* block */)videoThumbnailsCallback;

@end
