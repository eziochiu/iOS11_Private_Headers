/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDefaults : NSObject {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSDictionary *cachedSubscriptionStatus;
@property (getter=isCachedSubscriptionStatusValid, nonatomic) bool cachedSubscriptionStatusValid;
@property (nonatomic, copy) NSString *cloudMediaLibraryUID;
@property (nonatomic, copy) NSString *defaultStoreFront;
@property (nonatomic, readonly, copy) NSNumber *deviceClassOverride;
@property (nonatomic, readonly, copy) NSString *deviceModelOverride;
@property (nonatomic, readonly, copy) NSNumber *fairPlayDeviceTypeOverride;
@property (nonatomic, readonly, copy) NSString *hardwarePlatformOverride;
@property (nonatomic) bool ignoreExtendedCertificateValidation;
@property (nonatomic, copy) NSDictionary *mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
@property (nonatomic, readonly, copy) NSString *productPlatformOverride;
@property (nonatomic, readonly, copy) NSString *productVersionOverride;
@property (nonatomic, copy) NSDictionary *pushNotificationState;
@property (nonatomic, readonly) bool shouldForceiPhoneBehaviors;

+ (id)standardDefaults;

- (void).cxx_destruct;
- (void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2;
- (bool)_shouldSpoofIPhoneRequestProperties;
- (id)cachedSubscriptionStatus;
- (id)cloudMediaLibraryUID;
- (id)defaultStoreFront;
- (id)deviceClassOverride;
- (id)deviceModelOverride;
- (id)fairPlayDeviceTypeOverride;
- (id)hardwarePlatformOverride;
- (bool)ignoreExtendedCertificateValidation;
- (id)init;
- (bool)isCachedSubscriptionStatusValid;
- (id)mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
- (id)productPlatformOverride;
- (id)productVersionOverride;
- (id)pushNotificationState;
- (void)setCachedSubscriptionStatus:(id)arg1;
- (void)setCachedSubscriptionStatusValid:(bool)arg1;
- (void)setCloudMediaLibraryUID:(id)arg1;
- (void)setDefaultStoreFront:(id)arg1;
- (void)setIgnoreExtendedCertificateValidation:(bool)arg1;
- (void)setMediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates:(id)arg1;
- (void)setPushNotificationState:(id)arg1;
- (bool)shouldForceiPhoneBehaviors;

@end
