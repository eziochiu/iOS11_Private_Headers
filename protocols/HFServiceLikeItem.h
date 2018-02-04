/* made by EzioChiu.
 */

@protocol HFServiceLikeItem <HFControlItemVendor, HFHomeKitItemProtocol, HFServiceVendor, NSCopying>

@required

- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
- (<HFCharacteristicValueSource> *)valueSource;

@end
