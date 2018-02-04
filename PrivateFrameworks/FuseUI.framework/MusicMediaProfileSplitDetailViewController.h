/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProfileSplitDetailViewController : UIViewController <MusicClientContextConsuming, MusicMediaDetailSplitViewController, MusicVerticalScrollingContainerViewControllerDelegate> {
    MusicClientContext * _clientContext;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    <MusicMediaDetailSplitViewControllerDelegate> * _mediaSplitViewControllerDelegate;
    UIViewController * _relatedContentViewController;
    MusicVerticalScrollingContainerViewController * _verticalScrollingContainerViewController;
}

@property (nonatomic, retain) MusicClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic) <MusicMediaDetailSplitViewControllerDelegate> *mediaSplitViewControllerDelegate;
@property (nonatomic, retain) UIViewController *relatedContentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyTintInformation;
- (void)_reloadVerticalScrollingContainerItems;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)clientContext;
- (id)contentScrollView;
- (void)dealloc;
- (id)mediaDetailTintInformation;
- (id)mediaSplitViewControllerDelegate;
- (id)relatedContentViewController;
- (void)setClientContext:(id)arg1;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setMediaSplitViewControllerDelegate:(id)arg1;
- (void)setRelatedContentViewController:(id)arg1;
- (void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end