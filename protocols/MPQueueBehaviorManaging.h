/* made by EzioChiu.
 */

@protocol MPQueueBehaviorManaging <NSObject>

@required

- (bool)allowsUserVisibleUpcomingItems;
- (bool)canSeek;
- (bool)canSkipItem:(MPAVItem *)arg1;
- (bool)canSkipToPreviousItem;
- (bool)canSkipToPreviousItemForItem:(MPAVItem *)arg1;
- (long long)playbackMode;
- (bool)userCanChangeShuffleAndRepeatType;

@end