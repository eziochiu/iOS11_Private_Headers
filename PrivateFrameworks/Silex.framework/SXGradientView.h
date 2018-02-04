/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXGradientView : UIView

@property (nonatomic, copy) NSArray *colors;
@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, readonly) CAGradientLayer *layer;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;

+ (Class)layerClass;

- (id)colors;
- (struct CGPoint { double x1; double x2; })endPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColors:(id)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPoint;

@end
