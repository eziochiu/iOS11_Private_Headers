/* made by EzioChiu.
 */

@protocol SXVideoControlItem <NSObject>

@required

- (double)autoAppearanceTimeInterval;
- (void)hide:(bool)arg1 withAnimationCoordinator:(id <SXVideoControlItemAnimating>)arg2;
- (bool)hideable;
- (bool)isVisible;

@end
