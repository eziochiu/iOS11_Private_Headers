/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

@interface WebAppControllerWK2 : WebAppController <_SFWebAppViewControllerDelegate> {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    _SFWebAppViewController * _contentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setUpContentViewController:(id)arg1;
- (void)hideLoadingView;
- (id)initForWebClipURL:(id)arg1;
- (void)webAppViewController:(id)arg1 didChangeLoadingState:(bool)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(id)arg1;

@end
