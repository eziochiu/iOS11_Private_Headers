/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingItem : HFItem <HFAccessorySettingItemProtocol> {
    HMAccessoryProfile<HFAccessorySettings> * _accessoryProfile;
    HFAccessorySettingsEntity * _entity;
    HMAccessorySetting * _setting;
}

@property (nonatomic, retain) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFAccessorySettingsEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, retain) HMAccessorySetting *setting;
@property (nonatomic, readonly) NSString *settingKeyPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (void)_decorateOutcomeWithResultKeys:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)_validateKeyPathDependencies;
- (id)accessoryProfile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entity;
- (id)homeKitObject;
- (id)initWithAccessoryProfile:(id)arg1 setting:(id)arg2;
- (void)setAccessoryProfile:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setSetting:(id)arg1;
- (id)setting;
- (id)settingKeyPath;
- (id)updateValue:(id)arg1;
- (id)value;

@end
