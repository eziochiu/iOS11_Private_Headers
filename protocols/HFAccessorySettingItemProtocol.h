/* made by EzioChiu.
 */

@protocol HFAccessorySettingItemProtocol <HFHomeKitItemProtocol>

@required

- (HMAccessoryProfile<HFAccessorySettings> *)accessoryProfile;
- (HFAccessorySettingsEntity *)entity;
- (NSString *)settingKeyPath;

@end
