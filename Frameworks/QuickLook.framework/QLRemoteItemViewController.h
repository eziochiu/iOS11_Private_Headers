/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol> {
    NSLayoutConstraint * _bottomConstraint;
    NSExtension * _extension;
    bool  _fullScreen;
    NSDictionary * _hostConfiguration;
    QLRemotePreviewHostContext * _hostContext;
    <QLPrintingProtocol> * _printer;
    QLRemotePreviewHostViewController * _remoteViewController;
    id  _request;
    NSLayoutConstraint * _topConstraint;
    bool  _visible;
}

+ (Class)transformerClass;

- (void).cxx_destruct;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (void)dealloc;
- (id)init;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)numberOfPagesWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (id)printer;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
