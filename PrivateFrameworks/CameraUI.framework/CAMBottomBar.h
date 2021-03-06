/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBottomBar : UIView <CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider, CAMExpandableMenuButtonDelegate> {
    CAMHDRButton * _HDRButton;
    CAMExpandableMenuButton * __expandedMenuButton;
    long long  _backgroundStyle;
    UIView * _backgroundView;
    CAMFlashButton * _flashButton;
    CAMFlipButton * _flipButton;
    CAMImageWell * _imageWell;
    CAMIrisButton * _irisButton;
    long long  _layoutStyle;
    CAMModeDial * _modeDial;
    UIButton * _reviewButton;
    CUShutterButton * _shutterButton;
    CUShutterButton * _stillDuringVideoButton;
    CAMTimerButton * _timerButton;
    CAMUtilityBar * _utilityBar;
    double  _utilityBarExtensionAboveTopEdge;
}

@property (nonatomic, retain) CAMHDRButton *HDRButton;
@property (setter=_setExpandedMenuButton:, nonatomic, retain) CAMExpandableMenuButton *_expandedMenuButton;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAMFlashButton *flashButton;
@property (nonatomic, retain) CAMFlipButton *flipButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAMImageWell *imageWell;
@property (nonatomic, retain) CAMIrisButton *irisButton;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, retain) CAMModeDial *modeDial;
@property (nonatomic, retain) UIButton *reviewButton;
@property (nonatomic, retain) CUShutterButton *shutterButton;
@property (nonatomic, retain) CUShutterButton *stillDuringVideoButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMTimerButton *timerButton;
@property (nonatomic, retain) CAMUtilityBar *utilityBar;
@property (nonatomic) double utilityBarExtensionAboveTopEdge;

+ (bool)wantsVerticalBarForLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)HDRButton;
- (void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(long long)arg1;
- (id)_currentMenuButtons;
- (void)_ensureSubviewOrdering;
- (id)_expandedMenuButton;
- (void)_iterateViewsInHUDManager:(id)arg1 forHUDItem:(id /* block */)arg2;
- (void)_layoutFlipButtonForLayoutStyle:(long long)arg1;
- (void)_layoutImageWellForLayoutStyle:(long long)arg1;
- (void)_layoutMenuButtons:(id)arg1 apply:(bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (void)_layoutModeDialForLayoutStyle:(long long)arg1;
- (void)_layoutReviewButtonForLayoutStyle:(long long)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(long long)arg1;
- (void)_layoutStillDuringVideoButtonForLayoutStyle:(long long)arg1;
- (void)_layoutUtilityBarForLayoutStyle:(long long)arg1;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_updateFlipButtonTappableEdgeInsets;
- (void)_updateImageWellTappableEdgeInsets;
- (long long)backgroundStyle;
- (id)backgroundView;
- (void)collapseMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (void)expandMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)flashButton;
- (id)flipButton;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageWell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (id)irisButton;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)modeDial;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)reviewButton;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setFlashButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setImageWell:(id)arg1;
- (void)setIrisButton:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setModeDial:(id)arg1;
- (void)setReviewButton:(id)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setStillDuringVideoButton:(id)arg1;
- (void)setTimerButton:(id)arg1;
- (void)setUtilityBar:(id)arg1;
- (void)setUtilityBarExtensionAboveTopEdge:(double)arg1;
- (id)shutterButton;
- (id)stillDuringVideoButton;
- (id)timerButton;
- (id)touchingRecognizersToCancel;
- (id)utilityBar;
- (double)utilityBarExtensionAboveTopEdge;

@end
