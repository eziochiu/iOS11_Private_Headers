/* made by EzioChiu.
 */

@protocol UNUserNotificationCenterObserver <NSObject>

@optional

- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didChangePendingNotificationRequests:(NSArray *)arg2;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didDeliverNotifications:(NSArray *)arg2;

@end
