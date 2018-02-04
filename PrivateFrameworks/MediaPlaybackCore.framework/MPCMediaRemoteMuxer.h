/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteMuxer : NSObject {
    MPCPlayer * _activePlayer;
    MPCPlayer * _applicationPlayer;
    MPRemoteCommandCenter * _commandCenter;
    MPCPlayer * _systemPlayer;
}

@property (nonatomic, retain) MPCPlayer *applicationPlayer;
@property (nonatomic, readonly) MPRemoteCommandCenter *commandCenter;
@property (nonatomic, readonly) MPCPlayer *systemPlayer;

- (void).cxx_destruct;
- (void)_performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)_registerForPlayer:(id)arg1;
- (void)_removeSupportedCommands;
- (void)_setActivePlayer:(id)arg1;
- (void)_unregisterForPlayer:(id)arg1;
- (void)_updateParentApplication:(id)arg1;
- (void)_updateSupportedCommandsForPlayer:(id)arg1;
- (id)applicationPlayer;
- (id)commandCenter;
- (void)dealloc;
- (id)initWithSystemPlayer:(id)arg1;
- (void)invalidateSupportedCommandsForPlayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setApplicationPlayer:(id)arg1;
- (id)systemPlayer;

@end