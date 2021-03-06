/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelTVShow : MPModelObject {
    id /* block */  _artworkCatalogBlock;
    MPModelTVShowCreator * _creator;
    NSString * _editorNotes;
    id /* block */  _editorialArtworkCatalogBlock;
    long long  _episodesCount;
    NSString * _shortEditorNotes;
    NSString * _shortTitle;
    NSString * _tagline;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) MPModelTVShowCreator *creator;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) NSString *shortTitle;
@property (nonatomic, copy) NSString *tagline;
@property (nonatomic, copy) NSString *title;

+ (id)__MPModelPropertyTVShowArtwork__PROPERTY;
+ (id)__MPModelPropertyTVShowEditorNotes__PROPERTY;
+ (id)__MPModelPropertyTVShowEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyTVShowEpisodeCount__PROPERTY;
+ (id)__MPModelPropertyTVShowShortEditorNotes__PROPERTY;
+ (id)__MPModelPropertyTVShowShortTitle__PROPERTY;
+ (id)__MPModelPropertyTVShowTagline__PROPERTY;
+ (id)__MPModelPropertyTVShowTitle__PROPERTY;
+ (id)__MPModelRelationshipTVShowCreator__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__creator__KEY;
+ (id)__editorNotes__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__episodesCount__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)__shortTitle__KEY;
+ (id)__tagline__KEY;
+ (id)__title__KEY;
+ (id)kindWithSeasonKind:(id)arg1;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)creator;
- (id)editorNotes;
- (id)editorialArtworkCatalog;
- (id /* block */)editorialArtworkCatalogBlock;
- (long long)episodesCount;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setCreator:(id)arg1;
- (void)setEditorNotes:(id)arg1;
- (void)setEditorialArtworkCatalogBlock:(id /* block */)arg1;
- (void)setEpisodesCount:(long long)arg1;
- (void)setShortEditorNotes:(id)arg1;
- (void)setShortTitle:(id)arg1;
- (void)setTagline:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shortEditorNotes;
- (id)shortTitle;
- (id)tagline;
- (id)title;

@end
