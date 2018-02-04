/* made by EzioChiu.
 */

@protocol ADPrivacyRemoteViewControllerDelegate <NSObject>

@required

- (void)adPrivacyRemoteViewControllerDidTerminateWithError:(NSError *)arg1;

@optional

- (void)adPrivacyRemoteViewControllerClientRequestsDismisal;
- (void)adPrivacyRemoteViewControllerDidAppear;
- (void)adPrivacyRemoteViewControllerDidLinkOut;
- (void)adPrivacyRemoteViewControllerDidLoad;
- (void)adPrivacyRemoteViewControllerDidRenderTransparency;

@end
