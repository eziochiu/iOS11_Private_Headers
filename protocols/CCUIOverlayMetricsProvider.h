/* made by EzioChiu.
 */

@protocol CCUIOverlayMetricsProvider <NSObject>

@required

- (bool)isReachabilityActive;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overlayAdditionalEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayContainerFrame;
- (struct CGSize { double x1; double x2; })overlayContentSize;
- (long long)overlayInterfaceOrientation;
- (CCUIStatusBarStyleSnapshot *)overlayStatusBarStyle;
- (double)reachabilityOffset;

@end
