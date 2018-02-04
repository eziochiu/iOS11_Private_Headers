/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest {
    NSString * _purchaseIdentifier;
    NSString * _purchaseState;
    NSString * _serviceProviderIdentifier;
}

@property (nonatomic, copy) NSString *purchaseIdentifier;
@property (nonatomic, copy) NSString *purchaseState;
@property (nonatomic, copy) NSString *serviceProviderIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)initWithPurchaseIdentifier:(id)arg1;
- (id)initWithPurchaseIdentifier:(id)arg1 purchaseState:(id)arg2 serviceProviderIdentifier:(id)arg3;
- (id)purchaseIdentifier;
- (id)purchaseState;
- (id)serviceProviderIdentifier;
- (void)setPurchaseIdentifier:(id)arg1;
- (void)setPurchaseState:(id)arg1;
- (void)setServiceProviderIdentifier:(id)arg1;

@end
