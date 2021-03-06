/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSleepMonitor : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTAlarmObserver> {
    MTAlarmScheduler * _alarmScheduler;
    MTAlarmStorage * _alarmStorage;
    id /* block */  _currentDateProvider;
    CMSleepData * _lastRecord;
    bool  _monitoring;
    <NAScheduler> * _serializer;
    MTSleepMetrics * _sleepMetrics;
    CMSleepTracker * _sleepTracker;
}

@property (nonatomic, retain) MTAlarmScheduler *alarmScheduler;
@property (nonatomic, retain) MTAlarmStorage *alarmStorage;
@property (nonatomic, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CMSleepData *lastRecord;
@property (nonatomic) bool monitoring;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) MTSleepMetrics *sleepMetrics;
@property (nonatomic, retain) CMSleepTracker *sleepTracker;
@property (readonly) Class superclass;

+ (long long)_sleepMonitorWindowInMinutes;

- (void).cxx_destruct;
- (void)_beginMonitoring;
- (void)_checkMonitoring;
- (id)_lookupCurrentSleepMonitorWindow;
- (id)_lookupSleepMonitorWindowForDate:(id)arg1;
- (id)_nextScheduledWakeUpAlarmForDate:(id)arg1;
- (void)_queue_checkForOutOfBedEventInData:(id)arg1;
- (void)_queue_handleEarlyWakeUp;
- (void)_queue_handleSleepTrackingEvent;
- (void)_queue_handleTestWakeup;
- (void)_scheduleWakeUpForMonitorOnDate:(id)arg1;
- (void)_stopMonitoring;
- (id)alarmScheduler;
- (id)alarmStorage;
- (void)beginMonitoring;
- (void)checkMonitoring;
- (id /* block */)currentDateProvider;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithAlarmStorage:(id)arg1 alarmScheduler:(id)arg2 sleepMetrics:(id)arg3;
- (id)initWithAlarmStorage:(id)arg1 alarmScheduler:(id)arg2 sleepMetrics:(id)arg3 sleepTracker:(id)arg4 currentDateProvider:(id /* block */)arg5;
- (id)lastRecord;
- (bool)monitoring;
- (void)printDiagnostics;
- (id)serializer;
- (void)setAlarmScheduler:(id)arg1;
- (void)setAlarmStorage:(id)arg1;
- (void)setCurrentDateProvider:(id /* block */)arg1;
- (void)setLastRecord:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSleepMetrics:(id)arg1;
- (void)setSleepTracker:(id)arg1;
- (id)sleepMetrics;
- (id)sleepTracker;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)stopMonitoring;
- (void)userWentToSleep:(id)arg1;
- (void)userWokeUp:(id)arg1;
- (void)userWokeUpEarly:(id)arg1;

@end
