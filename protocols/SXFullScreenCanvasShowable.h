/* made by EzioChiu.
 */

@protocol SXFullScreenCanvasShowable <NSObject>

@required

- (UIView *)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 canvasViewForShowable:(id <SXFullScreenCanvasShowable>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 fullScreenFrameForShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (unsigned long long)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 numberOfViewsForShowable:(id <SXFullScreenCanvasShowable>)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 originalFrameForShowable:(id <SXFullScreenCanvasShowable>)arg2 onCanvasView:(UIView *)arg3 viewIndex:(unsigned long long)arg4;
- (SXImageView *)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 originalViewForShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 shouldAddGestureView:(UIView *)arg2 forShowable:(id <SXFullScreenCanvasShowable>)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 viewIndexForPoint:(struct CGPoint { double x1; double x2; })arg2 inShowable:(id <SXFullScreenCanvasShowable>)arg3;
- (bool)requestInteractivityFocusForFullScreenCanvasController:(SXFullScreenCanvasController *)arg1;

@optional

- (SXFullScreenCaption *)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 captionForShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 didHideShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 didShowShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 showable:(id <SXFullScreenCanvasShowable>)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 willHideShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(SXFullScreenCanvasController *)arg1 willShowShowable:(id <SXFullScreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;

@end
