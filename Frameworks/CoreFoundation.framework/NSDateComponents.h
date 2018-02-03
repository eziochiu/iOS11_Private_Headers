/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *date;
@property long long day;
@property long long era;
@property long long hour;
@property (getter=isLeapMonth) bool leapMonth;
@property long long minute;
@property long long month;
@property long long nanosecond;
@property long long quarter;
@property long long second;
@property (copy) NSTimeZone *timeZone;
@property (getter=isValidDate, readonly) bool validDate;
@property long long weekOfMonth;
@property long long weekOfYear;
@property long long weekday;
@property long long weekdayOrdinal;
@property long long year;
@property long long yearForWeekOfYear;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (long long)day;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)era;
- (unsigned long long)hash;
- (long long)hour;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLeapMonth;
- (bool)isLeapMonthSet;
- (bool)isValidDate;
- (bool)isValidDateInCalendar:(id)arg1;
- (long long)minute;
- (long long)month;
- (long long)nanosecond;
- (long long)quarter;
- (long long)second;
- (void)setCalendar:(id)arg1;
- (void)setDay:(long long)arg1;
- (void)setEra:(long long)arg1;
- (void)setHour:(long long)arg1;
- (void)setLeapMonth:(bool)arg1;
- (void)setMinute:(long long)arg1;
- (void)setMonth:(long long)arg1;
- (void)setNanosecond:(long long)arg1;
- (void)setQuarter:(long long)arg1;
- (void)setSecond:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (void)setWeek:(long long)arg1;
- (void)setWeekOfMonth:(long long)arg1;
- (void)setWeekOfYear:(long long)arg1;
- (void)setWeekday:(long long)arg1;
- (void)setWeekdayOrdinal:(long long)arg1;
- (void)setYear:(long long)arg1;
- (void)setYearForWeekOfYear:(long long)arg1;
- (id)timeZone;
- (long long)valueForComponent:(unsigned long long)arg1;
- (long long)week;
- (long long)weekOfMonth;
- (long long)weekOfYear;
- (long long)weekday;
- (long long)weekdayOrdinal;
- (long long)year;
- (long long)yearForWeekOfYear;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (unsigned long long)_ui_largerComponentsRelativeToComponent:(unsigned long long)arg1;
+ (id)_ui_namesForComponents:(unsigned long long)arg1;
+ (unsigned long long)_ui_smallerComponentsRelativeToComponent:(unsigned long long)arg1;
+ (unsigned long long)smaller:(bool)arg1 componentsRelativeToComponent:(unsigned long long)arg2;

- (id)_ui_conciseDescription;
- (void)_ui_setComponents:(id)arg1;
- (void)_ui_setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (long long)_ui_valueForComponent:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)isSameDayAsComponents:(id)arg1;
- (bool)isSameMonthAsComponents:(id)arg1;
- (bool)isSameYearAsComponents:(id)arg1;

@end
