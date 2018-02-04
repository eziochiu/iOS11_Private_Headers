/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYMetricLogger : NSObject {
    AWDServerConnection * _connection;
    AWDCompanionSyncReceiveEvent * _lastReceiveMetric;
    NSObject<OS_dispatch_source> * _lastReceiveMetricSource;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_bufferNewReceiptMetricForMessage:(id)arg1 service:(id)arg2;
- (void)_sendLastReceiveMetric;
- (id)init;
- (void)postErrorInformation:(id)arg1 forService:(id)arg2;
- (void)postFullSyncDuration:(double)arg1 onMaster:(bool)arg2 forService:(id)arg3;
- (void)postReceiptOfMessage:(id)arg1 forService:(id)arg2;
- (void)postSequenceErrorOfType:(int)arg1 sequenceNumber:(unsigned long long)arg2 forService:(id)arg3;
- (void)updateLastReceivedMessageWithProcessingTime:(double)arg1;

@end