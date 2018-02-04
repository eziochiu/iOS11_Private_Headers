/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPodcastEpisode : MPModelObject {
    id /* block */  _artworkCatalogBlock;
    MPModelPodcastAuthor * _author;
    NSString * _commentText;
    NSDate * _datePlayed;
    NSString * _descriptionText;
    double  _duration;
    bool  _explicitEpisode;
    NSURL * _feedURL;
    MPModelFileAsset * _localFileAsset;
    MPModelPlaybackPosition * _playbackPosition;
    MPModelPodcast * _podcast;
    NSDateComponents * _releaseDateComponents;
    NSString * _title;
    float  _userRating;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, retain) MPModelPodcastAuthor *author;
@property (nonatomic, copy) NSString *commentText;
@property (nonatomic, copy) NSDate *datePlayed;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic) double duration;
@property (getter=isExplicitEpisode, nonatomic) bool explicitEpisode;
@property (nonatomic, copy) NSURL *feedURL;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, retain) MPModelPodcast *podcast;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) float userRating;

+ (id)__MPModelPropertyPodcastEpisodeArtwork__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeCommentText__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeDatePlayed__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeDescriptionText__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeDuration__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeExplicit__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeFeedURL__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeReleaseDateComponents__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeTitle__PROPERTY;
+ (id)__MPModelPropertyPodcastEpisodeUserRating__PROPERTY;
+ (id)__MPModelRelationshipPodcastEpisodeAuthor__PROPERTY;
+ (id)__MPModelRelationshipPodcastEpisodeLocalFileAsset__PROPERTY;
+ (id)__MPModelRelationshipPodcastEpisodePlaybackPosition__PROPERTY;
+ (id)__MPModelRelationshipPodcastEpisodePodcast__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__author__KEY;
+ (id)__commentText__KEY;
+ (id)__datePlayed__KEY;
+ (id)__descriptionText__KEY;
+ (id)__duration__KEY;
+ (id)__explicitEpisode__KEY;
+ (id)__feedURL__KEY;
+ (id)__localFileAsset__KEY;
+ (id)__playbackPosition__KEY;
+ (id)__podcast__KEY;
+ (id)__releaseDateComponents__KEY;
+ (id)__title__KEY;
+ (id)__userRating__KEY;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)author;
- (id)commentText;
- (id)datePlayed;
- (id)descriptionText;
- (id)descriptionWithType:(long long)arg1;
- (double)duration;
- (id)feedURL;
- (bool)isExplicitEpisode;
- (id)localFileAsset;
- (id)playbackPosition;
- (id)podcast;
- (id)releaseDateComponents;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCommentText:(id)arg1;
- (void)setDatePlayed:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setExplicitEpisode:(bool)arg1;
- (void)setFeedURL:(id)arg1;
- (void)setLocalFileAsset:(id)arg1;
- (void)setPlaybackPosition:(id)arg1;
- (void)setPodcast:(id)arg1;
- (void)setReleaseDateComponents:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (id)title;
- (float)userRating;

@end
