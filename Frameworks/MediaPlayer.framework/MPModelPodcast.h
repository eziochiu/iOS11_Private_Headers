/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPodcast : MPModelObject {
    id /* block */  _artworkCatalogBlock;
    MPModelPodcastAuthor * _author;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, retain) MPModelPodcastAuthor *author;
@property (nonatomic, copy) NSString *title;

+ (id)__MPModelPropertyPodcastArtwork__PROPERTY;
+ (id)__MPModelPropertyPodcastTitle__PROPERTY;
+ (id)__MPModelRelationshipPodcastAuthor__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__author__KEY;
+ (id)__title__KEY;
+ (id)kindWithEpisodeKind:(id)arg1;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)author;
- (id)descriptionWithType:(long long)arg1;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setAuthor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
