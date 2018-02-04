/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSnapshotCacheRequestHandler : HMFObject <HMDSnapshotRequestHandlerProtocol, HMFLogging, HMFTimerDelegate> {
    NSString * _logString;
    NSMutableDictionary * _snapshotCacheMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logString;
@property (nonatomic, readonly) NSMutableDictionary *snapshotCacheMap;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addSnapshotFileToCache:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 logID:(id)arg2;
- (id)logIdentifier;
- (id)logString;
- (void)removeSnapshotFileToCache:(id)arg1 error:(id)arg2;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setSnapshotFileToCache:(id)arg1 proactiveSessionID:(id)arg2;
- (id)snapshotCacheMap;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end