/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWKSelectionView : UIWebSelectionView {
    UIWebSelectionHandle * _handle;
    UIView<UIWKInteractionViewProtocol> * _interactionView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchPoint;
    bool  _selectionIsBlock;
    bool  _thresholdIsValid;
    bool  _usingGesture;
}

- (void)blockSelectionChangedWithTouch:(long long)arg1 withFlags:(long long)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4;
- (void)clearSelection;
- (void)endSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fetchSelectionBoundingRect;
- (double)handleOffsetForPoint:(struct CGPoint { double x1; double x2; })arg1 handlePosition:(int)arg2;
- (id)initWithView:(id)arg1;
- (bool)isHorizontalWritingMode;
- (void)onAfterScrollOrZoomShowingSelection:(bool)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(bool)arg1;
- (void)resetSelection;
- (id)scroller;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundingRect;
- (void)selectionChanged;
- (void)selectionChangedWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionCreationEndedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectionCreationStartedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectionCreationUpdatedWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionRects;
- (void)setHandleCenters;
- (void)setSelectionMode:(bool)arg1;
- (bool)shouldContractForActiveHandle;
- (bool)shouldExpandForActiveHandle;
- (bool)shouldSwitchToBlockModeForHandle:(id)arg1;
- (void)showControls;
- (void)showCopyCalloutWithAnimation:(bool)arg1;
- (void)showRangeSelection;
- (void)startSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)switchToBlockModeForHandle:(id)arg1;
- (void)switchToTextModeForHandle:(id)arg1;
- (id)tintView;
- (void)touchChanged:(id)arg1 forHandle:(id)arg2;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredRect;
- (void)updateFrameAndHandlesWithAnimation:(bool)arg1;
- (void)updateRangedSelectionData:(id)arg1;
- (bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (void)updateSelectionCreationWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionRects;
- (void)updateTextRangeViewSelectionRects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end