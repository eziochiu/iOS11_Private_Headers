/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationController : SUNavigationController

- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)_configureNavigationBar:(id)arg1 withTintColor:(id)arg2 tintAdjustmentMode:(long long)arg3 titleTextTintColor:(id)arg4 shouldTintTitleText:(bool)arg5 accessibilityButtonBackgroundTintColor:(id)arg6;
- (void)_configureNavigationBarForViewController:(id)arg1 shouldIgnoreTransitionCoordinator:(bool)arg2;
- (void)_scheduleConfigurationOfNavigationBar;
- (void)_setNavigationPalette:(id)arg1 hidesPaletteShadow:(bool)arg2;
- (bool)_topViewControllerPrefersNavigationBarBackgroundViewHidden;
- (void)_viewControllerNeedsNavigationBarAppearanceUpdate:(id)arg1;
- (void)attachPalette:(id)arg1 isPinned:(bool)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)description;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;

@end