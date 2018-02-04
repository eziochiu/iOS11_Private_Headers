/* made by EzioChiu.
 */

@protocol CKPhotoBrowserViewControllerSendDelegate <CKBrowserViewControllerSendDelegate>

@required

- (void)dismissEntryViewShelf;
- (void)showEntryViewShelf:(UIViewController<CKPluginEntryViewController> *)arg1;
- (void)showPhotosBrowser;
- (NSURL *)workingDirForDraft;

@end
