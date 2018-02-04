/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBRecurrenceGenerator : NSObject {
    bool  _allDay;
    NSCalendar * _calendar;
    NSArray * _daysOfTheMonth;
    NSArray * _daysOfTheWeek;
    NSArray * _daysOfTheYear;
    unsigned long long  _duration;
    NSDate * _endDate;
    NSDate * _eventEndDate;
    NSDate * _eventStartDate;
    NSTimeZone * _eventTimeZone;
    int  _frequency;
    int  _interval;
    NSArray * _monthsOfTheYear;
    NSArray * _setPositions;
    bool  _shouldPinMonthDays;
    int  _weekStart;
    NSArray * _weeksOfTheYear;
}

@property (nonatomic) bool allDay;
@property (nonatomic, copy) NSArray *daysOfTheMonth;
@property (nonatomic, copy) NSArray *daysOfTheWeek;
@property (nonatomic, copy) NSArray *daysOfTheYear;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *eventEndDate;
@property (nonatomic, copy) NSDate *eventStartDate;
@property (nonatomic, copy) NSTimeZone *eventTimeZone;
@property (nonatomic, copy) NSArray *monthsOfTheYear;
@property (nonatomic, copy) NSArray *setPositions;
@property (nonatomic, copy) NSArray *weeksOfTheYear;

- (void).cxx_destruct;
- (double)_convertAbsoluteTime:(double)arg1 fromTimeZone:(id)arg2 toTimeZone:(id)arg3;
- (id)_copyDailyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copyOccurrenceDatesWithBirthdayEvent:(void*)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(bool)arg6;
- (id)_copySimpleYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (id)_copyYearlyOccurrencesWithInitialDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 count:(unsigned long long)arg4;
- (bool)_isSimpleYearlyRecurrence;
- (void)_prepareForCalRecurrence:(void*)arg1 locked:(bool)arg2;
- (void)_setupForCalEvent:(void*)arg1 locked:(bool)arg2;
- (bool)_validateCalDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 pinned:(bool)arg2;
- (bool)allDay;
- (id)computeRecurrenceEndDate:(unsigned long long)arg1;
- (id)computeRecurrenceEndDateForCalEvent:(void*)arg1 recurrenceRule:(void*)arg2 count:(unsigned long long)arg3 locked:(bool)arg4;
- (id)copyOccurrenceDatesBetweenStartDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 timeZone:(id)arg3 limit:(long long)arg4;
- (id)copyOccurrenceDatesWithCalEvent:(void*)arg1 startDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 endDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(bool)arg6;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (id)endDate;
- (id)eventEndDate;
- (id)eventStartDate;
- (id)eventTimeZone;
- (id)init;
- (id)monthsOfTheYear;
- (void)setAllDay:(bool)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEventEndDate:(id)arg1;
- (void)setEventStartDate:(id)arg1;
- (void)setEventTimeZone:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (id)setPositions;
- (void)setSetPositions:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (id)weeksOfTheYear;

@end