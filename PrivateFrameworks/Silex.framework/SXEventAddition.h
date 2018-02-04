/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEventAddition : SXAddition {
    SXAction * _action;
    NSTimeZone * _timeZone;
    NSDate * cachedEndDate;
    NSDate * cachedStartDate;
    bool  endDateIsAllDay;
    NSTimeZone * endTimeZone;
    bool  startDateIsAllDay;
    NSTimeZone * startTimeZone;
}

@property (nonatomic, readonly) bool allDay;
@property (nonatomic, retain) NSDate *cachedEndDate;
@property (nonatomic, retain) NSDate *cachedStartDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic) bool endDateIsAllDay;
@property (nonatomic, retain) NSTimeZone *endTimeZone;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic) bool startDateIsAllDay;
@property (nonatomic, retain) NSTimeZone *startTimeZone;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *title;

+ (id)typeString;

- (void).cxx_destruct;
- (id)action;
- (bool)allDay;
- (id)cachedEndDate;
- (id)cachedStartDate;
- (id)calendarEventWithStore:(id)arg1;
- (id)dateFromString:(id)arg1 containedTime:(bool*)arg2 containedTimeZone:(id*)arg3;
- (bool)endDateIsAllDay;
- (id)endDateWithValue:(id)arg1 withType:(int)arg2;
- (id)endTimeZone;
- (void)setCachedEndDate:(id)arg1;
- (void)setCachedStartDate:(id)arg1;
- (void)setEndDateIsAllDay:(bool)arg1;
- (void)setEndTimeZone:(id)arg1;
- (void)setStartDateIsAllDay:(bool)arg1;
- (void)setStartTimeZone:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (bool)startDateIsAllDay;
- (id)startDateWithValue:(id)arg1 withType:(int)arg2;
- (id)startTimeZone;
- (id)timeZone;
- (bool)validRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
