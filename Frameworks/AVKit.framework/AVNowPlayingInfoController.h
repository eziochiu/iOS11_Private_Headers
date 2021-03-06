/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVNowPlayingInfoController : NSObject {
    bool  _enabled;
    NSUUID * _identifier;
    bool  _nowPlayingInfoNeedsUpdate;
    AVPlayerController * _playerController;
    id  _playerControllerCurrentTimeJumpedObserver;
    bool  _requiresLinearPlayback;
    bool  _shouldOwnNowPlayingInfo;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) bool requiresLinearPlayback;

- (void).cxx_destruct;
- (long long)_handleRemoteCommandEvent:(id)arg1;
- (bool)_ownsNowPlayingInfo;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfo;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithPlayerController:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playerController;
- (bool)requiresLinearPlayback;
- (void)setEnabled:(bool)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;

@end
