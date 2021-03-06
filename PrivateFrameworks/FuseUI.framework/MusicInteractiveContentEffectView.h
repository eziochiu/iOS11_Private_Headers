/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicInteractiveContentEffectView : UIImageView {
    _UIBackdropViewSettings * _backdropSettings;
    CAFilter * _colorMatrixFilter;
    CAFilter * _colorSaturateFilter;
    CAFilter * _gaussianBlurFilter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputBounds;
    NSValue * _inputBoundsValue;
    double  _transitionProgress;
}

@property (nonatomic, retain) _UIBackdropViewSettings *backdropSettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputBounds;
@property (nonatomic) double transitionProgress;

- (void).cxx_destruct;
- (void)_applyTransitionProgress;
- (id)backdropSettings;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backdropSettings:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputBounds;
- (void)setBackdropSettings:(id)arg1;
- (void)setInputBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionProgress:(double)arg1;
- (double)transitionProgress;

@end
