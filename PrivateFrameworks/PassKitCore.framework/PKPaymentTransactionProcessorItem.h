/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionProcessorItem : NSObject {
    NSString * _passUniqueIdentifier;
    PKPaymentApplication * _paymentApplication;
    PKPaymentTransaction * _paymentTransaction;
}

@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKPaymentTransaction *paymentTransaction;

- (void).cxx_destruct;
- (id)passUniqueIdentifier;
- (id)paymentApplication;
- (id)paymentTransaction;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setPaymentTransaction:(id)arg1;

@end
