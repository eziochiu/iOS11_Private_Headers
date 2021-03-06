/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTVPrerollController : NSObject <ADPlayerDelegate, ADTVMediaControlsViewControllerDelegate> {
    ADPlayer * _adPlayer;
    AVPlayerViewController * _avPlayerViewController;
    id /* block */  _completionHandler;
    ADTVMediaControlsViewController * _mediaControlsViewController;
    bool  _setupInProgress;
    ADTVPrerollVideoView * _videoView;
}

@property (nonatomic, retain) ADPlayer *adPlayer;
@property (nonatomic) AVPlayerViewController *avPlayerViewController;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ADTVMediaControlsViewController *mediaControlsViewController;
@property (nonatomic) bool setupInProgress;
@property (readonly) Class superclass;
@property (nonatomic, retain) ADTVPrerollVideoView *videoView;

- (id)_advertisementView;
- (bool)_canBeginPlayback;
- (void)_handlePlaybackCompletion:(bool)arg1;
- (id)adPlayer;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerDidBeginAction:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (void)adtvMediaControlsActionButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsPrivacyButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsSkipButtonWasPressed:(id)arg1;
- (id)avPlayerViewController;
- (void)cancel;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithAVPlayerViewController:(id)arg1;
- (id)mediaControlsViewController;
- (void)playPrerollAdWithCompletion:(id /* block */)arg1;
- (void)setAdPlayer:(id)arg1;
- (void)setAvPlayerViewController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMediaControlsViewController:(id)arg1;
- (void)setSetupInProgress:(bool)arg1;
- (void)setVideoView:(id)arg1;
- (bool)setupInProgress;
- (void)shutdown;
- (id)videoView;

@end
