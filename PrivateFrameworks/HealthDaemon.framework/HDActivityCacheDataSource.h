/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityCacheDataSource : NSObject <HDActivityCacheStatisticsBuilderSourceOrderDelegate, HDDataObserver> {
    NSSet * _allObservedTypes;
    HKCategoryType * _deepBreathingSessionType;
    long long  _nonQuantitySampleAnchor;
    NSString * _nonQuantitySamplesQueryString;
    NSSet * _observedQuantityTypes;
    long long  _previousDayCacheIndex;
    NSDateInterval * _previousDayDateInterval;
    HDActivityCacheHeartRateStatisticsBuilder * _previousDayHeartRateStatisticsBuilder;
    HDActivityCacheStatisticsBuilder * _previousDayStatisticsBuilder;
    NSString * _previousDayStatisticsBuilderTag;
    bool  _previousWatchActivationLogEntryIsSet;
    struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { 
        struct HDActivityCacheStatisticsBuilderSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { 
            struct HDActivityCacheStatisticsBuilderSample {} *__first_; 
        } __end_cap_; 
    }  _previousWatchActivationLogEntryVector;
    HDProfile * _profile;
    long long  _quantitySampleAnchor;
    NSString * _quantitySamplesQueryString;
    NSObject<OS_dispatch_queue> * _queue;
    _HKDelayedOperation * _rebuildOperation;
    HKCategoryType * _standHoursType;
    long long  _targetDayCacheIndex;
    NSDateInterval * _targetDayDateInterval;
    HDActivityCacheHeartRateStatisticsBuilder * _targetDayHeartRateStatisticsBuilder;
    HDActivityCacheStatisticsBuilder * _targetDayStatisticsBuilder;
    NSString * _targetDayStatisticsBuilderTag;
    _HKDelayedOperation * _updateOperation;
    HKCategoryType * _watchActivationType;
    HKWorkoutType * _workoutType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *observedQuantityTypes;
@property (nonatomic) long long previousDayCacheIndex;
@property (nonatomic, retain) NSDateInterval *previousDayDateInterval;
@property (nonatomic, readonly) HDActivityCacheHeartRateStatisticsBuilder *previousDayHeartRateStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder;
@property (nonatomic, retain) NSString *previousDayStatisticsBuilderTag;
@property (readonly) Class superclass;
@property (nonatomic) long long targetDayCacheIndex;
@property (nonatomic, retain) NSDateInterval *targetDayDateInterval;
@property (nonatomic, readonly) HDActivityCacheHeartRateStatisticsBuilder *targetDayHeartRateStatisticsBuilder;
@property (nonatomic, readonly) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder;
@property (nonatomic, retain) NSString *targetDayStatisticsBuilderTag;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_dateIntervalsAreSet;
- (bool)_nonQuantitySampleRequiresWatchSource:(long long)arg1;
- (id)_nonQuantitySamplesQueryStringWithSampleTypes:(id)arg1;
- (id)_overallDateInterval;
- (id)_parameterStringWithCount:(long long)arg1;
- (bool)_primeNonQuantitySamplesWithError:(id*)arg1;
- (bool)_primePreviousActivationLogEntryWithError:(id*)arg1;
- (bool)_primeQuantitySamplesWithError:(id*)arg1;
- (bool)_quantitySampleIsValidWithTypeCode:(long long)arg1 workoutSourceIdentifier:(long long)arg2 isWatchSource:(bool)arg3;
- (id)_quantitySamplesQueryStringWithQuantityTypes:(id)arg1;
- (bool)_quantityTypeRequiresWatchSource:(long long)arg1;
- (void)_queue_deregisterForSamplesAdded;
- (void)_queue_registerForSamplesAdded;
- (bool)_readyToPrimeActivationLogEntries;
- (bool)_readyToPrimeStatisticsBuilders;
- (void)_resetEverything;
- (void)_resetPreviousWatchActivationLogEntries;
- (void)_resetStatisticsBuilders;
- (void)_samplesAddedToWorkoutNotification:(id)arg1;
- (bool)_typeIsValidFromCompanionWithoutWorkout:(long long)arg1;
- (bool)_updateStatisticsBuildersWithError:(id*)arg1;
- (id)activityCacheStatisticsBuilder:(id)arg1 sourceOrderForObjectType:(id)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 observedQuantityTypes:(id)arg2 updateOperation:(id)arg3 rebuildOperation:(id)arg4 queue:(id)arg5;
- (id)observedQuantityTypes;
- (void)pauseUpdates;
- (long long)previousDayCacheIndex;
- (id)previousDayDateInterval;
- (id)previousDayHeartRateStatisticsBuilder;
- (id)previousDayStatisticsBuilder;
- (id)previousDayStatisticsBuilderTag;
- (void)resumeUpdates;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setPreviousDayCacheIndex:(long long)arg1;
- (void)setPreviousDayDateInterval:(id)arg1;
- (void)setPreviousDayStatisticsBuilderTag:(id)arg1;
- (void)setTargetDayCacheIndex:(long long)arg1;
- (void)setTargetDayDateInterval:(id)arg1;
- (void)setTargetDayStatisticsBuilderTag:(id)arg1;
- (long long)targetDayCacheIndex;
- (id)targetDayDateInterval;
- (id)targetDayHeartRateStatisticsBuilder;
- (id)targetDayStatisticsBuilder;
- (id)targetDayStatisticsBuilderTag;
- (bool)updateWithError:(id*)arg1;

@end