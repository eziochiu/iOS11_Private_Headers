/* made by EzioChiu.
 */

@protocol MPNowPlayingContentItemArtworkDataSource <NSObject>

@required

- (void)nowPlayingInfoCenter:(void *)arg1 artworkForContentItem:(void *)arg2 size:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: MPNowPlayingInfoCenter *, MPNowPlayingContentItem *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*

@end
