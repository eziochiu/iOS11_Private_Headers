/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingSiriLanguageAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating> {
    NSSet * _availableLanguageOptions;
    unsigned long long  _mode;
    NSHashTable * _observers;
    HFSiriLanguageOption * _selectedLanguageOption;
}

@property (nonatomic, copy) NSSet *availableLanguageOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMAccessorySelectionSetting *languageSetting;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, retain) HFSiriLanguageOption *selectedLanguageOption;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadLanguagesFromHomeKitNotifyingObservers:(bool)arg1;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)availableLanguageOptions;
- (id)initWithAccessoryProfile:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithAccessoryProfile:(id)arg1 mode:(unsigned long long)arg2;
- (id)languageSetting;
- (unsigned long long)mode;
- (id)observers;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)arg1;
- (id)preferredOutputVoiceGenderOptionsForSelectedOption:(id)arg1;
- (id)preferredRecognitionLanguageOptions;
- (void)removeObserver:(id)arg1;
- (id)selectedLanguageOption;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setSelectedLanguageOption:(id)arg1;
- (bool)shouldShowSettingsEntity:(id)arg1;
- (id)updateAvailableLanguageOptions:(id)arg1;
- (id)updateSelectedLanguageOption:(id)arg1;

@end
