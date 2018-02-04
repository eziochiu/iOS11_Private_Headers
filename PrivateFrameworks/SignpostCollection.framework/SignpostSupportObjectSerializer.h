/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
 */

@interface SignpostSupportObjectSerializer : NSObject {
    SignpostSupportObjectExtractor * _extractor;
    unsigned long long  _maxBatchSize;
    unsigned long long  _maxBytesSize;
    NSMutableArray * _outstandingLogMessage;
    NSMutableArray * _outstandingSignpostObjects;
    id /* block */  _serializedLogMessageBlock;
    id /* block */  _serializedSignpostEventBlock;
}

@property (nonatomic, retain) SignpostSupportObjectExtractor *extractor;
@property (nonatomic) unsigned long long maxBatchSize;
@property (nonatomic) unsigned long long maxBytesSize;
@property (nonatomic, retain) NSMutableArray *outstandingLogMessage;
@property (nonatomic, retain) NSMutableArray *outstandingSignpostObjects;
@property (nonatomic, copy) id /* block */ serializedLogMessageBlock;
@property (nonatomic, copy) id /* block */ serializedSignpostEventBlock;

- (void).cxx_destruct;
- (id)_dataArrayForSignpostSupportObjectArray:(id)arg1 errorOut:(id*)arg2;
- (bool)_hasProcessingBlocks;
- (id)_sanityCheckParameters;
- (id)extractor;
- (id)init;
- (unsigned long long)maxBatchSize;
- (unsigned long long)maxBytesSize;
- (id)outstandingLogMessage;
- (id)outstandingSignpostObjects;
- (bool)serializeLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id*)arg4;
- (bool)serializeNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id*)arg2;
- (id /* block */)serializedLogMessageBlock;
- (id /* block */)serializedSignpostEventBlock;
- (void)setExtractor:(id)arg1;
- (void)setMaxBatchSize:(unsigned long long)arg1;
- (void)setMaxBytesSize:(unsigned long long)arg1;
- (void)setOutstandingLogMessage:(id)arg1;
- (void)setOutstandingSignpostObjects:(id)arg1;
- (void)setSerializedLogMessageBlock:(id /* block */)arg1;
- (void)setSerializedSignpostEventBlock:(id /* block */)arg1;

@end