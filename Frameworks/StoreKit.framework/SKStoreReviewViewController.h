/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStoreReviewViewController : UIViewController {
    _UIAsyncInvocation * _cancelRequest;
    SKRemoteReviewViewController * _remoteViewController;
    NSString * _reviewRequestToken;
    SKInvocationQueueProxy<SKUIServiceReviewViewController> * _serviceProxy;
}

@property (nonatomic, retain) _UIAsyncInvocation *cancelRequest;
@property (nonatomic, retain) SKRemoteReviewViewController *remoteViewController;
@property (nonatomic, retain) NSString *reviewRequestToken;
@property (nonatomic, retain) SKInvocationQueueProxy<SKUIServiceReviewViewController> *serviceProxy;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_didFinishWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_viewTapped:(id)arg1;
- (id)cancelRequest;
- (void)dealloc;
- (id)initWithReviewRequestToken:(id)arg1;
- (id)remoteViewController;
- (id)reviewRequestToken;
- (id)serviceProxy;
- (void)setCancelRequest:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setReviewRequestToken:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
