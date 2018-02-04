/* made by EzioChiu.
 */

@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>

@required

- (MPNowPlayingContentItem *)contentItemForOffset:(long long)arg1;

@optional

- (MPNowPlayingContentItem *)childContentItemAtIndex:(long long)arg1 ofItem:(MPNowPlayingContentItem *)arg2;

@end
