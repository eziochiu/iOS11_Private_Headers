/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLActiveDownloadQueue : NSObject {
    bool  _FIFOQueue;
    unsigned long long  _maximumBatchSize;
    unsigned long long  _maximumConcurrentTransportTasks;
    NSString * _name;
    NSMutableArray * _transferTasks;
    NSMutableArray * _transportTasks;
}

@property (getter=isFIFOQueue, nonatomic, readonly) bool FIFOQueue;
@property (nonatomic, readonly) NSArray *allTransferTasks;
@property (nonatomic, readonly) unsigned long long countOfTransferTasks;
@property (nonatomic, readonly) unsigned long long countOfTransferTasksInTransportTasks;
@property (nonatomic, readonly) unsigned long long countOfTransportTasks;
@property (nonatomic, readonly) unsigned long long maximumBatchSize;
@property (nonatomic, readonly) unsigned long long maximumConcurrentTransportTasks;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)addTransferTask:(id)arg1;
- (void)addTransportTask:(id)arg1;
- (id)allTransferTasks;
- (unsigned long long)countOfTransferTasks;
- (unsigned long long)countOfTransferTasksInTransportTasks;
- (unsigned long long)countOfTransportTasks;
- (id)dequeueBatchOfTransferTasksDequeuedSize:(unsigned long long*)arg1;
- (id)dequeueLastTransportTask;
- (id)initWithName:(id)arg1 FIFOQueue:(bool)arg2 maximumBatchSize:(unsigned long long)arg3 maximumConcurrentTransportTasks:(unsigned long long)arg4;
- (bool)isFIFOQueue;
- (unsigned long long)maximumBatchSize;
- (unsigned long long)maximumConcurrentTransportTasks;
- (id)name;
- (void)removeAllTransferTasks;
- (void)removeTransferTask:(id)arg1;
- (void)removeTransportTask:(id)arg1;
- (id)status;

@end