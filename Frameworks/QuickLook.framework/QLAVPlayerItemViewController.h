/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLAVPlayerItemViewController : QLItemViewController <AVPlayerViewControllerDelegate> {
    bool  _fullScreen;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isAudioOnly;
    bool  _mediaWasPausedOnResignActive;
    QLOverlayPlayButton * _playButton;
    AVPlayer * _player;
    AVPlayerViewController * _playerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (bool)canEnterFullScreen;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)enterFullScreen:(bool)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)pause;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)play;
- (bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)previewDidDisappear:(bool)arg1;

@end