/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseZoneMigrationOperation : FCOperation {
    NSMutableSet * _createdZones;
    FCCKPrivateDatabase * _database;
    id /* block */  _migrationCompletionHandler;
    <FCCKDatabaseMigrator> * _migrator;
    CKRecordZoneID * _recordZoneID;
    NSMutableArray * _resultRecordIDsEligibleForDeletion;
    NSMutableArray * _resultZoneIDsEligibleForDeletion;
}

@property (nonatomic, retain) NSMutableSet *createdZones;
@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic, copy) id /* block */ migrationCompletionHandler;
@property (nonatomic, retain) <FCCKDatabaseMigrator> *migrator;
@property (nonatomic, copy) CKRecordZoneID *recordZoneID;
@property (nonatomic, retain) NSMutableArray *resultRecordIDsEligibleForDeletion;
@property (nonatomic, retain) NSMutableArray *resultZoneIDsEligibleForDeletion;

- (void).cxx_destruct;
- (void)_createZones:(id)arg1 completion:(id /* block */)arg2;
- (void)_migrateAndUpdateRecords:(id)arg1 completion:(id /* block */)arg2;
- (void)_migrateEverythingWithPreviousServerChangeToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_migrateRecordIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_migrateRecords:(id)arg1 completion:(id /* block */)arg2;
- (id)_migratedRecord:(id)arg1 error:(id*)arg2;
- (id)_pruneRecords:(id)arg1;
- (void)_saveMigratedRecords:(id)arg1 completion:(id /* block */)arg2;
- (id)_uncreatedZonesInRecords:(id)arg1;
- (id)createdZones;
- (id)database;
- (id /* block */)migrationCompletionHandler;
- (id)migrator;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)recordZoneID;
- (id)resultRecordIDsEligibleForDeletion;
- (id)resultZoneIDsEligibleForDeletion;
- (void)setCreatedZones:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setMigrationCompletionHandler:(id /* block */)arg1;
- (void)setMigrator:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultRecordIDsEligibleForDeletion:(id)arg1;
- (void)setResultZoneIDsEligibleForDeletion:(id)arg1;
- (bool)validateOperation;

@end
