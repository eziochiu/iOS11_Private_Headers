/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusPromiseRegion : _UIFocusRegion {
    <_UIFocusRegionContainer> * _contentFocusRegionContainer;
    id /* block */  _contentFulfillmentHandler;
}

@property (nonatomic, copy) id /* block */ contentFulfillmentHandler;

- (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned long long)_focusableBoundaries;
- (id)_loadContentFocusRegionContainer;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (bool)_shouldCropRegionToSearchArea;
- (bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (id)_visualRepresentationColor;
- (long long)_visualRepresentationPatternType;
- (id /* block */)contentFulfillmentHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContentFulfillmentHandler:(id /* block */)arg1;

@end
