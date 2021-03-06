/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext * _playbackContext;
    long long  _replaceIntent;
}

- (void).cxx_destruct;
- (id)description;
- (void)getPlaybackContextWithCompletion:(id /* block */)arg1;
- (id)initWithPlaybackContext:(id)arg1;
- (bool)isRequestingImmediatePlayback;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)arg1;
- (id)siriRecommendationIdentifier;

@end
