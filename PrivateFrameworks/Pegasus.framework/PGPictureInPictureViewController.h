/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureViewController : UIViewController <PGPictureInPictureControlsViewControllerDelegate> {
    PGPictureInPictureApplication * _application;
    UIView * _containerView;
    <PGPictureInPictureViewControllerContentContainer> * _contentContainer;
    PGLayerHostView * _contentView;
    long long  _controlsStyle;
    PGPictureInPictureControlsViewController * _controlsViewController;
    <PGPictureInPictureViewControllerDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureViewController_updateHostedWindowSize_animationType_initialSpringVelocity : 1; 
        unsigned int pictureInPictureViewControllerHostedWindowSizeChangeBegan : 1; 
        unsigned int pictureInPictureViewControllerHostedWindowSizeChangeEnded : 1; 
        unsigned int pictureInPictureViewControllerStopButtonTapped : 1; 
        unsigned int pictureInPictureViewControllerActionButtonTapped : 1; 
        unsigned int pictureInPictureViewControllerCancelButtonTapped : 1; 
    }  _delegateRespondsTo;
    PGHostedWindowHostingHandle * _hostedWindowHostingHandle;
    bool  _initialLayerFrameIsNull;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _layerHostTransform;
    NSArray * _loadedTimeRanges;
    PGLoadingIndicatorView * _loadingIndicatorView;
    PGPlaybackProgress * _playbackProgress;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    bool  _showsAlternateActionButtonImage;
    bool  _showsLoadingIndicator;
    long long  _stashState;
    PGStashedView * _stashedView;
    UIView * _styleViewAbove;
    UIView * _styleViewBelow;
}

@property (nonatomic, readonly) PGPictureInPictureApplication *application;
@property (nonatomic) <PGPictureInPictureViewControllerContentContainer> *contentContainer;
@property (nonatomic, readonly) long long controlsStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGPictureInPictureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic, retain) NSArray *loadedTimeRanges;
@property (nonatomic, retain) PGPlaybackProgress *playbackProgress;
@property (nonatomic) bool showsAlternateActionButtonImage;
@property (nonatomic) bool showsLoadingIndicator;
@property (nonatomic) long long stashState;
@property (readonly) Class superclass;

+ (void)animateViewWithAnimationType:(long long)arg1 initialSpringVelocity:(double)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)application;
- (id)contentContainer;
- (long long)controlsStyle;
- (void)dealloc;
- (id)delegate;
- (id)hostedWindowHostingHandle;
- (void)hostedWindowSizeChangeBegan;
- (void)hostedWindowSizeChangeEnded;
- (id)initWithApplication:(id)arg1 controlsStyle:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)loadedTimeRanges;
- (void)performResumeAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)performStartAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)performStopAnimationWithFinalLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)performSuspendAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)pictureInPictureControlsViewControllerActionButtonTapped:(id)arg1;
- (void)pictureInPictureControlsViewControllerCancelButtonTapped:(id)arg1;
- (bool)pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture:(id)arg1;
- (bool)pictureInPictureControlsViewControllerShouldHandleTapGesture:(id)arg1;
- (void)pictureInPictureControlsViewControllerStopButtonTapped:(id)arg1;
- (id)playbackProgress;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)prepareStartAnimationWithInitialLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)setContentContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPlaybackProgress:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShowsAlternateActionButtonImage:(bool)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (void)setStashState:(long long)arg1;
- (void)setStashState:(long long)arg1 animated:(bool)arg2;
- (bool)showsAlternateActionButtonImage;
- (bool)showsLoadingIndicator;
- (void)startShowingControlsAnimated:(bool)arg1;
- (long long)stashState;
- (void)stopShowingControlsAnimated:(bool)arg1;
- (void)updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateLayerHostTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
