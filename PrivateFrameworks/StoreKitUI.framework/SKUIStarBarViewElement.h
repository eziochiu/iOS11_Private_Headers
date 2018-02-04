/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStarBarViewElement : SKUIViewElement {
    long long  _numberOfRatings;
    long long  _numberOfStars;
    float  _value;
}

@property (nonatomic, readonly) long long numberOfRatings;
@property (nonatomic, readonly) long long numberOfStars;
@property (nonatomic, readonly) float value;

- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)numberOfRatings;
- (long long)numberOfStars;
- (float)value;

@end