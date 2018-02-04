/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySettings : NSObject <HMFLogging> {
    HMAccessory * _accessory;
    <HMAccessorySettingsDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMAccessorySettingGroup * _rootGroup;
}

@property HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property <HMAccessorySettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NATreeNode *hf_codex;
@property (nonatomic, readonly) HFAccessorySettingsValueManager *hf_valueManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) HMAccessorySettingGroup *rootGroup;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)localizationKeyForKeyPath:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(id /* block */)arg1;
- (void)_updateSettingsWithBlock:(id /* block */)arg1;
- (id)accessory;
- (id)delegate;
- (id)initWithAccessory:(id)arg1 rootGroup:(id)arg2;
- (id)propertyQueue;
- (id)rootGroup;
- (void)setAccessory:(id)arg1;
- (void)setDelegate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_MediaAccessoryCodex;

- (id)hf_accessorySettingAtKeyPath:(id)arg1;
- (id)hf_accessorySettingGroupAtKeyPath:(id)arg1;
- (id)hf_accessorySettingItemAtKeyPath:(id)arg1;
- (id)hf_codex;
- (id)hf_valueManager;

@end
