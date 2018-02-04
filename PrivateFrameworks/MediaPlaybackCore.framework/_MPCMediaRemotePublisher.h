/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCMediaRemotePublisher : NSObject <MPCPlaybackEngineEventObserving, MPNowPlayingInfoLyricsDelegate, MPNowPlayingPlaybackQueueDataSource_Private> {
    MPRemoteCommandCenter * _commandCenter;
    bool  _engineRestoringState;
    MPNowPlayingInfoCenter * _infoCenter;
    bool  _initializedSupportedCommands;
    MPLibraryAddStatusObserver * _libraryAddStatusObserver;
    MPCPlaybackEngine * _playbackEngine;
}

@property (nonatomic, readonly) MPRemoteCommandCenter *commandCenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEngineRestoringState, nonatomic) bool engineRestoringState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPNowPlayingInfoCenter *infoCenter;
@property (getter=hasInitializedSupportedCommands, nonatomic) bool initializedSupportedCommands;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contentItemForMPAVItem:(id)arg1;
- (void)_disableQueueModificationsChangedNotification:(id)arg1;
- (void)_durationAvailableNotification:(id)arg1;
- (void)_likedStateChangedNotification:(id)arg1;
- (void)_performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateSupportedCommands;
- (void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)becomeActive;
- (id)commandCenter;
- (id)contentItemForOffset:(long long)arg1;
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)engineDidEndStateRestoration:(id)arg1;
- (void)engineWillBeginStateRestoration:(id)arg1;
- (bool)hasInitializedSupportedCommands;
- (id)infoCenter;
- (id)initWithPlaybackEngine:(id)arg1;
- (bool)isEngineRestoringState;
- (id)nowPlayingContentItemForIdentifier:(id)arg1;
- (id)nowPlayingContentItemsForRequest:(void*)arg1 range:(struct { long long x1; long long x2; }*)arg2;
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;
- (id)playbackEngine;
- (void)publishIfNeeded;
- (void)removeSupportedSpecializedQueueIdentifier:(id)arg1;
- (void)setEngineRestoringState:(bool)arg1;
- (void)setInitializedSupportedCommands:(bool)arg1;

@end
