/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse {
    NSData * _rewrappedPaymentData;
}

@property (nonatomic, copy) NSData *rewrappedPaymentData;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)rewrappedPaymentData;
- (void)setRewrappedPaymentData:(id)arg1;

@end