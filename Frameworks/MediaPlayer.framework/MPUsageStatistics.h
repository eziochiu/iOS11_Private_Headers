/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUsageStatistics : NSObject {
    NSString * _domain;
    NSString * _lastAggregateStatisticsDisplayCountKey;
    double  _lastAggregateStatisticsDisplayCountTime;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedStatistics;

- (void).cxx_destruct;
- (id)domain;
- (void)incrementViewDisplayCountForKey:(id)arg1;
- (void)incrementViewDisplayCountForViewController:(id)arg1;
- (id)init;
- (void)setAggregateStatisticsDomain:(id)arg1;

@end
