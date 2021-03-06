/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessoryInfoDetailsItemProvider : HFItemProvider {
    HMAccessory * _accessory;
    NSMutableSet * _accessoryInfoDetailItems;
    bool  _hasProvidedItems;
    HMHome * _home;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) NSMutableSet *accessoryInfoDetailItems;
@property (nonatomic) bool hasProvidedItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

+ (id)_displayValueForCachedValue:(id)arg1 characteristicType:(id)arg2 accessoryInfoService:(id)arg3;
+ (id /* block */)accessoryInfoServiceDetailComparator;
+ (id)localizedStringForCharacteristic:(id)arg1;
+ (id)preferredCharacteristicOrderArray;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryInfoDetailItems;
- (bool)hasProvidedItems;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 accessory:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryInfoDetailItems:(id)arg1;
- (void)setHasProvidedItems:(bool)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
