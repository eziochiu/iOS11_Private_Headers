/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIStringsHelper : NSObject {
    NSString * _heySiriTriggerPhrase;
    NSMutableDictionary * _languageLocalizedStringTables;
    NSDictionary * _localizedStringTable;
}

@property (nonatomic, readonly) NSString *heySiriTriggerPhrase;

+ (void)initialize;
+ (id)sharedStringsHelper;

- (void).cxx_destruct;
- (id)_bundleStringTableForAllValidLanguages:(id)arg1;
- (id)_bundleStringTableForLanguages:(id)arg1;
- (id)_siriLanguageSubstitutedString:(id)arg1;
- (id)heySiriTriggerPhrase;
- (id)init;
- (void)setSiriLanguage:(id)arg1;
- (void)setupForCurrentLocaleAndSiriLanguage;
- (id)siriLanguageStringForKey:(id)arg1;
- (id)uiLocalizedStringForKey:(id)arg1;
- (id)uiLocalizedStringForKey:(id)arg1 languageCode:(id)arg2;

@end
