/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelCurator : MPModelPerson {
    long long  _curatorKind;
    NSString * _editorNotes;
    id /* block */  _editorialArtworkCatalogBlock;
    NSString * _handle;
    NSString * _shortEditorNotes;
    NSString * _shortName;
}

@property (nonatomic) long long curatorKind;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) NSString *shortName;

+ (id)__MPModelPropertyCuratorEditorNotes__PROPERTY;
+ (id)__MPModelPropertyCuratorEditorialArtwork__PROPERTY;
+ (id)__MPModelPropertyCuratorHandle__PROPERTY;
+ (id)__MPModelPropertyCuratorKind__PROPERTY;
+ (id)__MPModelPropertyCuratorShortEditorNotes__PROPERTY;
+ (id)__MPModelPropertyCuratorShortName__PROPERTY;
+ (id)__curatorKind__KEY;
+ (id)__editorNotes__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__handle__KEY;
+ (id)__shortEditorNotes__KEY;
+ (id)__shortName__KEY;

- (void).cxx_destruct;
- (long long)curatorKind;
- (id)editorNotes;
- (id)editorialArtworkCatalog;
- (id /* block */)editorialArtworkCatalogBlock;
- (id)handle;
- (void)setCuratorKind:(long long)arg1;
- (void)setEditorNotes:(id)arg1;
- (void)setEditorialArtworkCatalogBlock:(id /* block */)arg1;
- (void)setHandle:(id)arg1;
- (void)setShortEditorNotes:(id)arg1;
- (void)setShortName:(id)arg1;
- (id)shortEditorNotes;
- (id)shortName;

@end
