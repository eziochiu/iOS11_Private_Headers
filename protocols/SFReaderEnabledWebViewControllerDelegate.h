/* made by EzioChiu.
 */

@protocol SFReaderEnabledWebViewControllerDelegate <SFWebViewControllerDelegate>

@required

- (void)webViewController:(SFWebViewController *)arg1 didClickLinkInReaderWithRequest:(NSURLRequest *)arg2;
- (void)webViewControllerDidDetermineReaderAvailability:(SFWebViewController *)arg1 dueToSameDocumentNavigation:(bool)arg2;

@end
