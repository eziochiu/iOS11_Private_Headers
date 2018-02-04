/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerEffect : CALayer {
    PDFPageLayerEffectPrivate * _private;
}

+ (struct CGColor { }*)_createLigtherColor:(struct CGColor { }*)arg1 withIntensity:(double)arg2;
+ (void)_updateColor:(id)arg1 forPopupAnnotation:(id)arg2 isSelected:(bool)arg3;
+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withLayer:(id)arg2;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFPopupLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFSearchSelectionLayerEffectsForSelection:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFSelectionLayerEffectsForSelection:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFWidgetLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;

- (void).cxx_destruct;
- (id)annotation;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithPDFPageLayer:(id)arg1;

@end
