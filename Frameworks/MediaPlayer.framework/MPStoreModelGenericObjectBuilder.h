/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {
    MPStoreModelAlbumBuilder * _albumBuilder;
    MPStoreModelArtistBuilder * _artistBuilder;
    MPStoreModelMovieBuilder * _movieBuilder;
    MPStoreModelPlaylistBuilder * _playlistBuilder;
    bool  _shouldUsePlaylistEntry;
    MPStoreModelSongBuilder * _songBuilder;
    MPStoreModelTVEpisodeBuilder * _tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder * _tvSeasonBuilder;
    MPStoreModelTVShowBuilder * _tvShowBuilder;
}

@property (nonatomic) bool shouldUsePlaylistEntry;

- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1;
- (void)setShouldUsePlaylistEntry:(bool)arg1;
- (bool)shouldUsePlaylistEntry;

@end
