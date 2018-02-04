/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHeartRateQueryUtility : NSObject {
    HKQuery * _breatheQuery;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSDateInterval * _dateInterval;
    HKHealthStore * _healthStore;
    HKQuery * _heartRateQuery;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    HKQuery * _restingHeartRateQuery;
    id /* block */  _resultsHandler;
    NSMutableDictionary * _sampleResults;
    HKQuery * _stationaryDiscordanceQuery;
    long long  _timeScope;
    HKQuery * _walkingHeartRateQuery;
    HKQuery * _workoutQuery;
}

@property (nonatomic, retain) HKQuery *breatheQuery;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic) HKHealthStore *healthStore;
@property (nonatomic, retain) HKQuery *heartRateQuery;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, retain) HKQuery *restingHeartRateQuery;
@property (nonatomic, copy) id /* block */ resultsHandler;
@property (nonatomic, retain) NSMutableDictionary *sampleResults;
@property (nonatomic, retain) HKQuery *stationaryDiscordanceQuery;
@property (nonatomic) long long timeScope;
@property (nonatomic, retain) HKQuery *walkingHeartRateQuery;
@property (nonatomic, retain) HKQuery *workoutQuery;

+ (long long)_contextStyleForDisplayTypeContext:(long long)arg1;
+ (id)_displayTypeQueryForContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 completion:(id /* block */)arg4;
+ (id)_histogramQueryForContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 completion:(id /* block */)arg4;
+ (id)_quantityTypeForDisplayTypeContext:(long long)arg1;
+ (id)_queryForContext:(long long)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 completion:(id /* block */)arg4;
+ (id)_statisticsDateComponentsForTimeScope:(long long)arg1;
+ (id)orderedDisplayTypeContextResults:(id)arg1;

- (void).cxx_destruct;
- (id)breatheQuery;
- (id)clientQueue;
- (id)contextResultForContext:(long long)arg1 statistics:(id)arg2;
- (id)dateInterval;
- (void)execute;
- (id)healthStore;
- (id)heartRateQuery;
- (id)initWithHealthStore:(id)arg1 dateInterval:(id)arg2 timeScope:(long long)arg3 resultsHandler:(id /* block */)arg4;
- (id)resourceQueue;
- (id)restingHeartRateQuery;
- (id /* block */)resultsHandler;
- (id)sampleResults;
- (void)setBreatheQuery:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setHeartRateQuery:(id)arg1;
- (void)setResourceQueue:(id)arg1;
- (void)setRestingHeartRateQuery:(id)arg1;
- (void)setResultsHandler:(id /* block */)arg1;
- (void)setSampleResults:(id)arg1;
- (void)setStationaryDiscordanceQuery:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (void)setWalkingHeartRateQuery:(id)arg1;
- (void)setWorkoutQuery:(id)arg1;
- (void)setupQueries;
- (id)stationaryDiscordanceQuery;
- (void)stop;
- (long long)timeScope;
- (id)walkingHeartRateQuery;
- (id)workoutQuery;

@end
