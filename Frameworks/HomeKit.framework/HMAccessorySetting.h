/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessorySetting : NSObject <_HMAccesorySettingDelegate> {
    HMAccessorySettingGroup * _group;
    _HMAccessorySetting * _internal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMAccessorySettingGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isBooleanSetting;
@property (readonly) _HMAccessorySetting *internal;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly) Class superclass;
@property (readonly, copy) <NSCopying><NSSecureCoding> *value;
@property (readonly) Class valueClass;
@property (getter=isWritable, readonly) bool writable;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)settingForInternal:(id)arg1;

- (void).cxx_destruct;
- (void)_settingDidUpdateValue:(id)arg1;
- (void)_settingWillUpdateValue:(id)arg1;
- (id)description;
- (id)group;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternal:(id)arg1;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isWritable;
- (id)keyPath;
- (id)localizedTitle;
- (void)setGroup:(id)arg1;
- (void)updateValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)value;
- (Class)valueClass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_isBooleanSetting;

@end
