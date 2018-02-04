/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKBundleDataProvider : NSObject <RKDisplayStringsProvider, RKPolarityDataProvider> {
    NSBundle * _bundle;
    NSMutableDictionary * _displayStringsByPlatformByLanguage;
    NSMutableDictionary * _localizationsByLanguageID;
    NSMutableDictionary * _polarityMapsByLanguageID;
}

@property (readonly) NSBundle *bundle;
@property (readonly) NSMutableDictionary *displayStringsByPlatformByLanguage;
@property (retain) NSMutableDictionary *localizationsByLanguageID;
@property (readonly) NSMutableDictionary *polarityMapsByLanguageID;

- (void).cxx_destruct;
- (id)bundle;
- (id)displayStringsByPlatformByLanguage;
- (id)displayStringsForPlatform:(id)arg1 languageID:(id)arg2;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)localizationsByLanguageID;
- (struct __LSMMap { }*)polarityMapForLanguageID:(id)arg1;
- (id)polarityMapsByLanguageID;
- (void)setLocalizationsByLanguageID:(id)arg1;
- (id)stringsFromTable:(id)arg1 forLanguageIdentifier:(id)arg2;

@end
