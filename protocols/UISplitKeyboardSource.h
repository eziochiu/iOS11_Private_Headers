/* made by EzioChiu.
 */

@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource, UIInputViewSetPlacementOwner>

@required

- (UIViewController *)_inputViewController;
- (<UIInputViewSetPlacementApplicator> *)applicator;
- (UIInputViewSetNotificationInfo *)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (bool)isChangingPlacement;
- (UIInputViewSetPlacement *)placement;
- (struct CGPoint { double x1; double x2; })positionConstraintConstant;
- (void)setInterfaceAutorotationDisabled:(bool)arg1;
- (UIView *)view;

@end