/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFRangeControlItem : HFControlItem {
    NSString * _maximumCharacteristicType;
    NSString * _minimumCharacteristicType;
    NSSet * _targetCharacteristicTypes;
}

@property (nonatomic, readonly, copy) NSString *maximumCharacteristicType;
@property (nonatomic, readonly, copy) NSNumber *maximumCharacteristicTypeStepValue;
@property (nonatomic, readonly, copy) NSNumber *maximumValue;
@property (nonatomic, readonly, copy) NSString *minimumCharacteristicType;
@property (nonatomic, readonly, copy) NSNumber *minimumCharacteristicTypeStepValue;
@property (nonatomic, readonly, copy) NSNumber *minimumValue;
@property (nonatomic, readonly, copy) NSNumber *stepValue;
@property (nonatomic, readonly, copy) NSSet *targetCharacteristicTypes;

+ (bool)_hasWritableCharacteristicsOfType:(id)arg1 valueSource:(id)arg2;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_maximumCharacteristicTypeMetadata;
- (id)_minimumCharacteristicTypeMetadata;
- (id)_targetCharacteristicTypeMetadataWithCharacteristicValuesKeyedByType:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 targetCharacteristicTypes:(id)arg2 minimumCharacteristicType:(id)arg3 maximumCharacteristicType:(id)arg4 displayResults:(id)arg5;
- (id)maximumCharacteristicType;
- (id)maximumCharacteristicTypeStepValue;
- (id)maximumValue;
- (id)minimumCharacteristicType;
- (id)minimumCharacteristicTypeStepValue;
- (id)minimumValue;
- (unsigned long long)rangeModeWithCharacteristicValuesKeyedByType:(id)arg1;
- (id)stepValue;
- (id)targetCharacteristicTypeWithCharacteristicValuesKeyedByType:(id)arg1;
- (id)targetCharacteristicTypes;
- (id)valueForCharacteristicValues:(id)arg1;

@end
