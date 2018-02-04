/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation {
    id /* block */  _recordArchivedBlock;
    NSArray * _recordIDs;
}

@property (nonatomic, copy) id /* block */ recordArchivedBlock;
@property (nonatomic, retain) NSArray *recordIDs;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id /* block */)recordArchivedBlock;
- (id)recordIDs;
- (void)setRecordArchivedBlock:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;

@end