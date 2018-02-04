/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPDFItemViewController : QLMarkupItemViewController <QLPrintingProtocol> {
    QLPrintSession * _currentPrintSession;
    bool  _isFullScreen;
}

+ (bool)providesCustomPrinter;
+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)_setupPrintSessionWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updatePeekSize;
- (void)_updateThumbnailView;
- (void)_updateThumbnailViewWithTraitCollection:(id)arg1;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (bool)canSwipeToDismiss;
- (bool)controller:(id)arg1 shouldOpenLinkAtURL:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customSketchOverlayInsets;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)numberOfPagesWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (id)printer;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;
- (id)transitioningView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end