/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIrisButton : UIButton <CAMAccessibilityHUDImageProvider> {
    NSArray * __enablingAnimationImages;
    UIImageView * __padBackgroundView;
    long long  _irisMode;
    long long  _layoutStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (setter=_setEnablingAnimationImages:, nonatomic, copy) NSArray *_enablingAnimationImages;
@property (nonatomic, readonly) UIImageView *_padBackgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long irisMode;
@property (nonatomic) long long layoutStyle;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

+ (double)enablingAnimationDuration;
+ (id)irisButtonWithLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_actuallyLoadEnablingAnimationImagesForScale:(double)arg1;
- (id)_baseImageForMode:(long long)arg1;
- (void)_commonCAMIrisButtonConfiguration;
- (id)_enablingAnimationImages;
- (void)_ensureEnablingAnimationImages;
- (id)_padBackgroundView;
- (void)_setEnablingAnimationImages:(id)arg1;
- (bool)_shouldLoadEnablingAnimationImages;
- (void)_updateBaseImage;
- (void)_updateForLayoutStyle;
- (void)_updateTintColorForMode:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)imageForAccessibilityHUD;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interruptEnablingAnimation;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)irisMode;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (void)performEnablingAnimation;
- (void)preloadEnablingAnimation;
- (void)setHighlighted:(bool)arg1;
- (void)setIrisMode:(long long)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

@end