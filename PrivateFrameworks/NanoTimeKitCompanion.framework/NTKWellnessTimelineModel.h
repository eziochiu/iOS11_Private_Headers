/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessTimelineModel : NSObject {
    HKQuantityType * _calorieGoalType;
    HKUnit * _countUnit;
    _HKDelayedOperation * _delayedProcessingOperation;
    HKHealthStore * _healthStore;
    HKUnit * _kcalUnit;
    HKUnit * _minuteUnit;
    NSObject<OS_dispatch_queue> * _queue;
    HKQueryAnchor * _queue_calorieGoalAnchor;
    HKAnchoredObjectQuery * _queue_calorieGoalAnchoredObjectQuery;
    HKObserverQuery * _queue_calorieGoalObserverQuery;
    HKSortedSampleArray * _queue_calorieGoals;
    HKCurrentActivityCacheQuery * _queue_currentActivityCacheAndStatisticsQuery;
    HKActivitySummary * _queue_currentActivitySummary;
    _HKCurrentActivitySummaryQuery * _queue_currentActivitySummaryQuery;
    NSArray * _queue_exerciseActivityStatisticsQuantityInfos;
    bool  _queue_ignoreLoadingSummary;
    NSArray * _queue_moveActivityStatisticsQuantityInfos;
    NSArray * _queue_sortedEntriesKeys;
    NSArray * _queue_standActivityStatisticsStandHourInfos;
    NSMutableDictionary * _queue_wellnessEntriesByDate;
    NSObject<OS_dispatch_queue> * _subscriber_queue;
    NSHashTable * _subscribers;
}

+ (id)sharedModel;

- (void).cxx_destruct;
- (void)_broadcastCurrentEntryUpdate:(id)arg1 toSubscriber:(id)arg2;
- (void)_broadcastCurrentEntryUpdateToSubscribers:(id)arg1;
- (void)_broadcastHistoricalDataLoaded:(bool)arg1 toSubscriber:(id)arg2;
- (void)_broadcastHistoricalDataWasUpdatedToSubscribers;
- (void)_broadcastToAllSubscribersHistoricalDataLoaded:(bool)arg1;
- (id)_createCalorieGoalObserverQuery;
- (void)_fetchCalorieGoalSamples;
- (void)_handleTimeChange;
- (bool)_loadingStateForActivitySummary:(id)arg1;
- (id)_queue_calorieGoalSampleForDate:(id)arg1;
- (void)_queue_fetchCalorieGoalSamples;
- (bool)_queue_historicalDataLoaded;
- (void)_queue_processMoveActivityStatistics:(id)arg1 exerciseActivityStatistics:(id)arg2 standActivityStatistics:(id)arg3;
- (void)_queue_processNewCalorieGoals:(id)arg1 deletedSamples:(id)arg2;
- (void)_queue_restartQueries;
- (void)_queue_restartQueriesIfQueryInUse:(id)arg1;
- (id)_queue_standHourForDate:(id)arg1;
- (void)_queue_startQueries;
- (void)_queue_stopQueriesPreservingHistoricalData:(bool)arg1;
- (void)_queue_updateCalorieGoalsWithSamples:(id)arg1 deletedSamples:(id)arg2 anchor:(id)arg3;
- (void)_queue_updateCurrentActivitySummaryWithSummary:(id)arg1;
- (void)_queue_updateMoveActivityStatistics:(id)arg1 exerciseActivityStatistics:(id)arg2 standActivityStatistics:(id)arg3;
- (void)_restartQueriesIfQueryInUse:(id)arg1;
- (void)_updateCalorieGoalsWithSamples:(id)arg1 deletedSamples:(id)arg2 anchor:(id)arg3;
- (void)_updateCurrentActivitySummaryWithSummary:(id)arg1;
- (void)_updateMoveActivityStatistics:(id)arg1 exerciseActivityStatistics:(id)arg2 standActivityStatistics:(id)arg3;
- (id)_wellnessEntryModelFromActivitySummary:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (void)dealloc;
- (void)getCurrentWellnessEntryWithHandler:(id /* block */)arg1;
- (void)getWellnessEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)getWellnessEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)init;
- (void)removeSubscriber:(id)arg1;
- (id)timelineEndDate;
- (id)timelineStartDate;

@end
