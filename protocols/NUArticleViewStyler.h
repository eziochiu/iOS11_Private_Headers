/* made by EzioChiu.
 */

@protocol NUArticleViewStyler

@required

- (long long)statusBarStyle;
- (void)styleTabBar:(UITabBar *)arg1;
- (void)styleToolbar:(UIToolbar *)arg1;
- (long long)topBackgroundStatusBarStyle;
- (void)unstyleTabBar:(UITabBar *)arg1;
- (void)unstyleToolbar:(UIToolbar *)arg1;

@end
