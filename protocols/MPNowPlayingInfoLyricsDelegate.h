/* made by EzioChiu.
 */

@protocol MPNowPlayingInfoLyricsDelegate <NSObject>

@optional

- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 didBeginLyricsEvent:(MPNowPlayingInfoLyricsEvent *)arg2;
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 didEndLyricsEvent:(MPNowPlayingInfoLyricsEvent *)arg2;

@end
