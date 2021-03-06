/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentLocalPassCredential : PKPaymentCredential {
    NSString * _passTypeIdentifier;
    PKPaymentPass * _paymentPass;
    NSString * _serialNumber;
}

@property (nonatomic, copy) NSString *passTypeIdentifier;
@property (nonatomic, readonly, copy) PKPaymentPass *paymentPass;
@property (nonatomic, copy) NSString *serialNumber;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPaymentPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passTypeIdentifier;
- (id)paymentPass;
- (id)serialNumber;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
