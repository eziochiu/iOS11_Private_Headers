/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator {
    double  _nextSleepDurationSampleTime;
}

@property (nonatomic) double nextSleepDurationSampleTime;

- (double)_computeAwakeTimeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computeSleepTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (bool)_isDemoPersonAwake:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonSleeping:(id)arg1 atTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)nextSleepDurationSampleTime;
- (void)setNextSleepDurationSampleTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (id)sleepSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3;

@end
