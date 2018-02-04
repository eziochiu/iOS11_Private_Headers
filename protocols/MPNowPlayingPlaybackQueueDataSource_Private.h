/* made by EzioChiu.
 */

@protocol MPNowPlayingPlaybackQueueDataSource_Private <MPNowPlayingPlaybackQueueDataSource>

@required

- (MPNowPlayingContentItem *)nowPlayingContentItemForIdentifier:(NSString *)arg1;
- (NSArray *)nowPlayingContentItemsForRequest:(void*)arg1 range:(struct { long long x1; long long x2; }*)arg2;

@end
