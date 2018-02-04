/* made by EzioChiu.
 */

@protocol ADPrivacyViewControllerDelegate <NSObject>

@optional

- (void)adPrivacyViewController:(ADPrivacyViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)adPrivacyViewControllerDidDismiss:(ADPrivacyViewController *)arg1;
- (void)adPrivacyViewControllerDidLoad:(ADPrivacyViewController *)arg1;

@end
