/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTVOutWindow : UIWindow {
    MPMovieTVHUDView * _hudView;
    MPVideoView * _videoView;
}

- (void).cxx_destruct;
- (void)_playbackStateChanged:(id)arg1;
- (void)_screenModeDidChange:(id)arg1;
- (bool)_setupTargetScreen:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)setVideoView:(id)arg1;
- (id)videoView;

@end
