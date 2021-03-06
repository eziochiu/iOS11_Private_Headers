/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDCloudStoreManager : NSObject {
    bool  _accountChangedNotificationReceived;
    NSString * _archivePath;
    NSObject<OS_dispatch_group> * _batchUpdateGroup;
    NSMutableDictionary * _changeTokensByZoneID;
    bool  _cloudStoreSetupInProgress;
    NSMutableDictionary * _completedFetchTimestampByZoneID;
    CKContainer * _container;
    <PDCloudStoreDataSource> * _dataSource;
    <PDCloudStoreManagerDelegate> * _delegate;
    NSMutableSet * _initalizationCompletionHandlers;
    unsigned long long  _nextExpectedState;
    PKPeerPaymentAccount * _peerPaymentAccount;
    bool  _resettingCloudStore;
    NSObject<OS_dispatch_source> * _retryTimer;
    bool  _shouldInvalidateCloudStore;
    NSMutableDictionary * _subscriptionsByIdentifier;
    long long  _suspendCount;
    PKPaymentTransactionProcessor * _transactionProcessor;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableDictionary * _zonesByName;
}

@property (nonatomic, readonly, copy) NSString *archivePath;
@property (nonatomic, readonly) <PDCloudStoreDataSource> *dataSource;
@property (nonatomic) <PDCloudStoreManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_attachToContainer;
- (id)_cachedFetchTimestamps;
- (id)_cachedServerChangeTokens;
- (void)_callInitalizationCompletionHandlersWithSuccess:(bool)arg1;
- (bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;
- (bool)_canSyncTransactionToCloudKit:(id)arg1;
- (id)_cannotPerformActionErrorWithFailureReason:(id)arg1;
- (void)_cloudStoreAccountChanged:(id)arg1;
- (void)_cloudStoreAccountInformationWithCompletion:(id /* block */)arg1;
- (void)_createZone:(id)arg1 completion:(id /* block */)arg2;
- (void)_createZoneSubscriptionWithIdentifier:(id)arg1 forZone:(id)arg2 completion:(id /* block */)arg3;
- (void)_deleteAllZoneSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)_deleteAllZonesWithCompletion:(id /* block */)arg1;
- (void)_detachFromContainerWithState:(unsigned long long)arg1;
- (bool)_ensureState:(unsigned long long)arg1;
- (void)_fetchAllSubscriptionsWithCompletion:(id /* block */)arg1;
- (void)_fetchCounterpartRecordsWithFetchedRecords:(id)arg1 zone:(id)arg2 shouldUpdateLocalDatabase:(bool)arg3 completion:(id /* block */)arg4;
- (void)_fetchRecordZonesWithCompletion:(id /* block */)arg1;
- (void)_fetchRecordsWithQuery:(id)arg1 cursor:(id)arg2 fetchedRecords:(id)arg3 zone:(id)arg4 completion:(id /* block */)arg5;
- (void)_fetchRecordsWithQuery:(id)arg1 zone:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchRecordsWithRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)_isTransactionItemFromRecordType:(id)arg1;
- (void)_keychainSyncFinishedFired;
- (void)_modifyRecordsOperationWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(id /* block */)arg3;
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;
- (id)_parseRecords:(id)arg1 shouldUpdateLocalDatabase:(bool)arg2;
- (id)_passUniqueIdentifierForCloudStoreRecord:(id)arg1;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (void)_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 retryCount:(unsigned long long)arg3 shouldRetry:(bool)arg4 completion:(id /* block */)arg5;
- (id)_recordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (void)_resetChangeTokens;
- (void)_resetSubscriptionsByIdentifier;
- (void)_resetZonesByName;
- (void)_retryContainerStateWithError:(id)arg1 retryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_saveServerChangeTokens;
- (void)_saveServerFetchTimestamps;
- (id)_serverChangeTokenFromArchiveData:(id)arg1;
- (id)_serviceIdentifierForRecord:(id)arg1;
- (id)_serviceIdentifierForRecordType:(id)arg1 recordID:(id)arg2;
- (void)_setContainerState:(unsigned long long)arg1;
- (void)_setContainerState:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_setContainerState:(unsigned long long)arg1 retryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_startFetchRetryTimerWithCompletion:(id /* block */)arg1;
- (void)_stopFetchRetryTimer;
- (id)_strippedRecordName:(id)arg1;
- (void)_subscriptionOperationWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 completion:(id /* block */)arg3;
- (id)_zoneForCloudStoreCodingItemClass:(Class)arg1;
- (void)_zoneOperationWithZonesToSave:(id)arg1 zonesIDsToDelete:(id)arg2 completion:(id /* block */)arg3;
- (void)allItemsOfClassType:(Class)arg1 storeLocally:(bool)arg2 completion:(id /* block */)arg3;
- (id)archivePath;
- (bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (bool)canSyncTransactionToCloudKitWithBackingData:(bool)arg1 passUniqueIdentifier:(id)arg2 serviceIdentifier:(id)arg3;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (id)dataSource;
- (id)delegate;
- (void)fetchAndStoreChangesWithCompletion:(id /* block */)arg1;
- (void)fetchAndStoreChangesWithForceFetch:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2;
- (void)initialCloudDatabaseSetupWithCompletion:(id /* block */)arg1;
- (id)insertOrUpdatePaymentTransaction:(id)arg1 withOriginDeviceID:(id)arg2 forPassUniqueIdentifier:(id)arg3 paymentApplication:(id)arg4 withInsertionMode:(unsigned long long)arg5 performTruncation:(bool)arg6;
- (void)invalidateCloudStore;
- (id)lastFetchDateForZoneWithName:(id)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)resetContainerWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)simulateCloudStorePushWithCompletion:(id /* block */)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(id /* block */)arg3;

@end
