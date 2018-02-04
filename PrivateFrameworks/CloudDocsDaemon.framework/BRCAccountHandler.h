/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {
    NSString * _currentAccountID;
    <BRCAccountHandlerDelegate> * _delegate;
    bool  _hasSetMigrationComplete;
    NSObject<OS_dispatch_queue> * _migrationStatusSetterQueue;
    NSObject<OS_dispatch_queue> * _pushQueue;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    NSMutableDictionary * _syncPolicyByFolderType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BRCAccountHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *pushQueue;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;

+ (void)_migrateAccountIfNecessaryForAccountID:(id)arg1;
+ (id)accountIDPath;
+ (id)dbAccountID;
+ (bool)destroyCurrentAccountSynchronously;
+ (id)icloudDriveAccountID;
+ (id)mobileDocsAccountID;
+ (id)primaryiCloudAccount;
+ (id)primaryiCloudAccountID;

- (void).cxx_destruct;
- (void)__destroySessionWithIntents:(id)arg1;
- (void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
- (bool)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (void)_destroyCurrentSessionSynchronously;
- (void)_handleAccountDidChange;
- (void)_handleAccountWillChange;
- (bool)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1;
- (void)_updateAccountToAccountID:(id)arg1;
- (bool)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)destroyCurrentSessionSynchronously;
- (id)init;
- (void)jetsamCloudDocsApps;
- (void)markMigrationCompletedForDSID:(id)arg1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)pushQueue;
- (void)reloadSyncedFolderPolicies;
- (void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(bool)arg1;
- (id)session;
- (bool)setDBAccountID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(bool)arg3 completion:(id /* block */)arg4;
- (void)setSyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)startAndLoadCurrentAccountSynchronously;
- (long long)syncPolicyforSyncedFolderType:(unsigned long long)arg1;

@end