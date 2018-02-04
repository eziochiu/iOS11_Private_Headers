/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingAdapter : NSObject <HFAccessorySettingsObserver, HFMediaProfileObserver> {
    HMAccessoryProfile<HFAccessorySettings> * _accessoryProfile;
    HMAccessorySettings * _accessorySettings;
    HFHomeKitDispatcher * _dispatcher;
    NSSet * _keyPaths;
    id /* block */  _updateHandler;
    HFAccessorySettingsValueManager * _valueManager;
    NSMutableDictionary * _watchedSettings;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMAccessoryProfile<HFAccessorySettings> *accessoryProfile;
@property (nonatomic, readonly) HMAccessorySettings *accessorySettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFHomeKitDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly, copy) NSSet *keyPaths;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;
@property (nonatomic, readonly) HFAccessorySettingsValueManager *valueManager;
@property (nonatomic, retain) NSMutableDictionary *watchedSettings;

+ (id)createDefaultHomeSettingAdapterCollectionForProfile:(id)arg1;
+ (id)createDefaultHomeSettingAdaptersForProfile:(id)arg1;

- (void).cxx_destruct;
- (void)_reportUpdatedValueForSetting:(id)arg1;
- (void)_setupKeyPaths;
- (void)_tearDownKeyPaths;
- (void)_teardownSetting:(id)arg1;
- (void)_watchSetting:(id)arg1;
- (id)accessory;
- (id)accessoryProfile;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)accessorySettings;
- (void)accessorySettings:(id)arg1 didUpdateSetting:(id)arg2;
- (void)accessorySettings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3;
- (void)accessorySettings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (id)dispatcher;
- (id)home;
- (id)init;
- (id)initWithAccessoryProfile:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)keyPaths;
- (void)mediaProfile:(id)arg1 didUpdateSettings:(id)arg2;
- (void)setDispatcher:(id)arg1;
- (void)setWatchedSettings:(id)arg1;
- (id)settingForKeyPath:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (id /* block */)updateHandler;
- (id)updateSetting:(id)arg1 value:(id)arg2;
- (id)updateSettingWithKeyPath:(id)arg1 value:(id)arg2;
- (id)valueManager;
- (id)watchedSettings;

@end
