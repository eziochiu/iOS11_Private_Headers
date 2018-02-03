/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView {
    _UIStatusBarCycleAnimation * _cycleAnimation;
}

@property (nonatomic, retain) _UIStatusBarCycleAnimation *cycleAnimation;

- (void).cxx_destruct;
- (double)_barCornerRadius;
- (double)_barThicknessAtIndex:(unsigned long long)arg1;
- (void)_colorsDidChange;
- (double)_interspace;
- (double)_totalWidth;
- (void)_updateActiveBars;
- (void)_updateBars;
- (void)_updateCycleAnimation;
- (void)_updateCycleAnimationVisibility;
- (void)_updateFromMode:(long long)arg1;
- (void)_visibilityDidChange;
- (id)accessibilityHUDRepresentation;
- (id)cycleAnimation;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setCycleAnimation:(id)arg1;

@end