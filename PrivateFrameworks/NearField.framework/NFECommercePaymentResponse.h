/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFECommercePaymentResponse : NSObject <NSSecureCoding> {
    NSDictionary * _certs;
    NSData * _confirmationBlobHash;
    NSData * _confirmationBlobSignature;
    NSData * _transactionData;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly) NSDictionary *certs;
@property (nonatomic, readonly) NSData *confirmationBlobHash;
@property (nonatomic, readonly) NSData *confirmationBlobSignature;
@property (nonatomic, readonly) NSData *transactionData;
@property (nonatomic, readonly) NSString *transactionIdentifier;

+ (bool)supportsSecureCoding;

- (id)certs;
- (id)confirmationBlobHash;
- (id)confirmationBlobSignature;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setCerts:(id)arg1;
- (void)setConfirmationBlobHash:(id)arg1 withSignature:(id)arg2;
- (id)transactionData;
- (id)transactionIdentifier;

@end