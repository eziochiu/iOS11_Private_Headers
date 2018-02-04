/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface _HFAccessorySettingsItemTuple : NSObject <NAIdentifiable> {
    HMAccessorySettingGroup * _accessoryGroup;
    HFAccessorySettingsEntity * _accessoryGroupEntity;
    HMAccessoryProfile<HFAccessorySettings> * _accessoryProfile;
    HMAccessorySetting * _accessorySetting;
    HMAccessorySelectionSettingItem * _optionItem;
    HFItem * _outputItem;
}

@property (nonatomic, readonly) HMAccessorySettingGroup *accessoryGroup;
@property (nonatomic, readonly) HFAccessorySettingsEntity *accessoryGroupEntity;
@property (nonatomic, readonly) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile;
@property (nonatomic, readonly) HMAccessorySetting *accessorySetting;
@property (nonatomic, readonly) NSString *cacheKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) HMAccessorySelectionSettingItem *optionItem;
@property (nonatomic, readonly) HFItem *outputItem;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)accessoryGroup;
- (id)accessoryGroupEntity;
- (id)accessoryProfile;
- (id)accessorySetting;
- (id)cacheKey;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessoryProfile:(id)arg1 accessoryGroupEntity:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 group:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 setting:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 setting:(id)arg2 optionItem:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)optionItem;
- (id)outputItem;

@end
