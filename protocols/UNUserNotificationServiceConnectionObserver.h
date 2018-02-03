/* made by EzioChiu.
 */

@protocol UNUserNotificationServiceConnectionObserver <NSObject>

@optional

- (void)didChangePendingNotificationRequests:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didDeliverNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;

@end
