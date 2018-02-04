/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    NSArray * _supportedPlaybackRates;
}

@property (nonatomic, copy) NSArray *supportedPlaybackRates;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPlaybackRate:(float)arg1;
- (void)setSupportedPlaybackRates:(id)arg1;
- (id)supportedPlaybackRates;

@end
