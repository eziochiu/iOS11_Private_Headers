/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPageRep : TSDContainerRep <CALayerDelegate> {
    NSTimer * editingDidBeginTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSTimer *editingDidBeginTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)p_overflowKnobImage;

- (void).cxx_destruct;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)cleanUpTimer;
- (void)dealloc;
- (id)editingDidBeginTimer;
- (void)p_createHeaderFooterBorderLayerIfNecessaryForType:(int)arg1;
- (void)p_createHeaderFooterOverflowIndicatorLayerIfNecessaryForType:(int)arg1 fragment:(int)arg2;
- (bool)p_hasValidHeaderFooterForType:(int)arg1;
- (bool)p_headerFooterBorderVisibleForType:(int)arg1;
- (bool)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)p_hitRep:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (void)p_updateBorderLayers;
- (void)p_updateLayoutBordersVisibility;
- (void)setEditingDidBeginTimer:(id)arg1;
- (void)updateFromLayout;

@end
