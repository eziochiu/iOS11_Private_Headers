/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingManagedConfigurationAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating, MCProfileConnectionObserver> {
    unsigned long long  _mode;
    MCProfileConnection * _profileConnectionForSynchronization;
    NSHashTable * _profileObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) unsigned long long numberOfProfiles;
@property (nonatomic, readonly) MCProfileConnection *profileConnectionForSynchronization;
@property (nonatomic, retain) NSHashTable *profileObservers;
@property (nonatomic, readonly) HMAccessorySetting *profilesSetting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchWasUpdated;
- (id)_installedProfileData;
- (id)_installedProfiles;
- (id)_profileWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)_profilesSettingDataWithError:(id*)arg1;
- (void)_rebootForReason:(id)arg1;
- (id)_removeProfileFromProfileManager:(id)arg1;
- (id)_synchronizeHomeKitToManagedConfiguration;
- (id)_synchronizeManagedConfigurationToHomeKit;
- (id)_synchronizeProfileDataToHomeKit:(id)arg1;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)addProfileDataToHomeKit:(id)arg1;
- (void)addProfileObserver:(id)arg1;
- (void)dealloc;
- (id)initWithAccessoryProfile:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1 mode:(unsigned long long)arg2;
- (unsigned long long)mode;
- (unsigned long long)numberOfProfiles;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)profileConnectionForSynchronization;
- (id)profileObservers;
- (id)profilesSetting;
- (id)profilesWithError:(id*)arg1;
- (id)removeProfileDataFromHomeKit:(id)arg1;
- (id)removeProfileFromHomeKit:(id)arg1;
- (void)removeProfileObserver:(id)arg1;
- (void)setProfileObservers:(id)arg1;
- (bool)shouldShowSettingsEntity:(id)arg1;

@end
