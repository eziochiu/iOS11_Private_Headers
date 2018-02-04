/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAudioComponentView : SXMediaComponentView <SXMediaPlaybackDelegate> {
    bool  _audioHasPlayed;
    SXAudioComponentOverlayView * _overlayView;
    SXAVPlayer * _player;
    AVPlayerViewController * _playerViewController;
    bool  _startPlaybackWhenReady;
}

@property (nonatomic) bool audioHasPlayed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXAudioComponentOverlayView *overlayView;
@property (nonatomic, retain) SXAVPlayer *player;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (nonatomic) bool startPlaybackWhenReady;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (bool)audioHasPlayed;
- (void)hidePlaybackControls;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;
- (void)loadAudio;
- (void)loadImage;
- (id)overlayView;
- (void)pauseMediaPlayback;
- (void)playButtonTapped:(id)arg1;
- (void)playbackFinished;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (id)player;
- (id)playerViewController;
- (void)presentComponent;
- (void)renderContents;
- (void)setAudioHasPlayed:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setStartPlaybackWhenReady:(bool)arg1;
- (void)setupPlayerViewControllerWithPlayer:(id)arg1;
- (bool)shouldAutoStartPlayback;
- (void)showPlaybackControls;
- (bool)startPlaybackWhenReady;
- (void)submitMediaEngageCompleteEvent;
- (void)submitMediaEngageEventForUserAction:(unsigned long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
