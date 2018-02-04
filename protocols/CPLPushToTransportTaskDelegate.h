/* made by EzioChiu.
 */

@protocol CPLPushToTransportTaskDelegate <CPLEngineSyncTaskDelegate>

@required

- (<CPLEngineTransportCheckRecordsExistenceTask> *)task:(void *)arg1 wantsToCheckRecordsExistence:(void *)arg2 fetchRecordProperties:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 10: CPLPushToTransportTask *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (<CPLEngineTransportUploadBatchTask> *)task:(void *)arg1 wantsToPushBatch:(void *)arg2 progressBlock:(void *)arg3 continuationBlock:(void *)arg4; // needs 4 arg types, found 15: CPLPushToTransportTask *, CPLChangeBatch *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, float, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
