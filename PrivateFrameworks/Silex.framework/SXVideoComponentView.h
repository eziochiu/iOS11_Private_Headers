/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoComponentView : SXMediaComponentView <SXFullscreenVideoPlaybackCandidate, SXMediaPlaybackDelegate, SXReachabilityObserver, SXVideoAdProviderDataSource, SXVideoPlayerViewControllerDataSource, SXVideoPlayerViewControllerDelegate, SXViewportChangeListener> {
    bool  _isReceivingViewportDynamicBoundsChanges;
    SXPosterFrameView * _posterFrame;
    id /* block */  _thumbnailRequestCancelHandler;
    SXVideoPlayerViewController * _videoPlayerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isReceivingViewportDynamicBoundsChanges;
@property (nonatomic, retain) SXPosterFrameView *posterFrame;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ thumbnailRequestCancelHandler;
@property (nonatomic, retain) SXVideoPlayerViewController *videoPlayerViewController;

- (void).cxx_destruct;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsVideoType;
- (bool)canEnterFullscreen;
- (void)discardContents;
- (void)enterFullscreen;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;
- (bool)isReceivingViewportDynamicBoundsChanges;
- (void)loadPosterFrameImage;
- (void)pauseMediaPlayback;
- (void)pausePrerollIfNeeded;
- (void)playButtonTapped;
- (bool)playbackIsAllowedForMode:(unsigned long long)arg1;
- (id)posterFrame;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (void)presentComponent;
- (void)reachabilityChanged:(bool)arg1;
- (void)registerAsMediaPlaybackDelegate;
- (void)registerForViewportDynamicBoundsChanges;
- (void)renderContents;
- (void)setIsReceivingViewportDynamicBoundsChanges:(bool)arg1;
- (void)setPosterFrame:(id)arg1;
- (void)setThumbnailRequestCancelHandler:(id /* block */)arg1;
- (void)setVideoPlayerViewController:(id)arg1;
- (void)setupVideoPlayerViewController:(id)arg1;
- (id /* block */)thumbnailRequestCancelHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)transitionViewUsesThumbnail;
- (void)unregisterForViewportDynamicBoundsChanges;
- (id)videoAdForVideoPlayerViewController:(id)arg1;
- (id /* block */)videoAdWithCompletionBlock:(id /* block */)arg1;
- (id)videoForVideoPlayerViewController:(id)arg1;
- (id)videoPlayerViewController;
- (void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;
- (bool)videoPlayerViewControllerShouldStartPlayback:(id)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewport:(id)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2;
- (void)visibilityStateDidChangeFromState:(long long)arg1;

@end
