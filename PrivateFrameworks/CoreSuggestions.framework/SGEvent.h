/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGEvent : SGObject <SGEventForGeocode> {
    NSURL * _URL;
    NSDate * _creationDate;
    NSDate * _end;
    NSTimeZone * _endTimeZone;
    NSObject<OS_dispatch_queue> * _geocodeQueue;
    SGEvent * _geocoded;
    bool  _isAllDay;
    NSDate * _lastModifiedDate;
    NSArray * _locations;
    unsigned long long  _naturalLanguageEventAttributes;
    NSString * _naturalLanguageEventTypeIdentifier;
    NSString * _notes;
    NSString * _opaqueKey;
    NSArray * _schemaOrg;
    NSDate * _start;
    NSTimeZone * _startTimeZone;
    NSArray * _tags;
    NSString * _title;
    NSString * _uniqueKey;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, readonly) NSTimeZone *endTimeZone;
@property (getter=isGeocodeCandidate, nonatomic, readonly) bool geocodeCandidate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllDay;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSArray *locations;
@property (getter=isNaturalLanguageEvent, nonatomic, readonly) bool naturalLanguageEvent;
@property (nonatomic, readonly) unsigned long long naturalLanguageEventAttributes;
@property (nonatomic, readonly) NSString *naturalLanguageEventTypeIdentifier;
@property (nonatomic, readonly) NSString *notes;
@property (nonatomic, readonly) NSString *opaqueKey;
@property (nonatomic, readonly) NSArray *schemaOrg;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSTimeZone *startTimeZone;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueKey;

+ (id)eventWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)_applyTimeRangeToEKEvent:(id)arg1;
- (id)_componentsForDate:(id)arg1 timeZone:(id)arg2 isEnd:(bool)arg3 calendar:(id)arg4;
- (id)_naturalLanguageEventTagsInTags:(id)arg1;
- (id)creationDate;
- (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)endDateComponents;
- (id)endTimeZone;
- (id)firstLocationForType:(unsigned long long)arg1;
- (id)geocodeEndDate;
- (id)geocodeEndTimeZone;
- (id)geocodeLocations;
- (id)geocodeStartDate;
- (id)geocodeStartTimeZone;
- (void)geocodeWithCallback:(id /* block */)arg1;
- (id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tagStrings:(id)arg15 URL:(id)arg16 naturalLanguageEventIdentifier:(id)arg17 naturalLanguageEventAttributes:(unsigned long long)arg18 schemaOrg:(id)arg19;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(bool)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEvent:(id)arg1;
- (bool)isGeocodeCandidate;
- (bool)isNaturalLanguageEvent;
- (id)lastModifiedDate;
- (id)locations;
- (void)mergeIntoEKEvent:(id)arg1;
- (void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2;
- (void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 preservingValuesDifferentFrom:(id)arg3;
- (unsigned long long)naturalLanguageEventAttributes;
- (id)naturalLanguageEventTypeIdentifier;
- (id)notes;
- (id)opaqueKey;
- (id)schemaOrg;
- (id)start;
- (id)startDateComponents;
- (id)startTimeZone;
- (id)tags;
- (id)title;
- (id)toEKEventWithStore:(id)arg1;
- (id)uniqueKey;

@end