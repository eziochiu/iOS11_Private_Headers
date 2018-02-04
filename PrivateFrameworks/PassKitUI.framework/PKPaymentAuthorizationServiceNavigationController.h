/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationServiceNavigationController : PKBlurredNavigationController <UINavigationControllerDelegate> {
    PKPaymentAuthorizationServiceViewController * _authorizationViewController;
    PKPaymentAuthorizationLayout * _layout;
    <UIViewControllerTransitioningDelegate> * _paymentTransitioningDelegate;
}

@property (nonatomic, readonly) PKPaymentAuthorizationServiceViewController *authorizationViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIViewControllerTransitioningDelegate> *paymentTransitioningDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authorizationViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)paymentTransitioningDelegate;
- (void)setPaymentTransitioningDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
