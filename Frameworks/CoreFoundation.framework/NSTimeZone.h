/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *name;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)abbreviationDictionary;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultTimeZone;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)resetSystemTimeZone;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (void)setDefaultTimeZone:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)systemTimeZone;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(long long)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;

- (unsigned long long)_cfTypeID;
- (id)abbreviation;
- (id)abbreviationForDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (double)daylightSavingTimeOffset;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (bool)isDaylightSavingTime;
- (bool)isDaylightSavingTimeForDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimeZone:(id)arg1;
- (bool)isNSTimeZone__;
- (id)localizedName:(long long)arg1 locale:(id)arg2;
- (id)name;
- (id)nextDaylightSavingTimeTransition;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (long long)secondsFromGMT;
- (long long)secondsFromGMTForDate:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

@end
