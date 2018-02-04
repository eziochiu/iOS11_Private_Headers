/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStageLightOverlayView : UIView {
    unsigned long long  __activeTimerID;
    UIView * __backgroundContainerView;
    CAMStageLightOverlayCircleView * __circleView;
    bool  __displayedActive;
    CAGradientLayer * __gradientLayer;
    UIView * __tintView;
    UIImageView * __vignetteView;
    bool  _active;
    double  _bottomContentInset;
    long long  _orientation;
    bool  _visible;
}

@property (setter=_setActiveTimerID:, nonatomic) unsigned long long _activeTimerID;
@property (nonatomic, readonly) UIView *_backgroundContainerView;
@property (nonatomic, readonly) CAMStageLightOverlayCircleView *_circleView;
@property (getter=_isDisplayedActive, setter=_setDisplayedActive:, nonatomic) bool _displayedActive;
@property (nonatomic, readonly) CAGradientLayer *_gradientLayer;
@property (nonatomic, readonly) UIView *_tintView;
@property (nonatomic, readonly) UIImageView *_vignetteView;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) double bottomContentInset;
@property (nonatomic) long long orientation;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (unsigned long long)_activeTimerID;
- (id)_backgroundContainerView;
- (void)_cancelActiveTimer;
- (double)_circleDiameterForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_circleFrameForOrientation:(long long)arg1;
- (id)_circleView;
- (double)_durationForCutoutAnimation;
- (id)_gradientLayer;
- (bool)_isDisplayedActive;
- (void)_setActiveTimerID:(unsigned long long)arg1;
- (void)_setDisplayedActive:(bool)arg1;
- (void)_setDisplayedActive:(bool)arg1 animated:(bool)arg2;
- (void)_startTimerForActive:(bool)arg1 animated:(bool)arg2;
- (id)_timingFunctionForCutoutAnimation;
- (id)_tintView;
- (void)_updateCircleViewAnimated:(bool)arg1;
- (void)_updateGradientAnimated:(bool)arg1;
- (void)_updateViewsAnimated:(bool)arg1;
- (id)_vignetteView;
- (double)bottomContentInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (bool)isVisible;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setBottomContentInset:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;

@end
