/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryNumberSetting : HMAccessorySetting

@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *stepValue;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 stepValue:(id)arg6;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (Class)valueClass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_isBooleanSetting;

@end
