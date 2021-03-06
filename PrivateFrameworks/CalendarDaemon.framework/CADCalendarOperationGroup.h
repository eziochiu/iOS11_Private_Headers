/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADCalendar:(id)arg1 hasEvents:(id /* block */)arg2;
- (void)CADCalendar:(id)arg1 hasReminders:(id /* block */)arg2;
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(id /* block */)arg2;

@end
