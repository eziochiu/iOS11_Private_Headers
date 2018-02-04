/* made by EzioChiu.
 */

@protocol UNSNotificationSchedulerDelegate <NSObject>

@optional

- (void)notificationScheduler:(UNSNotificationScheduler *)arg1 didChangeScheduledLocalNotifications:(NSArray *)arg2;
- (void)notificationScheduler:(UNSNotificationScheduler *)arg1 didFireLocalNotifications:(NSArray *)arg2;

@end
