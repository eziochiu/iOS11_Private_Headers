/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleViewController : UIViewController <NUDynamicTypeObserving, NUEndOfArticleDataProviderDelegate, NULoadable, SXAnalyticsReporting, SXLinkActionHandlerDelegate, SXScrollViewControllerDelegate> {
    <NUURLHandler> * _URLHandler;
    NUArticleAdManager * _adManager;
    <SXAnalyticsReporting> * _analyticsReporting;
    NSString * _anchorFragment;
    <NUArticleDataProvider> * _articleDataProvider;
    bool  _articleIsPresentingFullscreen;
    FCObservable * _articleViewStyler;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <NUDynamicTypeProviding> * _dynamicTypeProviding;
    <NUEndOfArticleDataProvider> * _endOfArticleDataProvider;
    NUEventManager * _eventManager;
    <NUScrollViewKeyCommandHandler> * _keyCommandHandler;
    <NULinkPreviewing> * _linkPreviewing;
    <NULoadingDelegate> * _loadingDelegate;
    NUMultiDelegate * _multiScrollViewDelegate;
    SXScrollViewController * _scrollViewController;
    SXVideoPlayerViewControllerManager * _videoPlayerViewControllerManager;
}

@property (nonatomic) <NUURLHandler> *URLHandler;
@property (nonatomic, readonly) NUArticleAdManager *adManager;
@property (nonatomic) <SXAnalyticsReporting> *analyticsReporting;
@property (nonatomic, copy) NSString *anchorFragment;
@property (nonatomic, readonly) <NUArticleDataProvider> *articleDataProvider;
@property (nonatomic) bool articleIsPresentingFullscreen;
@property (nonatomic, readonly) FCObservable *articleViewStyler;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDynamicTypeProviding> *dynamicTypeProviding;
@property (nonatomic, readonly) <NUEndOfArticleDataProvider> *endOfArticleDataProvider;
@property (nonatomic, readonly) NUEventManager *eventManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUScrollViewKeyCommandHandler> *keyCommandHandler;
@property (nonatomic) <NULinkPreviewing> *linkPreviewing;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (nonatomic, readonly) NUMultiDelegate *multiScrollViewDelegate;
@property (nonatomic, readonly) SXScrollViewController *scrollViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;

- (void).cxx_destruct;
- (id)URLHandler;
- (id)adManager;
- (id)analyticsReporting;
- (id)anchorFragment;
- (id)articleDataProvider;
- (bool)articleIsPresentingFullscreen;
- (id)articleViewStyler;
- (bool)canBecomeFirstResponder;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)currentEndOfArticleSettings;
- (id)currentPresentationAttributes;
- (void)dynamicTypeDidChange:(id)arg1;
- (id)dynamicTypeProviding;
- (id)endOfArticleDataProvider;
- (void)endOfArticleDataProviderDidChangeContent:(id)arg1;
- (void)endOfArticleDataProviderDidLoadContent:(id)arg1;
- (id)eventManager;
- (void)handleScrollKeyCommand:(id)arg1;
- (id)initWithArticleDataProvider:(id)arg1 endOfArticleDataProvider:(id)arg2 articleAdManager:(id)arg3 dynamicTypeProviding:(id)arg4 linkPreviewing:(id)arg5 appStateMonitor:(id)arg6 keyCommandHandler:(id)arg7;
- (id)keyCommandHandler;
- (bool)linkActionHandler:(id)arg1 allowOpeningOfURLInSafari:(id)arg2;
- (id)linkActionHandler:(id)arg1 presentableURLForURL:(id)arg2;
- (void)linkActionHandlerWantsToOpenInAppURL:(id)arg1;
- (id)linkPreviewing;
- (id)loadingDelegate;
- (id)multiScrollViewDelegate;
- (double)navigationBarHeightForScrollViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)reportEvent:(id)arg1;
- (void)restoreScrollPositionIfNeeded;
- (void)scrollToTopAnimated:(bool)arg1;
- (id)scrollViewController;
- (void)scrollViewController:(id)arg1 commitPreviewController:(id)arg2 forAction:(id)arg3;
- (void)scrollViewController:(id)arg1 enableNavigation:(bool)arg2;
- (id)scrollViewController:(id)arg1 previewViewControllerForAction:(id)arg2;
- (void)scrollViewController:(id)arg1 triggerAction:(id)arg2;
- (void)scrollViewControllerDidLayoutContent:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerDismissFullscreen:(id)arg1;
- (void)scrollViewControllerRequestsFullscreen:(id)arg1;
- (void)setAnalyticsReporting:(id)arg1;
- (void)setAnchorFragment:(id)arg1;
- (void)setArticleIsPresentingFullscreen:(bool)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLinkPreviewing:(id)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)setURLHandler:(id)arg1;
- (void)setVideoPlayerViewControllerManager:(id)arg1;
- (double)toolBarHeightForScrollViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePresentationAttributes;
- (id)videoPlayerViewControllerManager;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
