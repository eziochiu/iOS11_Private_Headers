/* made by EzioChiu.
 */

@protocol WBSHistoryServiceProtocol <WBSHistoryConnectionProtocol>

@required

- (void)registerForRemoteHistoryNotifications;
- (void)unregisterForRemoteHistoryNotifications;

@end
