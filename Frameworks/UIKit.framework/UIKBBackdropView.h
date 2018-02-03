/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBBackdropView : _UIBackdropView {
    UIImage * _imageForCorners;
    NSMutableArray * _secondaryBackdrops;
}

@property (nonatomic, readonly) bool _hasUpdatedFrame;
@property (nonatomic, retain) UIImage *imageForCorners;

- (void)_applyCornerRadiusToSubviews;
- (id)_generateCornerContentsImage:(int)arg1;
- (bool)_hasUpdatedFrame;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (id)imageForCorners;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2 primaryBackdrop:(bool)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageForCorners:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCorners:(int)arg2;
- (void)willCallRenderInContextOnBackdropViewLayer;

@end
