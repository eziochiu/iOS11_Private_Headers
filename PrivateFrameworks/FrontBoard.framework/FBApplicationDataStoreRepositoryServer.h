/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationDataStoreRepositoryServer : FBSystemServiceFacility <FBApplicationDataStoreRepositoryServerClientDelegate> {
    <FBApplicationDataStoreRepository> * _dataStore;
}

@property (nonatomic, retain) <FBApplicationDataStoreRepository> *dataStore;

+ (id)sharedInstance;

- (void)_handleGetAvailableDataStores:(id)arg1;
- (void)_handleGetObjectForKey:(id)arg1;
- (void)_handleRemoveAllObjects:(id)arg1;
- (void)_handleRemoveObjectForKey:(id)arg1 client:(id)arg2;
- (void)_handleSetChangesInterest:(id)arg1 client:(id)arg2;
- (void)_handleSetObjectForKey:(id)arg1 client:(id)arg2;
- (void)_handleSetPrefetchedKeys:(id)arg1 client:(id)arg2;
- (void)_handleSynchronize:(id)arg1;
- (id)_init;
- (void)applicationDataStoreRepositoryClient:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 bundleID:(id)arg4;
- (void)applicationDataStoreRespositoryClient:(id)arg1 repositoryInvalidatedForBundleID:(id)arg2;
- (Class)classForClient:(id)arg1;
- (id)dataStore;
- (void)dealloc;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)prerequisiteMilestones;
- (void)setDataStore:(id)arg1;

@end
