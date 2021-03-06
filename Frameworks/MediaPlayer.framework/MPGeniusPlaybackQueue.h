/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPGeniusPlaybackQueue : MPRemotePlaybackQueue

@property (nonatomic, readonly) NSURL *seedTrack;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)description;
- (id)seedTrack;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)_getPlaybackContextFromCloudControllerWithSeedItem:(id)arg1 completion:(id /* block */)arg2;
- (void)_getPlaybackContextFromMediaLibraryWithSeedItem:(id)arg1 completion:(id /* block */)arg2;
- (void)_getPlaybackContextWithRecommendedContentWithSeedAdamID:(long long)arg1 completion:(id /* block */)arg2;
- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;

@end
