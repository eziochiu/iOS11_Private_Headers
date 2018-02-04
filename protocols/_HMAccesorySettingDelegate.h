/* made by EzioChiu.
 */

@protocol _HMAccesorySettingDelegate <NSObject>

@required

- (void)_settingDidUpdateValue:(_HMAccessorySetting *)arg1;
- (void)_settingWillUpdateValue:(_HMAccessorySetting *)arg1;

@optional

- (void)_setting:(_HMAccessorySetting *)arg1 didAddConstriant:(HMAccessorySettingConstraint *)arg2;
- (void)_setting:(_HMAccessorySetting *)arg1 didRemoveConstriant:(HMAccessorySettingConstraint *)arg2;

@end
