/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXGradientFillView : SXFillView {
    SXClippingLayer * _clippingLayer;
    NSArray * _colors;
    SXGradientFill * _gradientFill;
    NSArray * _locations;
}

@property (nonatomic, retain) SXClippingLayer *clippingLayer;
@property (nonatomic, readonly) NSArray *colors;
@property (nonatomic, readonly) SXGradientFill *gradientFill;
@property (nonatomic, readonly) NSArray *locations;

- (void).cxx_destruct;
- (id)clippingLayer;
- (id)colors;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fillFrameWithBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)gradientFill;
- (id)initWithGradientFill:(id)arg1;
- (void)layoutSubviews;
- (id)locations;
- (void)setClippingLayer:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setupGradientLayer;

@end
