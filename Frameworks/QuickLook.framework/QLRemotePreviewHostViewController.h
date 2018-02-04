/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLRemotePreviewHostViewController : _UIRemoteViewController {
    QLRemoteItemViewController * _remoteItemViewController;
}

@property QLRemoteItemViewController *remoteItemViewController;

- (void).cxx_destruct;
- (id)remoteItemViewController;
- (void)setRemoteItemViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
