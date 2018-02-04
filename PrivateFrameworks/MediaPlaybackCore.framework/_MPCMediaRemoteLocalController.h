/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCMediaRemoteLocalController : MPCMediaRemoteController

+ (bool)_isRemote;

- (id)_init;
- (void)_onQueue_mergeMPContentItems:(id)arg1 queueRange:(struct _MSVSignedRange { long long x1; long long x2; })arg2;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (void)_playbackQueueContentItemsChangedNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (id)_shim_nowPlayingContentItemsForRequest:(void*)arg1 dataSource:(id)arg2 range:(struct { long long x1; long long x2; }*)arg3;
- (void)_supportedCommandsDidChangedNotification:(id)arg1;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)contentItemArtworkForIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;
- (id)playbackState;
- (id)playingIdentifier;
- (long long)playingIdentifierCacheState;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)supportedCommands;

@end
