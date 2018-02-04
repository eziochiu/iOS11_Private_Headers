/* made by EzioChiu.
 */

@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching, NAIdentifiable, NSCopying>

@required

- (NSSet *)allCharacteristicsForCharacteristicType:(NSString *)arg1;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
- (HMCharacteristicMetadata *)metadataForCharacteristicType:(NSString *)arg1;
- (NAFuture *)readValuesForCharacteristicTypes:(NSSet *)arg1;
- (<HFCharacteristicValueSource> *)valueSource;
- (NAFuture *)writeValuesForCharacteristicTypes:(NSDictionary *)arg1;

@end
