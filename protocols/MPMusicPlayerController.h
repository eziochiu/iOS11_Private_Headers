/* made by EzioChiu.
 */

@protocol MPMusicPlayerController

@optional

- (void)appendQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (NSNumber *)currentChapterIndex;
- (NSNumber *)currentPlaybackRate;
- (NSNumber *)currentPlaybackTime;
- (NSUUID *)currentQueueUUID;
- (void)endSeeking;
- (NSNumber *)indexOfNowPlayingItem;
- (NSNumber *)isGeniusAvailable;
- (NSNumber *)isGeniusAvailableForSeedItems:(NSArray *)arg1;
- (MPMediaItem *)nowPlayingItem;
- (MPMediaItem *)nowPlayingItemAtIndex:(NSNumber *)arg1;
- (NSNumber *)numberOfItems;
- (void)pause;
- (void)pauseWithFadeoutDuration:(NSNumber *)arg1;
- (void)play;
- (void)playItem:(MPMediaItem *)arg1;
- (NSNumber *)playbackState;
- (void)prepareQueueForPlayback;
- (void)prepareToPlay;
- (void)prependQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1;
- (MPMediaQuery *)queueAsQuery;
- (MPRadioStation *)queueAsRadioStation;
- (MPMusicPlayerControllerQueue *)queueWithUUID:(NSUUID *)arg1;
- (void)registerForServerDiedNotifications;
- (NSNumber *)repeatMode;
- (void)requestQueue;
- (NSNumber *)serverIsAlive;
- (void)setCurrentChapterIndex:(NSNumber *)arg1;
- (void)setCurrentPlaybackRate:(NSNumber *)arg1;
- (void)setCurrentPlaybackTime:(NSNumber *)arg1;
- (void)setNowPlayingItem:(MPMediaItem *)arg1;
- (void)setQueue:(MPMusicPlayerControllerQueue *)arg1;
- (void)setQueueWithDescriptor:(MPMusicPlayerQueueDescriptor *)arg1;
- (void)setQueueWithGeniusMixPlaylist:(MPMediaPlaylist *)arg1;
- (void)setQueueWithItemCollection:(MPMediaItemCollection *)arg1;
- (void)setQueueWithQuery:(MPMediaQuery *)arg1;
- (void)setQueueWithQuery:(MPMediaQuery *)arg1 firstItem:(MPMediaItem *)arg2;
- (void)setQueueWithRadioStation:(MPRadioStation *)arg1;
- (NSNumber *)setQueueWithSeedItems:(NSArray *)arg1;
- (NSNumber *)setQueueWithStoreIDs:(NSArray *)arg1;
- (void)setRepeatMode:(NSNumber *)arg1;
- (void)setShuffleMode:(NSNumber *)arg1;
- (void)setUseApplicationSpecificQueue:(NSNumber *)arg1;
- (void)setUserQueueModificationsDisabled:(NSNumber *)arg1;
- (void)shuffle;
- (NSNumber *)shuffleMode;
- (NSData *)skipInDirection:(NSNumber *)arg1;
- (void)skipToBeginning;
- (void)skipToBeginningOrPreviousItem;
- (void)skipToNextChapter;
- (void)skipToNextItem;
- (void)skipToPreviousChapter;
- (void)skipToPreviousItem;
- (void)stop;
- (NSNumber *)userQueueModificationsDisabled;

@end
