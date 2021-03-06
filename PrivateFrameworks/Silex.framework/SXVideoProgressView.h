/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoProgressView : UIView {
    double  _duration;
    double  _loadingProgress;
    UIView * _loadingProgressView;
    UIVisualEffectView * _playbackProgressView;
    double  _timeElapsed;
}

@property (nonatomic) double duration;
@property (nonatomic) double loadingProgress;
@property (nonatomic, readonly) UIView *loadingProgressView;
@property (nonatomic, readonly) UIVisualEffectView *playbackProgressView;
@property (nonatomic) double timeElapsed;

- (void).cxx_destruct;
- (void)animatePlaybackProgressWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)animateToStart;
- (double)duration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForProgress:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)loadingProgress;
- (id)loadingProgressView;
- (id)playbackProgressView;
- (void)setDuration:(double)arg1;
- (void)setLoadingProgress:(double)arg1;
- (void)setTimeElapsed:(double)arg1;
- (double)timeElapsed;

@end
