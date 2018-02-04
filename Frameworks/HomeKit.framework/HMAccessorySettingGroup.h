/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySettingGroup : NSObject <_HMAccesorySettingGroupDelegate> {
    HMAccessorySettingGroup * _group;
    NSMutableSet * _groups;
    _HMAccessorySettingGroup * _internal;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMAccessorySettingGroup *group;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) _HMAccessorySettingGroup *internal;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_settingGroup:(id)arg1 didAddSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didAddSettingGroup:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSettingGroup:(id)arg2;
- (void)addGroup:(id)arg1;
- (void)addGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addSetting:(id)arg1;
- (void)addSetting:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)group;
- (id)groups;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternal:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)localizedTitle;
- (id)propertyQueue;
- (void)removeGroup:(id)arg1;
- (void)removeGroup:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeSetting:(id)arg1;
- (void)removeSetting:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setGroup:(id)arg1;
- (id)settings;

@end
