/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmManager : NSObject {
    MTAlarmCache * _cache;
    struct MTXPCConnectionProvider { Class x1; } * _connectionProvider;
    MTAlarmManagerExportedObject * _exportedObject;
    MTMetrics * _metrics;
    NSNotificationCenter * _notificationCenter;
}

@property (nonatomic, retain) MTAlarmCache *cache;
@property (nonatomic, readonly) MTXPCConnectionProvider *connectionProvider;
@property (nonatomic, retain) MTAlarmManagerExportedObject *exportedObject;
@property (nonatomic, retain) MTMetrics *metrics;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;

+ (id)assistantSyncNotificationName;
+ (id)daySettingToString:(unsigned long long)arg1 longVersion:(bool)arg2 everyWeekdayVersion:(bool)arg3 showNever:(bool)arg4;
+ (void)warmUp;

- (void).cxx_destruct;
- (void)_getCachedAlarmsWithFuture:(id)arg1 finishBlock:(id /* block */)arg2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)arg1 metrics:(id)arg2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)addAlarm:(id)arg1;
- (id)alarmAtIndex:(unsigned long long)arg1;
- (unsigned long long)alarmCount;
- (unsigned long long)alarmCountIncludingSleepAlarm:(bool)arg1;
- (id)alarmWithIDString:(id)arg1;
- (id)alarms;
- (id)alarmsIncludingSleepAlarm:(bool)arg1;
- (id)alarmsSync;
- (id)alarmsSyncIncludingSleepAlarm:(bool)arg1;
- (id)cache;
- (void)checkIn;
- (struct MTXPCConnectionProvider { Class x1; }*)connectionProvider;
- (void)dealloc;
- (id)dismissAlarmWithIdentifier:(id)arg1;
- (id)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2;
- (id)exportedObject;
- (unsigned long long)firingAlarmCount;
- (unsigned long long)indexForAlarm:(id)arg1;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithMetrics:(id)arg1;
- (id)metrics;
- (id)nextAlarm;
- (id)nextAlarmSync;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(bool)arg3;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(bool)arg3;
- (id)notificationCenter;
- (void)reconnect;
- (id)removeAlarm:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (id)sleepAlarm;
- (id)sleepAlarmSync;
- (id)snoozeAlarmWithIdentifier:(id)arg1;
- (id)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2;
- (id)updateAlarm:(id)arg1;

@end
