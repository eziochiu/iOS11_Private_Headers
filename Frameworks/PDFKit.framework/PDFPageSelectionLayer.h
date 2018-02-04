/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageSelectionLayer : CALayer {
    PDFPageSelectionLayerPrivate * _private;
}

- (void).cxx_destruct;
- (id)_activeColor;
- (id)_createSelectionLollipop:(double)arg1 isLeftSide:(bool)arg2;
- (void)_generateRects;
- (void)_generateSelectionIsFirstPage:(bool)arg1 isLastPage:(bool)arg2;
- (id)_hashRectTransformPair:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGAffineTransform { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; double x_2_1_5; double x_2_1_6; } x2; }*)arg1;
- (id)_inactiveColor;
- (void)_updateGraphics;
- (void)_updateHandleGraphics;
- (void)clearTextSelectionHandles;
- (void)dealloc;
- (void)enableTextSelectionHandles;
- (id)init;
- (id)page;
- (id)selection;
- (void)setDisplayBox:(long long)arg1;
- (void)setPage:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)updateRotation;

@end
