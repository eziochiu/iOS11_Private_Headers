/* made by EzioChiu.
 */

@protocol CCUIControlCenterObserver <NSObject>

@required

- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillPresent;

@optional

- (void)controlCenterWillFinishTransitionOpen:(bool)arg1 withDuration:(double)arg2;

@end
