/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingMobileTimerAdapter : HFAccessorySettingAdapter {
    MTAlarmManager * _alarmManagerForSynchronization;
    <HFAccessorySettingMobileTimerAdapterDelegate> * _delegate;
    unsigned long long  _mode;
}

@property (nonatomic, retain) MTAlarmManager *alarmManagerForSynchronization;
@property (nonatomic) <HFAccessorySettingMobileTimerAdapterDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long mode;

- (void).cxx_destruct;
- (void)_alarmDidFire:(id)arg1;
- (void)_alarmWasAdded:(id)arg1;
- (void)_alarmWasDeleted:(id)arg1;
- (void)_alarmWasUpdated:(id)arg1;
- (id)_homeKitAlarms;
- (void)_respondToAlarmManagerUpdate;
- (void)_setupAccessoryAdapterMode;
- (id)_submitAlarmsToHomeKit:(id)arg1;
- (id)_synchronizeHomeKitToMobileTimer;
- (id)_synchronizeMobileTimerToHomeKit;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)addAlarm:(id)arg1;
- (id)alarmDataContentSetting;
- (id)alarmManagerAlarms;
- (id)alarmManagerForSynchronization;
- (id)allAlarms;
- (id)delegate;
- (id)initWithAccessoryProfile:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1 mode:(unsigned long long)arg2;
- (id)loggedInAppleMusicAccountDSID;
- (unsigned long long)mode;
- (id)removeAlarm:(id)arg1;
- (void)setAlarmManagerForSynchronization:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)updateAlarm:(id)arg1;

@end
