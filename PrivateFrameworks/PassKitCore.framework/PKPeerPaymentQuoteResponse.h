/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentQuoteResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentQuote * _quote;
}

@property (nonatomic, readonly) PKPeerPaymentQuote *quote;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)quote;

@end
