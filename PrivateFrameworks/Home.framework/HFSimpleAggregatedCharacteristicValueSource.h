/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource> {
    NSDictionary * _characteristicsByType;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly, copy) NSSet *characteristics;
@property (nonatomic, readonly) NSDictionary *characteristicsByType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)characteristics;
- (id)characteristicsByType;
- (void)commitTransactionWithReason:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithValueSource:(id)arg1 characteristics:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)valueSource;
- (id)writeValuesForCharacteristicTypes:(id)arg1;

@end
