/* made by EzioChiu.
 */

@protocol WLKUINotificationsImpl

@required

- (WLKUINotificationCenter *)center;
- (void)post:(NSString *)arg1 :(NSString *)arg2 :(NSString *)arg3 :(NSDictionary *)arg4;
- (void)setCenter:(WLKUINotificationCenter *)arg1;

@end
