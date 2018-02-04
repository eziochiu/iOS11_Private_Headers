/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCoachingDiagnosticManager : NSObject <HDDiagnosticObject, HDPeriodicActivityDelegate> {
    CMMotionActivityManager * _activityManager;
    NSOperationQueue * _activityQueue;
    NSDate * _cachedLastSubmittedDate;
    Class  _motionActivityManagerClass;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDPeriodicActivity * _scheduler;
    AWDServerConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Class motionActivityManagerClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dateComponentsAsAge:(id)arg1;
- (void)_performCoachingDiagnosticWithCompletion:(id /* block */)arg1;
- (bool)_queue_acquireMotionActivityStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (bool)_queue_addHealthCharacteristicsToMetrics:(id)arg1 error:(id*)arg2;
- (void)_queue_applyDataItem:(id)arg1 toMetric:(id)arg2;
- (id)_queue_computeStatisticsForCoachingEvent:(id)arg1 error:(id*)arg2;
- (bool)_queue_computeWorkoutStatisticsForAnchorDate:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)_queue_lastSubmittedDate;
- (void)_queue_performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(bool)arg2 completion:(id /* block */)arg3;
- (void)_queue_performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(bool)arg2 submitMetrics:(bool)arg3 handler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)_queue_setLastSubmittedDate:(id)arg1;
- (id)_queue_statisticsCollectionForAnchorDate:(id)arg1 quantityType:(id)arg2 statisticsOptions:(unsigned long long)arg3 error:(id*)arg4;
- (bool)_queue_submitMetricForActivitySummary:(id)arg1 dateOfBirth:(id)arg2 biologicalSex:(id)arg3 heightSample:(id)arg4 weightSample:(id)arg5;
- (bool)_queue_submitMetricForData:(id)arg1;
- (bool)_queue_submitMetrics:(id)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (Class)motionActivityManagerClass;
- (void)performCoachingDiagnosticWithRunDate:(id)arg1 ignoreAnchor:(bool)arg2 submitMetrics:(bool)arg3 handler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (void)setActivityManager:(id)arg1;
- (void)setMotionActivityManagerClass:(Class)arg1;

@end