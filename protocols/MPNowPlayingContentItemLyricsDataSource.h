/* made by EzioChiu.
 */

@protocol MPNowPlayingContentItemLyricsDataSource <NSObject>

@required

- (void)nowPlayingInfoCenter:(void *)arg1 lyricsForContentItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MPNowPlayingInfoCenter *, MPNowPlayingContentItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPNowPlayingInfoLyricsItem *, NSError *, void*

@end
