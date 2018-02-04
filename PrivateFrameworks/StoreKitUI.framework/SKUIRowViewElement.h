/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRowViewElement : SKUIViewElement {
    NSString * _type;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)columns;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;
- (id)type;

@end