/* made by EzioChiu.
 */

@protocol PXMutableBarAppearance <NSObject>

@required

- (bool)prefersNavigationBarVisible;
- (bool)prefersStatusBarVisible;
- (bool)prefersTabBarVisible;
- (bool)prefersToolbarVisible;
- (void)setPrefersNavigationBarVisible:(bool)arg1;
- (void)setPrefersStatusBarVisible:(bool)arg1;
- (void)setPrefersTabBarVisible:(bool)arg1;
- (void)setPrefersToolbarVisible:(bool)arg1;

@end
