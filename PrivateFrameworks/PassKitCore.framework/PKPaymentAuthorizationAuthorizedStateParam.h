/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam {
    PKAuthorizedPeerPaymentQuote * _authorizedPeerPaymentQuote;
    PKPayment * _payment;
    PKPaymentToken * _paymentToken;
    PKServiceProviderPurchase * _purchase;
    NSString * _purchaseTransactionIdentifier;
}

@property (nonatomic, readonly) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote;
@property (nonatomic, retain) PKPayment *payment;
@property (nonatomic, retain) PKPaymentToken *paymentToken;
@property (nonatomic, retain) PKServiceProviderPurchase *purchase;
@property (nonatomic, copy) NSString *purchaseTransactionIdentifier;

+ (id)paramWithAuthorizedPeerPaymentQuote:(id)arg1;
+ (id)paramWithPayment:(id)arg1;
+ (id)paramWithPaymentToken:(id)arg1;
+ (id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)authorizedPeerPaymentQuote;
- (id)description;
- (id)payment;
- (id)paymentToken;
- (id)purchase;
- (id)purchaseTransactionIdentifier;
- (void)setPayment:(id)arg1;
- (void)setPaymentToken:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setPurchaseTransactionIdentifier:(id)arg1;

@end