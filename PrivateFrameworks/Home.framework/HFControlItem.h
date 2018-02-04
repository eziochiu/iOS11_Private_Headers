/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFControlItem : HFItem <NAIdentifiable, NSCopying> {
    NSSet * _characteristicTypes;
    NSDictionary * _displayResults;
    <HFAggregatedCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) NSSet *allCharacteristicTypes;
@property (nonatomic, readonly) NSSet *characteristicTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *displayResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFAggregatedCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)na_identity;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_standardResultsForResultValue:(id)arg1 characteristicValuesByType:(id)arg2;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)allCharacteristicTypes;
- (bool)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)characteristicTypes;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayResults;
- (unsigned long long)hash;
- (id)init;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)normalizedCharacteristicValuesForValues:(id)arg1;
- (id)normalizedValueForCharacteristicValue:(id)arg1 ofType:(id)arg2;
- (id)normalizedValueForValue:(id)arg1;
- (id)readOnlyCharacteristicTypes;
- (id)readValueAndPopulateStandardResults;
- (long long)sortPriority;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueSource;
- (id)writeValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)_hu_prioritizedControlControllers;
+ (id)_hu_quickControlControllerForControlItemWithPreferredPurposes:(unsigned long long)arg1 inControlItems:(id)arg2 valueSource:(id)arg3 home:(id)arg4;
+ (id)_hu_quickControlControllerOfClass:(Class)arg1 controlItem:(id)arg2 valueSource:(id)arg3 home:(id)arg4;
+ (id)hu_preferredQuickControlControllerGroupForControlItems:(id)arg1 valueSource:(id)arg2 home:(id)arg3;
+ (id)hu_preferredTogglableControlItemInControlItems:(id)arg1;

@end
