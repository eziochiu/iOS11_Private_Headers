/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedComponentView : SXComponentView <SXViewportChangeListener, UIGestureRecognizerDelegate, UIScrollViewDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate> {
    NSString * _HTML;
    UIActivityIndicatorView * _activityIndicator;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentLayoutSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentViewportSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentlyLayoutingForSize;
    <SXEmbedType> * _embedDataSource;
    SXEmbedResource * _embedResource;
    UILabel * _errorLabel;
    NSMutableSet * _expectedMessages;
    bool  _failedLoading;
    WKNavigation * _initialNavigation;
    bool  _isCurrentlyLoadingEmbedData;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastKnownTouchPoint;
    NSString * _userScript;
    SXWebCrashRetryThrottler * _webCrashRetryThrottler;
    WKWebView * _webView;
    WKWebView * _webViewPresentingInFullscreen;
}

@property (nonatomic, retain) NSString *HTML;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) struct CGSize { double x1; double x2; } currentLayoutSize;
@property (nonatomic) struct CGSize { double x1; double x2; } currentViewportSize;
@property (nonatomic) struct CGSize { double x1; double x2; } currentlyLayoutingForSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SXEmbedType> *embedDataSource;
@property (nonatomic, retain) SXEmbedResource *embedResource;
@property (nonatomic, retain) UILabel *errorLabel;
@property (nonatomic, retain) NSMutableSet *expectedMessages;
@property (nonatomic) bool failedLoading;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WKNavigation *initialNavigation;
@property (nonatomic) bool isCurrentlyLoadingEmbedData;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastKnownTouchPoint;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *userScript;
@property (nonatomic, retain) SXWebCrashRetryThrottler *webCrashRetryThrottler;
@property (nonatomic, retain) WKWebView *webView;
@property (nonatomic, retain) WKWebView *webViewPresentingInFullscreen;

- (void).cxx_destruct;
- (id)HTML;
- (id)HTMLByEnclosingHTML:(id)arg1 withHTML:(id)arg2;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)activityIndicator;
- (bool)allowHierarchyRemoval;
- (struct CGSize { double x1; double x2; })currentLayoutSize;
- (struct CGSize { double x1; double x2; })currentViewportSize;
- (struct CGSize { double x1; double x2; })currentlyLayoutingForSize;
- (void)discardContents;
- (void)displayEmbedIfNeeded;
- (id)embedDataSource;
- (id)embedResource;
- (id)enclosingHTML;
- (id)errorLabel;
- (id)expectedMessages;
- (bool)failedLoading;
- (void)finalizeLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleError:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (bool)hasLoadedEmbedData;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;
- (id)initialNavigation;
- (double)initialScale;
- (bool)isCurrentlyLoadingEmbedData;
- (struct CGPoint { double x1; double x2; })lastKnownTouchPoint;
- (void)layoutWebViewForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)loadEmbedData;
- (void)loadEmbedIfNeeded;
- (void)loadWebViewIfNeeded;
- (void)presentComponent;
- (void)reloadEmbed;
- (void)renderContents;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setActivityIndicator:(id)arg1;
- (void)setCurrentLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentlyLayoutingForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEmbedDataSource:(id)arg1;
- (void)setEmbedResource:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setExpectedMessages:(id)arg1;
- (void)setFailedLoading:(bool)arg1;
- (void)setHTML:(id)arg1;
- (void)setInitialNavigation:(id)arg1;
- (void)setIsCurrentlyLoadingEmbedData:(bool)arg1;
- (void)setLastKnownTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUserScript:(id)arg1;
- (void)setWebCrashRetryThrottler:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)setWebViewPresentingInFullscreen:(id)arg1;
- (bool)shouldAllowRequestToURL:(id)arg1;
- (bool)shouldLayoutWebView;
- (bool)shouldShowWebView;
- (void)showActivityIndicator:(bool)arg1;
- (id)unableToLoadMessage;
- (unsigned long long)userActionMediaTypes;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)userScript;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)webCrashRetryThrottler;
- (id)webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)webViewPresentingInFullscreen;
- (void)willPresentComponent;

@end