/* made by EzioChiu.
 */

@protocol MSPCloudSynchronizerDelegate <NSObject>

@required

- (NSDate *)storedBoostDateForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (NSUUID *)storedClientRegistrationIdentifierForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (<NSObject><NSCopying><NSCoding> *)storedUserIdentityForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 didFailAttemptingTask:(MSPCloudRepeatableTask *)arg2 withError:(NSError *)arg3 reattemptingAfterDate:(NSDate *)arg4;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewBoostDate:(NSDate *)arg2;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewClientRegistrationIdentifier:(NSUUID *)arg2;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewUserIdentity:(id <NSObject><NSCopying><NSCoding>)arg2;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 userIdentityDidLogOutWithFollowUp:(long long)arg2;
- (MSPCloudRepeatableTask *)taskToDownloadCloudStoreByErasingLocalStoreForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (MSPCloudRepeatableTask *)taskToMergeLocalAndCloudStoresForSynchronizer:(MSPCloudSynchronizer *)arg1;

@end
