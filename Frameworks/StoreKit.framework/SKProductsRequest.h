/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductsRequest : SKRequest {
    id  _productsRequestInternal;
}

@property (nonatomic) <SKProductsRequestDelegate> *delegate;

- (void)_handleReply:(id)arg1;
- (void)_sendXPCMessage;
- (void)dealloc;
- (id)init;
- (id)initWithProductIdentifiers:(id)arg1;

@end
