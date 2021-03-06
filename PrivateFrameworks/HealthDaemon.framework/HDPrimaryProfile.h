/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPrimaryProfile : HDProfile {
    HDAppSubscriptionManager * _appSubscriptionManager;
    HDAWDSubmissionManager * _awdSubmissionManager;
    HDCloudSyncManager * _cloudSyncManager;
    HDCurrentActivitySummaryHelper * _currentActivitySummaryHelper;
    HDDataCollectionManager * _dataCollectionManager;
    HDFitnessMachineManager * _fitnessMachineManager;
    HDNanoSyncManager * _nanoSyncManager;
    HDNotificationManager * _notificationManager;
    HDServiceConnectionManager * _serviceConnectionManager;
    HDHealthServiceManager * _serviceManager;
    HDWorkoutManager * _workoutManager;
}

- (void).cxx_destruct;
- (void)_applyPPTUpdates;
- (id)_newAWDSubmissionManager;
- (id)_newAppSubscriptionManager;
- (id)_newCloudSyncManager;
- (id)_newNanoSyncManager;
- (id)_newNotificationManager;
- (id)_newWorkoutManager;
- (id)appSubscriptionManager;
- (id)awdSubmissionManager;
- (id)cloudSyncManager;
- (id)currentActivitySummaryHelper;
- (id)dataCollectionManager;
- (id)fitnessMachineManager;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3;
- (id)nanoSyncManager;
- (id)notificationManager;
- (id)serviceConnectionManager;
- (id)serviceManager;
- (void)terminationCleanup;
- (id)workoutManager;

@end
