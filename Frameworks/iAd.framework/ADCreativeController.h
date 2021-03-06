/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADCreativeController : NSObject <ADWebProcessDelegate, WKNavigationDelegate, _WKInputDelegate> {
    bool  _browserContextControllerDidLoad;
    bool  _contentVisible;
    NSString * _creativeIdentifier;
    ADWebView * _creativeView;
    <ADCreativeControllerDelegate> * _delegate;
    bool  _isExpandedCreativePresented;
    id /* block */  _loadCompletion;
    ADAdImpressionPublicAttributes * _publicAttributes;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    ADTapGestureTimer * _tapGestureTimer;
    <ADWebProcessProxy> * _webProcessProxy;
}

@property (nonatomic) bool browserContextControllerDidLoad;
@property (getter=isContentVisible, nonatomic) bool contentVisible;
@property (nonatomic, copy) NSString *creativeIdentifier;
@property (nonatomic, readonly) ADWebView *creativeView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADCreativeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExpandedCreativePresented;
@property (nonatomic, copy) id /* block */ loadCompletion;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *publicAttributes;
@property (nonatomic, retain) _WKRemoteObjectInterface *remoteObjectInterface;
@property (readonly) Class superclass;
@property (nonatomic, retain) ADTapGestureTimer *tapGestureTimer;

- (void)_callLoadCompletionWithError:(id)arg1;
- (id)_customUserAgentString;
- (id)_incrementCreativeIdentifier;
- (void)_requestOpenURL:(id)arg1;
- (void)_updateWebProcessProxyVisibility;
- (id)_userAgentForUserAgentString:(id)arg1;
- (bool)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2;
- (void)adSpaceActionViewControllerWillDismiss:(id)arg1;
- (void)adSpaceActionViewControllerWillPresent:(id)arg1;
- (bool)browserContextControllerDidLoad;
- (bool)contentVisible;
- (id)creativeIdentifier;
- (id)creativeView;
- (void)dealloc;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCreativeView;
- (bool)isContentVisible;
- (bool)isExpandedCreativePresented;
- (void)loadAdImpression:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)loadCompletion;
- (id)publicAttributes;
- (id)remoteObjectInterface;
- (void)setBrowserContextControllerDidLoad:(bool)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)setCreativeIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsExpandedCreativePresented:(bool)arg1;
- (void)setLoadCompletion:(id /* block */)arg1;
- (void)setPublicAttributes:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setTapGestureTimer:(id)arg1;
- (id)tapGestureTimer;
- (void)unregisterExportedObjectInterface;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumSize:(id)arg2;
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
