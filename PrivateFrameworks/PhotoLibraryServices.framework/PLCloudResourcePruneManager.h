/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResourcePruneManager : NSObject {
    PLCloudPhotoLibraryManager * _cplManager;
    PLPhotoLibrary * _photoLibrary;
    bool  _stopped;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)_nonOriginalResourceTypes;
+ (id)_originalResourceTypes;

- (id)_colorAwareResourceTypes;
- (long long)_fetchResourcesForPruningWithBudget:(long long)arg1 batchHandler:(id /* block */)arg2;
- (void)_handleCacheDeleteRegistration;
- (id)_identifierForResource:(id)arg1;
- (long long)_localResourcesSize;
- (id)_predicateForCPLResourceTypes:(id)arg1;
- (id)_predicateForPrune;
- (long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)_updateLocalSRGBFileForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)_updateLocalStateForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)dealloc;
- (long long)diskSpaceToPrune;
- (id)init;
- (id)initWithCPLManager:(id)arg1;
- (long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)pruneStatusForDebug:(bool)arg1;
- (void)startAutomaticPruneWithBudget:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (void)updateCacheDeletePurgeableAmount;

@end
