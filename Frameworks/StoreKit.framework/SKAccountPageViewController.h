/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKAccountPageViewController : UIViewController <SKUIRedeemCameraViewControllerDelegate> {
    NSURL * _accountURL;
    bool  _cameraDidShow;
    _UIAsyncInvocation * _cancelRequest;
    <SKAccountPageViewControllerDelegate> * _delegate;
    bool  _isRemoteViewControllerReady;
    id /* block */  _prepareBlock;
    SKRemoteAccountPageViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> * _serviceProxy;
    id /* block */  redeemCompletionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKAccountPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addRemoteView;
- (void)_didPrepareWithResult:(bool)arg1 error:(id)arg2;
- (void)_dismissViewControllerWithResult:(bool)arg1 error:(id)arg2;
- (void)_overrideCreditCardPresentationWithCompletion:(id /* block */)arg1;
- (void)_overrideRedeemCameraWithCompletion:(id /* block */)arg1;
- (void)_requestRemoteViewController;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccountURL:(id)arg1;
- (void)loadView;
- (void)overrideRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 completion:(id /* block */)arg3;
- (void)prepareWithCompletionBlock:(id /* block */)arg1;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end