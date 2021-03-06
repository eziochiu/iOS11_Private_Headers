/* made by EzioChiu.
 */

@protocol MSPMapsPushDaemonProxyObserver <MSPRemoteModelAccessDelegate>

@required

- (void)favoritesDidChange;
- (void)historyDidChange;
- (void)pushDaemonProxyReceivedNotificationData:(NSData *)arg1 forType:(NSString *)arg2 recordIdentifier:(NSString *)arg3;

@end
