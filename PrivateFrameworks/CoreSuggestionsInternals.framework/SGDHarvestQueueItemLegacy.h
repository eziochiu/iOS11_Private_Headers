/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueItemLegacy : SGDHarvestQueueItem {
    bool  _highPriority;
    SGDWorkQueueItem * _workQueueItem;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)finish;
- (bool)highPriority;
- (id)initWithWorkQueueItem:(id)arg1 item:(id)arg2 highPriority:(bool)arg3;
- (void)markAsFailed;

@end