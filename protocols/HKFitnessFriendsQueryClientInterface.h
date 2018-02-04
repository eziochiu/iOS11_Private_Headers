/* made by EzioChiu.
 */

@protocol HKFitnessFriendsQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverArchivedFriendList:(NSData *)arg1 queryUUID:(NSUUID *)arg2;

@end
