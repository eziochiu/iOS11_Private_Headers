/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (id)CSSATBasePath;
- (id)_CSSATUpdatePath;
- (id)_CSSATUploadPath;
- (id)_deviceCategoryMap;
- (id)_getEnrolledLanguageList;
- (bool)_isDirectory:(id)arg1;
- (bool)_markSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (bool)_markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (bool)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2;
- (bool)_storeModeEnabled;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (id)baseDir;
- (bool)fileLoggingIsEnabled;
- (id)fileLoggingLevel;
- (id)getUserVoiceProfileFileList;
- (id)getUserVoiceProfileUpdateDirectory;
- (id)getUserVoiceProfileUploadPath;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id*)arg1;
- (bool)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
- (void)notifyUserVoiceProfileUpdateReady;
- (void)notifyUserVoiceProfileUploadComplete;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (void)setFileLoggingLevel:(id)arg1;
- (bool)twoShotNotificationEnabled;
- (id)voiceTriggerAudioLogDirectory;
- (bool)voiceTriggerEnabled;
- (bool)voiceTriggerInCoreSpeech;

@end
