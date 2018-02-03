/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporter : NSObject <PFCloudKitSerializerDelegate> {
    NSMutableDictionary * _assetPathToSafeSaveURL;
    NSURL * _assetStorageURL;
    NSPersistentStoreCoordinator * _coordinator;
    CKDatabase * _database;
    NSCKImportOperation * _importOperation;
    PFCloudKitStoreMonitor * _monitor;
    NSCloudKitMirroringDelegateOptions * _options;
    NSCloudKitMirroringRequest * _request;
    NSMutableArray * _resolvedRelationships;
    NSSQLCore * _store;
    NSObject<OS_dispatch_queue> * _workQueue;
    CKRecordZone * _zone;
}

@property (nonatomic, readonly) NSDictionary *assetPathToSafeSaveURL;
@property (nonatomic, readonly) NSURL *assetStorageURL;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (nonatomic, readonly) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCKImportOperation *importOperation;
@property (nonatomic, readonly) PFCloudKitStoreMonitor *monitor;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) NSCloudKitMirroringRequest *request;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) CKRecordZone *zone;

- (void).cxx_destruct;
- (id)assetPathToSafeSaveURL;
- (id)assetStorageURL;
- (void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3;
- (void)cloudKitSerializer:(id)arg1 resolvedPendingRelationship:(id)arg2;
- (id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2;
- (id)coordinator;
- (id)database;
- (void)dealloc;
- (void)importIfNecessaryInTransaction:(id)arg1 completion:(id /* block */)arg2;
- (id)importOperation;
- (id)init;
- (id)initWithOptions:(id)arg1 request:(id)arg2 store:(id)arg3 workQueue:(id)arg4 zone:(id)arg5 andDatabase:(id)arg6;
- (id)monitor;
- (id)options;
- (void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4 completion:(id /* block */)arg5;
- (void)removeDownloadedAssetFiles;
- (id)request;
- (id)store;
- (id)workQueue;
- (id)zone;

@end
