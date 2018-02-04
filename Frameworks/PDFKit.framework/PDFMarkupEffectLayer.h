/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFMarkupEffectLayer : CALayer {
    PDFMarkupEffectLayerPrivate * _private;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithGeometryFlipped:(bool)arg1;
- (void)setDisplayBox:(long long)arg1;
- (void)setPage:(id)arg1;
- (void)setQuadrilateralPoints:(id)arg1 forMarkupType:(long long)arg2 forAnnotationBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withColor:(struct CGColor { }*)arg4;
- (void)updateRotation;

@end
