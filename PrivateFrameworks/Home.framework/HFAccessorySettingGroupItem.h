/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingGroupItem : HFItem <HFAccessorySettingItemProtocol> {
    HMAccessoryProfile<HFAccessorySettings> * _accessoryProfile;
    HFAccessorySettingsEntity * _entity;
    HMAccessorySelectionSetting * _selectionSetting;
    HMAccessorySettingGroup * _settingGroup;
}

@property (nonatomic, readonly) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFAccessorySettingsEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMAccessorySelectionSetting *selectionSetting;
@property (nonatomic, readonly) HMAccessorySettingGroup *settingGroup;
@property (nonatomic, readonly) NSString *settingKeyPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (id)accessoryProfile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entity;
- (id)homeKitObject;
- (id)initWithAccessoryProfile:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1 entity:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 group:(id)arg2;
- (id)initWithAccessoryProfile:(id)arg1 selectionSetting:(id)arg2;
- (id)selectionSetting;
- (id)settingGroup;
- (id)settingKeyPath;

@end
