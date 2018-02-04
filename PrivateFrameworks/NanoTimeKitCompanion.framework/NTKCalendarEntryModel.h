/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCalendarEntryModel : NTKTimelineEntryModel {
    bool  _displayAsConflicting;
    bool  _displayAsFirstInDay;
    bool  _displayAsTomorrow;
    NSDate * _eventEndDate;
    NSDate * _eventStartDate;
    unsigned long long  _eventsInDayCount;
    NSString * _identifier;
    NSURL * _launchURL;
    unsigned long long  _overlappingEventCount;
    NSString * _primaryEventLocation;
    NSString * _primaryEventOrganizerName;
    NSString * _primaryEventTitle;
    NSString * _secondaryEventTitle;
}

@property (nonatomic) bool displayAsConflicting;
@property (nonatomic) bool displayAsFirstInDay;
@property (nonatomic) bool displayAsTomorrow;
@property (nonatomic, retain) NSDate *eventEndDate;
@property (nonatomic, retain) NSDate *eventStartDate;
@property (nonatomic) unsigned long long eventsInDayCount;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSURL *launchURL;
@property (nonatomic) unsigned long long overlappingEventCount;
@property (nonatomic, retain) NSString *primaryEventLocation;
@property (nonatomic, retain) NSString *primaryEventOrganizerName;
@property (nonatomic, retain) NSString *primaryEventTitle;
@property (nonatomic, retain) NSString *secondaryEventTitle;

+ (id)_entryForTemplateDescription:(id)arg1 family:(long long)arg2;
+ (id)_extraLargeCalendarImageProvider;
+ (id)_extraLargeConflictImageProvider;
+ (id)_modularSmallCalendarImageProvider;
+ (id)_modularSmallConflictImageProvider;
+ (id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5 timeZone:(id)arg6 options:(unsigned long long)arg7;
+ (id)_utilityCalendarImageProvider;
+ (id)circular:(id)arg1 isMedium:(bool)arg2;
+ (id)extraLarge:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)loadingEntryForFamily:(long long)arg1;
+ (id)lockedEntryForFamily:(long long)arg1;
+ (id)smallModular:(id)arg1;
+ (id)smallUtility:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)displayAsConflicting;
- (bool)displayAsFirstInDay;
- (bool)displayAsTomorrow;
- (id)eventEndDate;
- (id)eventStartDate;
- (unsigned long long)eventsInDayCount;
- (id)identifier;
- (id)launchURL;
- (unsigned long long)overlappingEventCount;
- (id)primaryEventLocation;
- (id)primaryEventOrganizerName;
- (id)primaryEventTitle;
- (id)secondaryEventTitle;
- (void)setDisplayAsConflicting:(bool)arg1;
- (void)setDisplayAsFirstInDay:(bool)arg1;
- (void)setDisplayAsTomorrow:(bool)arg1;
- (void)setEventEndDate:(id)arg1;
- (void)setEventStartDate:(id)arg1;
- (void)setEventsInDayCount:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setOverlappingEventCount:(unsigned long long)arg1;
- (void)setPrimaryEventLocation:(id)arg1;
- (void)setPrimaryEventOrganizerName:(id)arg1;
- (void)setPrimaryEventTitle:(id)arg1;
- (void)setSecondaryEventTitle:(id)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end