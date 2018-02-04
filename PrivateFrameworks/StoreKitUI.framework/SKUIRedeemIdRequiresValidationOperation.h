/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate> {
    SKUIRedeemViewController * _redeemViewController;
    id /* block */  _resultBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SKUIRedeemViewController *redeemViewController;
@property (copy) id /* block */ resultBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (void)_logResultsForSuccess:(bool)arg1 shouldVerify:(bool)arg2 failureReason:(id)arg3 error:(id)arg4;
- (bool)_performAuthentication;
- (id)_subOperationWithBagKey:(id)arg1;
- (void)main;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (id)redeemViewController;
- (id /* block */)resultBlock;
- (void)setRedeemViewController:(id)arg1;
- (void)setResultBlock:(id /* block */)arg1;

@end