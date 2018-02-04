/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugScenesCollectionItem : NSObject {
    NSString * _keyword;
    NSNumber * _sceneIdentifier;
    NSArray * _synonyms;
    NSString * _synonymsString;
}

@property (nonatomic, copy) NSString *keyword;
@property (nonatomic, retain) NSNumber *sceneIdentifier;
@property (nonatomic, copy) NSArray *synonyms;
@property (nonatomic, copy) NSString *synonymsString;

- (void).cxx_destruct;
- (id)_synonymsStringWithSynonyms:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 keyword:(id)arg2 synonyms:(id)arg3;
- (id)keyword;
- (id)sceneIdentifier;
- (void)setKeyword:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (void)setSynonymsString:(id)arg1;
- (id)synonyms;
- (id)synonymsString;

@end
