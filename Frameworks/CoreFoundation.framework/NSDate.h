/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double timeIntervalSinceReferenceDate;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)date;
+ (id)dateWithDate:(id)arg1;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (id)dateWithTimeIntervalSinceNow:(double)arg1;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)arg1;
+ (id)distantFuture;
+ (id)distantPast;
+ (bool)supportsSecureCoding;
+ (double)timeIntervalSinceReferenceDate;

- (unsigned long long)_cfTypeID;
- (id)addTimeInterval:(double)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingTimeInterval:(double)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)earlierDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (bool)isEqualToDate:(id)arg1;
- (bool)isInSameDayAsDate:(id)arg1;
- (bool)isInToday;
- (bool)isInTomorrow;
- (bool)isInYesterday;
- (bool)isNSDate__;
- (id)laterDate:(id)arg1;
- (double)timeIntervalSince1970;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)timeIntervalSinceNow;
- (double)timeIntervalSinceReferenceDate;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;

- (id)_web_RFC1123DateString;
- (long long)_web_compareDay:(id)arg1;
- (bool)_web_isToday;
- (Class)classForCoder;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary

+ (id)dateForDaysSince1970:(int)arg1;
+ (int)daysSince1970;

- (int)daysSince1970;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)bs_dateByAddingDays:(long long)arg1;
- (bool)isAfterDate:(id)arg1;
- (bool)isBeforeDate:(id)arg1;

@end
