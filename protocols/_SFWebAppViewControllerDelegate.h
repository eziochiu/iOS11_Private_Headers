/* made by EzioChiu.
 */

@protocol _SFWebAppViewControllerDelegate <NSObject>

@required

- (void)webAppViewController:(_SFWebAppViewController *)arg1 didChangeLoadingState:(bool)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(_SFWebAppViewController *)arg1;

@end
