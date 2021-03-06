/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
 */

@interface DUDictionaryManager : NSObject {
    NSArray * _availableDefinitionDictionaries;
}

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (void).cxx_destruct;
- (id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(bool)arg1;
- (id)_availableDictionaryAssets;
- (id)_availableDictionaryAssetsUsingRemoteInfo:(bool)arg1;
- (id)_currentlyAvailableDefinitionDictionaries;
- (id)_definitionValuesForTerm:(id)arg1;
- (bool)_hasDefinitionForTerm:(id)arg1;
- (id)availableDefinitionDictionaries;
- (id)init;

@end
