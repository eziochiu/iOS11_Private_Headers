/* made by EzioChiu.
 */

@protocol ADPrivacyViewControllerInternalDelegate <ADPrivacyViewControllerDelegate>

@optional

- (void)adPrivacyViewControllerDidAppear:(ADPrivacyViewController *)arg1;
- (void)adPrivacyViewControllerDidLinkOut:(ADPrivacyViewController *)arg1;
- (void)adPrivacyViewControllerDidRenderTransparency:(ADPrivacyViewController *)arg1;

@end
