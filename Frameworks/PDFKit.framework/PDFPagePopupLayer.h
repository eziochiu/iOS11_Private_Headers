/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPagePopupLayer : CALayer {
    PDFPagePopupLayerPrivate * _private;
}

- (void).cxx_destruct;
- (struct CGColor { }*)_createLigtherColor:(struct CGColor { }*)arg1 withIntensity:(double)arg2;
- (void)_updateColor:(id)arg1 forPopup:(id)arg2 isSelected:(bool)arg3;
- (void)addAnnotationPopup:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)page;
- (void)removeAnnotationPopup:(id)arg1;
- (void)removeAnnotationPopups;
- (void)setAnnotationPopup:(id)arg1 isSelected:(bool)arg2;
- (void)setDisplayBox:(long long)arg1;
- (void)setPage:(id)arg1;
- (void)updateAnnotationPopup:(id)arg1;
- (void)updateRotation;

@end
