/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitEventNotificationManager : NSObject {
    <IMCloudKitEventHandlerAccountInfoProvider> * _accountInfoProvider;
    IMWeakReferenceCollection * _eventHandlers;
    NSTimer * _fetchStatsTimer;
    IMCloudKitSyncProgress * _lastSentProgress;
    IMEventNotificationManager * _notificationManager;
    IMCloudKitSyncState * _pendingSyncStateForProgress;
    IMCloudKitSyncState * _previousState;
    double  _progressPollingInterval;
}

@property <IMCloudKitEventHandlerAccountInfoProvider> *accountInfoProvider;
@property bool didPromptForCloudKitSync;
@property (readonly) IMWeakReferenceCollection *eventHandlers;
@property NSTimer *fetchStatsTimer;
@property (retain) IMCloudKitSyncProgress *lastSentProgress;
@property (retain) IMEventNotificationManager *notificationManager;
@property (retain) IMCloudKitSyncState *pendingSyncStateForProgress;
@property (retain) IMCloudKitSyncState *previousState;
@property double progressPollingInterval;
@property (readonly) IMCloudKitSyncState *syncState;

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelDeferredHiddenProgress;
- (void)_cancelStatsFetchingTimer;
- (id)_createSyncNotEnabledError;
- (void)_fetchSyncStateStatistics:(id /* block */)arg1;
- (bool)_hasProgressEventListeners;
- (void)_rescheduleFetchSyncProgress;
- (void)_sendHiddenProgress;
- (void)_sendProgressToEventHandlers:(id)arg1;
- (void)_sendSyncProgressWithSyncState:(id)arg1 reschedule:(bool)arg2 finishing:(bool)arg3 hidden:(bool)arg4;
- (void)_sendSyncStateChangedEventToEventHandlersWithDictionary:(id)arg1;
- (void)_sendSyncStatisticsToEventHandlers:(id)arg1 error:(id)arg2;
- (bool)_shouldSendProgress;
- (void)_syncStateDidChange:(id)arg1;
- (void)_timerExpiredForSyncStatsFetching:(id)arg1;
- (void)_updateProgressWithState:(id)arg1;
- (bool)accountHasiMessageEnabled;
- (id)accountInfoProvider;
- (void)addEventHandler:(id)arg1;
- (bool)canEnableCloudKitSync;
- (id)cloudKitHooks;
- (bool)didPromptForCloudKitSync;
- (void)disableAllSyncEnabledCloudKitDevices;
- (id)eventHandlers;
- (id)fetchStatsTimer;
- (void)fetchSyncDebuggingInfo:(id)arg1;
- (void)fetchSyncStateStatistics;
- (id)init;
- (id)lastSentProgress;
- (id)notificationManager;
- (void)pauseEventNotifications:(bool)arg1;
- (id)pendingSyncStateForProgress;
- (void)performAdditionalStorageRequiredCheck;
- (id)previousState;
- (double)progressPollingInterval;
- (void)removeEventHandler:(id)arg1;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setCloudKitSyncEnabled:(bool)arg1;
- (void)setDidPromptForCloudKitSync:(bool)arg1;
- (void)setFetchStatsTimer:(id)arg1;
- (void)setLastSentProgress:(id)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setPendingSyncStateForProgress:(id)arg1;
- (void)setPreviousState:(id)arg1;
- (void)setProgressPollingInterval:(double)arg1;
- (void)startFetchingSyncProgress;
- (void)startPeriodicSync;
- (id)syncState;
- (id)syncStateWithDictionary:(id)arg1;
- (void)visitEventHandlers:(id /* block */)arg1;

@end
