/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceGroupItem : HFItem <HFCharacteristicWriteActionBuilderFactory, HFServiceLikeBuilderCreating, HFServiceLikeItem> {
    HMServiceGroup * _serviceGroup;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMServiceGroup *serviceGroup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2;
+ (bool)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;
+ (bool)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;

- (void).cxx_destruct;
- (id)_aggregatedValueSource;
- (double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_buildControlItemsForServiceItems:(id)arg1;
- (id)_buildServiceItems;
- (long long)_highestIntegerValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mergedIconDescriptorForServiceItems:(id)arg1;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(id /* block */)arg2;
- (id)_sortDescriptorsForServiceItems;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)accessories;
- (bool)actionsMayRequireDeviceUnlock;
- (id)allControlItems;
- (bool)containsActionableCharacteristics;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)description;
- (id)homeKitObject;
- (id)incrementalStateControlItem;
- (id)init;
- (id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2;
- (id)primaryStateControlItem;
- (id)serviceGroup;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (id)valueSource;

@end
