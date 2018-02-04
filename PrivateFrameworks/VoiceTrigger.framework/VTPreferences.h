/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPreferences : NSObject

+ (void)initialize;
+ (id)sharedPreferences;

- (id)_VTSATBasePath;
- (id)_VTSATCachePath;
- (id)_deviceCategoryMap;
- (id)_getSATEnrollmentAudioPathForLanguageCode:(id)arg1;
- (bool)_isSATMarkedForMarker:(id)arg1 languageCode:(id)arg2;
- (id)_languageCode;
- (bool)_storeModeEnabled;
- (id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1;
- (void)discardAllSATEnrollment;
- (void)discardSATEnrollmentForLanguageCode:(id)arg1;
- (void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1;
- (bool)fileLoggingIsEnabled;
- (id)fileLoggingLevel;
- (bool)gestureSubscriptionEnabled;
- (id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg1;
- (id)getSATEnrollmentPath;
- (bool)hasExplicitlySetVoiceTriggerEnabled;
- (bool)hasVoiceProfileIniCloudForLanguageCode:(id)arg1;
- (bool)isLocalVoiceTriggerAvailable;
- (bool)isRemoteVoiceTriggerAvailable;
- (bool)isSATAvailable;
- (bool)isSATEnrolledForLanguageCode:(id)arg1;
- (bool)isSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (bool)isVoiceTriggerAvailable;
- (bool)localVoiceTriggerEnabled;
- (id)localizedTriggerPhrase;
- (id)localizedTriggerPhraseForLanguageCode:(id)arg1;
- (void)markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (bool)onetimeRemoteAssetQueryRanSuccessfully;
- (bool)phraseSpotterEnabled;
- (bool)remoteVoiceTriggerEnabled;
- (bool)secondPassAudioLoggingEnabled;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (void)setFileLoggingLevel:(id)arg1;
- (void)setLocalVoiceTriggerEnaled:(bool)arg1;
- (void)setOnetimeRemoteAssetQueryRanSuccessfully:(bool)arg1;
- (void)setPhraseSpotterEnabled:(bool)arg1;
- (void)setRemoteVoiceTriggerEnabled:(bool)arg1;
- (void)setSecondPassAudioLoggingEnabled:(bool)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1;
- (void)setVoiceTriggerEnabledWhenChargerConnected:(bool)arg1;
- (void)setVoiceTriggerEnabledWhenChargerDisconnected:(bool)arg1;
- (void)synchronize;
- (bool)voiceTriggerEnabled;
- (bool)voiceTriggerEnabledWhenChargerConnected;
- (bool)voiceTriggerEnabledWhenChargerDisconnected;
- (bool)voiceTriggerInCoreSpeech;

@end
