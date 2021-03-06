/* made by EzioChiu.
 */

@protocol _UIFocusUpdateRequesting <NSObject>

@required

- (bool)allowsDeferral;
- (bool)allowsFocusRestoration;
- (bool)allowsFocusingCurrentItem;
- (UIFocusAnimationCoordinator *)animationCoordinator;
- (UIFocusSystem *)focusSystem;
- (_UIFocusInputDeviceInfo *)inputDeviceInfo;
- (bool)requiresEnvironmentValidation;
- (bool)requiresNextFocusedItem;
- (bool)shouldPerformHapticFeedback;
- (bool)shouldPlayFocusSound;

@end
