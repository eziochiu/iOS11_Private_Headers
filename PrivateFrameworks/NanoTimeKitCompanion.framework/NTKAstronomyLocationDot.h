/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyLocationDot : UIView {
    bool  _animating;
    UIColor * _innerDotColor;
    double  _innerDotDiameter;
    UIView * _innerDotImageView;
    UIView * _outerDot;
    UIColor * _outerDotColor;
    double  _outerDotDiameter;
    double  _pulseAlphaDelay;
    double  _pulseDuration;
}

@property (nonatomic) bool animating;
@property (nonatomic, retain) UIColor *innerDotColor;
@property (nonatomic) double innerDotDiameter;
@property (nonatomic, retain) UIView *innerDotImageView;
@property (nonatomic, retain) UIView *outerDot;
@property (nonatomic, retain) UIColor *outerDotColor;
@property (nonatomic) double outerDotDiameter;
@property (nonatomic) double pulseAlphaDelay;
@property (nonatomic) double pulseDuration;

+ (struct CGSize { double x1; double x2; })defaultSize;

- (void).cxx_destruct;
- (bool)animating;
- (id)defaultColor;
- (double)defaultInnerDotDiameter;
- (double)defaultOuterDotDiameter;
- (double)defaultPulseAlphaDelay;
- (double)defaultPulseDuration;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerDotColor;
- (double)innerDotDiameter;
- (id)innerDotImageView;
- (void)layoutSubviews;
- (id)makeDot;
- (id)outerDot;
- (id)outerDotColor;
- (double)outerDotDiameter;
- (double)pulseAlphaDelay;
- (double)pulseDuration;
- (void)setAnimating:(bool)arg1;
- (void)setInnerDotColor:(id)arg1;
- (void)setInnerDotDiameter:(double)arg1;
- (void)setInnerDotImageView:(id)arg1;
- (void)setOuterDot:(id)arg1;
- (void)setOuterDotColor:(id)arg1;
- (void)setOuterDotDiameter:(double)arg1;
- (void)setPulseAlphaDelay:(double)arg1;
- (void)setPulseDuration:(double)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
