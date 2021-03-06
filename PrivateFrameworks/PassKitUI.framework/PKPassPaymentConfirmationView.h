/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate> {
    NSObject<OS_dispatch_source> * _activityResolutionTimer;
    bool  _animated;
    bool  _animatingResolution;
    <NSObject> * _expressExitObserver;
    PKExpressTransactionState * _expressState;
    <NSObject> * _expressTransactionEndedObserver;
    <NSObject> * _expressTransactionStartedObserver;
    <NSObject> * _expressTransactionTimeoutObserver;
    bool  _needsResolution;
    PKPassPaymentPayStateView * _payStateView;
    PKPaymentService * _paymentService;
    bool  _receivedExit;
    bool  _receivedTransaction;
    bool  _showingResolution;
    PKFooterTransactionView * _transactionView;
    NSDate * _visibleDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleExpressNotification:(id)arg1;
- (bool)_isExpressOutstanding;
- (bool)_isRegisteredForAllExpressTransactionNotifications;
- (bool)_isRegisteredForAnyExpressTransactionNotifications;
- (void)_presentCheckmarkIfNecessary;
- (void)_registerForExpressTransactionNotifications:(bool)arg1;
- (void)_resolveActivityIfNecessary;
- (void)_updateContentViewsWithFelicaProperties:(id)arg1;
- (void)_updateContentViewsWithTransaction:(id)arg1;
- (void)_updateContentViewsWithTransaction:(id)arg1 felicaProperties:(id)arg2;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)didBecomeVisibleAnimated:(bool)arg1;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2 context:(id)arg3;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (void)payStateView:(id)arg1 revealingCheckmark:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end
