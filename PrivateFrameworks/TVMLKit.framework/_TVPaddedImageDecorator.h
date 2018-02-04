/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPaddedImageDecorator : TVImageScaleDecorator {
    UIColor * _backgroundColor;
    NSString * _decoratorIdentifier;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
}

@property (nonatomic, readonly, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize { double x1; double x2; })arg2 croppedToFit:(bool)arg3;
- (id)decoratorIdentifier;
- (struct CGSize { double x1; double x2; })expectedSize;
- (id)initWithPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 backgroundColor:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;

@end
