/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttendeeChange : EKParticipantChange

+ (void)fetchAttendeeChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAttendeeChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAttendeeChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;

@end
