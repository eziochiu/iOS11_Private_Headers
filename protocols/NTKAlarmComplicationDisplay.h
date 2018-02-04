/* made by EzioChiu.
 */

@protocol NTKAlarmComplicationDisplay <NTKComplicationDisplay>

@required

- (void)setStateActiveWithDate:(NSDate *)arg1;
- (void)setStateAllAlarmsOff;
- (void)setStateNoAlarms;
- (void)setStateSnoozingWithDuration:(double)arg1;

@optional

- (void)setAlarmComplicationNameText:(NSString *)arg1;

@end
