/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayer : CALayer <PDFPageLayerInterface> {
    PDFPageLayerPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_forceTileUpdate;
- (bool)_hasTileWithFrameInLayer:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_hideTileLayer:(bool)arg1;
- (bool)_isTile:(id)arg1 occludedByTiles:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_layerEffectTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layerTileToRootViewBounds:(id)arg1;
- (void)_pageDidRotate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageLayerVisibleRect;
- (void)_printRectsArray:(id)arg1;
- (void)_releasePageLayerEffects;
- (void)_releaseTiles;
- (void)_renderingPropertyUpdate:(id)arg1;
- (void)_setEnablePageShadows:(bool)arg1;
- (id)_subtractRectB:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRectA:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_tileUpdateComplete;
- (void)_updateLayerEffectTransform;
- (void)_updateLayerEffectTransformForLayer:(id)arg1;
- (void)_updateTiles;
- (id)addPageLayerEffect:(id)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)clearTiles;
- (void)dealloc;
- (long long)displayBox;
- (bool)enablesTileUpdates;
- (void)forceTileUpdate;
- (id)getPageLayerEffectByUUID:(id)arg1;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
- (bool)isVisible;
- (void)layoutSublayers;
- (id)page;
- (id)pageLayerEffects;
- (void)removePageLayerEffect:(id)arg1;
- (void)removePageLayerEffectByUUID:(id)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setNeedsTilesUpdate;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)tileDrawingComplete:(id)arg1;
- (void)updatePageLayerEffect:(id)arg1;
- (unsigned long long)visibilityDelegateIndex;

@end
