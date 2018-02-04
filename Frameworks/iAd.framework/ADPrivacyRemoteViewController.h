/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrivacyRemoteViewController : _UIRemoteViewController {
    <ADPrivacyRemoteViewControllerDelegate> * _delegate;
}

@property (nonatomic) <ADPrivacyRemoteViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_handleError:(id)arg1;
- (void)_remote_adSheetDidTerminate;
- (void)_remote_dismissPrivacyViewController;
- (void)_remote_privacyViewControllerDidAppear;
- (void)_remote_privacyViewControllerDidLinkOut;
- (void)_remote_privacyViewControllerDidRenderTransparency;
- (void)_remote_viewControllerDidLoad;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
