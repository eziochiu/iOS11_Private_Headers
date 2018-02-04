/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <BSDescriptionProviding, NSCoding> {
    bool  _archiveSchedulingQueue_dirty;
    bool  _archiveSchedulingQueue_scheduled;
    NSMutableArray * _archiveSchedulingQueue_synchronizeCompletions;
    unsigned long long  _bytesWaitingToWriteOut;
    unsigned long long  _clientCount;
    XBSnapshotContainerIdentity * _containerIdentity;
    XBSnapshotManifestIdentity * _identity;
    NSFileManager * _imageAccessFileManger;
    BSAtomicSignal * _invalidatedSignal;
    unsigned long long  _pendingOperations;
    BSTimer * _reapingTimer;
    NSMutableDictionary * _snapshotGroupsByID;
}

@property (nonatomic, readonly, copy) XBSnapshotContainerIdentity *containerIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) XBSnapshotManifestIdentity *identity;
@property (readonly) Class superclass;

+ (void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3;
+ (long long)_defaultOutputFormat;
+ (void)_flushManifestQueue;
+ (void)_queue_noteManifestInvalidated:(id)arg1;
+ (id)_snapshotPredicateForRequest:(id)arg1;
+ (id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(bool)arg3;
+ (void)relinquishManifest:(id)arg1;

- (void).cxx_destruct;
- (id)_allSnapshotGroups;
- (void)_commonInit;
- (id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2;
- (id)_createSnapshotWithGroupID:(id)arg1 newSnapshotCreator:(id /* block */)arg2;
- (id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2;
- (bool)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2;
- (id)_initWithContainerIdentity:(id)arg1;
- (void)_noteDirtied;
- (void)_queue_accessSnapshotsWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_queue_checkClientCount;
- (void)_queue_decrementClientCount;
- (void)_queue_deletePaths:(id)arg1;
- (void)_queue_deleteSnapshots:(id)arg1;
- (void)_queue_doArchiveWithCompletions:(id)arg1;
- (void)_queue_gatherPaths:(id)arg1 forSnapshot:(id)arg2;
- (void)_queue_incrementClientCount;
- (void)_queue_reallyCheckClientCount;
- (void)_queue_reapExpiredAndInvalidSnapshots;
- (id)_queue_snapshotGroupForID:(id)arg1 creatingIfNeeded:(bool)arg2;
- (id)_queue_snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)_queue_snapshotsMatchingPredicate:(id)arg1;
- (bool)_queue_validateWithContainerIdentity:(id)arg1;
- (void)_scheduleArchivingIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_synchronizeDataStoreWithCompletion:(id /* block */)arg1;
- (void)beginSnapshotAccessTransaction:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)bundleIdentifier;
- (id)containerIdentity;
- (id)containerPath;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (void)dealloc;
- (void)deleteAllSnapshots;
- (void)deleteSnapshot:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(id /* block */)arg2;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* block */)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(bool)arg3 didGenerateImage:(id /* block */)arg4 didSaveImage:(id /* block */)arg5;
- (id)identity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (id)snapshotsForGroupID:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end