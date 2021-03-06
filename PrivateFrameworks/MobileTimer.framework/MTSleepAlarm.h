/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSleepAlarm : NSObject <MTAlarmSoundInfoProvider, NAEquatable, NSCopying> {
    NSString * _alarmSoundIdentifier;
    long long  _alarmSoundType;
    NSNumber * _alarmSoundVolume;
    NSNumber * _bedtimeReminderMinutes;
    bool  _enabled;
    long long  _repeatSchedule;
    NSDateComponents * _sleepTime;
    NSString * _vibrationID;
    NSDateComponents * _wakeTime;
}

@property (nonatomic, copy) NSString *alarmSoundIdentifier;
@property (nonatomic) long long alarmSoundType;
@property (nonatomic, copy) NSNumber *alarmSoundVolume;
@property (nonatomic, copy) NSNumber *bedtimeReminderMinutes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long repeatSchedule;
@property (nonatomic, copy) NSDateComponents *sleepTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vibrationID;
@property (nonatomic, copy) NSDateComponents *wakeTime;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_repeatString;
- (id)alarmSoundIdentifier;
- (long long)alarmSoundType;
- (id)alarmSoundVolume;
- (id)bedtimeReminderMinutes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (long long)repeatSchedule;
- (void)setAlarmSoundIdentifier:(id)arg1;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
- (void)setAlarmSoundType:(long long)arg1;
- (void)setAlarmSoundVolume:(id)arg1;
- (void)setBedtimeReminderMinutes:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setRepeatSchedule:(long long)arg1;
- (void)setSleepTime:(id)arg1;
- (void)setVibrationID:(id)arg1;
- (void)setWakeTime:(id)arg1;
- (id)sleepTime;
- (id)vibrationID;
- (id)wakeTime;

@end
