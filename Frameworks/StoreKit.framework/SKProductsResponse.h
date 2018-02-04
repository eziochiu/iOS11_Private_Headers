/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductsResponse : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) NSArray *invalidProductIdentifiers;
@property (nonatomic, readonly) NSArray *products;

- (void)_setInvalidIdentifiers:(id)arg1;
- (void)_setProducts:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)invalidProductIdentifiers;
- (id)products;

@end
