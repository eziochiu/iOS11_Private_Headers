/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation {
    id /* block */  _changeTokenUpdatedBlock;
    bool  _fetchAllChanges;
    id /* block */  _fetchDatabaseChangesCompletionBlock;
    CKServerChangeToken * _previousServerChangeToken;
    id /* block */  _recordZoneWithIDChangedBlock;
    id /* block */  _recordZoneWithIDWasDeletedBlock;
    id /* block */  _recordZoneWithIDWasPurgedBlock;
    unsigned long long  _resultsLimit;
    CKServerChangeToken * _serverChangeToken;
    long long  _status;
}

@property (nonatomic, copy) id /* block */ changeTokenUpdatedBlock;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id /* block */ recordZoneWithIDChangedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic) long long status;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id /* block */)changeTokenUpdatedBlock;
- (bool)fetchAllChanges;
- (id /* block */)fetchDatabaseChangesCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (void)performCKOperation;
- (id)previousServerChangeToken;
- (id /* block */)recordZoneWithIDChangedBlock;
- (id /* block */)recordZoneWithIDWasDeletedBlock;
- (id /* block */)recordZoneWithIDWasPurgedBlock;
- (unsigned long long)resultsLimit;
- (id)serverChangeToken;
- (void)setChangeTokenUpdatedBlock:(id /* block */)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchDatabaseChangesCompletionBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasPurgedBlock:(id /* block */)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_loggingValues;
- (void)ic_removeAllCompletionBlocks;

@end