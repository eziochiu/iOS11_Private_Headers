/* made by EzioChiu.
 */

@protocol UNUserNotificationClientProtocol <NSObject>

@required

- (void)didChangePendingNotificationRequests:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didDeliverNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;

@end
