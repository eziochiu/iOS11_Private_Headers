/* made by EzioChiu.
 */

@protocol PDFPageLayerInterface <NSObject>

@required

- (NSString *)addPageLayerEffect:(PDFPageLayerEffect *)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)clearTiles;
- (long long)displayBox;
- (bool)enablesTileUpdates;
- (void)forceTileUpdate;
- (PDFPageLayerEffect *)getPageLayerEffectByUUID:(NSString *)arg1;
- (id)initWithPage:(PDFPage *)arg1 geometryInterface:(NSObject<PDFPageLayerGeometryInterface> *)arg2 andRenderingProperties:(PDFRenderingProperties *)arg3;
- (bool)isVisible;
- (PDFPage *)page;
- (NSArray *)pageLayerEffects;
- (void)removePageLayerEffect:(PDFPageLayerEffect *)arg1;
- (void)removePageLayerEffectByUUID:(NSString *)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setNeedsTilesUpdate;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)updatePageLayerEffect:(PDFPageLayerEffect *)arg1;
- (unsigned long long)visibilityDelegateIndex;

@end
