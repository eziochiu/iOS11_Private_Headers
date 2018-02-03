/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIReflectingView : UIView {
    UIView * _containerView;
    UIView * _gradientView;
    double  _reflectionAlpha;
}

@property (nonatomic, readonly, retain) UIView *containerView;
@property (nonatomic) double reflectionAlpha;
@property (nonatomic) double reflectionFraction;

- (void).cxx_destruct;
- (id)_gradientLayer;
- (void)_updateGradientColors;
- (id)containerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)reflectionAlpha;
- (double)reflectionFraction;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setReflectionAlpha:(double)arg1;
- (void)setReflectionFraction:(double)arg1;

@end