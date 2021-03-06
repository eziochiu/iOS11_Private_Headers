/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKLocationSeriesStore : NSObject {
    HKHealthStore * _healthStore;
    id /* block */  _loadingCompletionBlock;
    long long  _loadingCount;
    NSObject<OS_dispatch_queue> * _locationQueue;
    NSMutableDictionary * _locations;
    NSMutableDictionary * _series;
}

- (void).cxx_destruct;
- (void)_fetchAllLocationsFromSeriesSample:(id)arg1;
- (void)_queue_addLocationSeriesSamples:(id)arg1;
- (void)_queue_checkAndReturnIfLocationsLoaded;
- (id)_queue_locations;
- (void)_setLocations:(id)arg1 forUUID:(id)arg2;
- (void)addLocationSeriesSamples:(id)arg1;
- (bool)containsSameValuesAs:(id)arg1;
- (void)fetchAllLocationsWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)samples;
- (void)setLocationSeriesSamples:(id)arg1;

@end
