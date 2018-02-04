/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSyncOperation : HMFObject {
    bool  _cloudConflict;
    HMFTimer * _delayTimer;
    NSUUID * _identifier;
    id /* block */  _operationBlock;
    unsigned long long  _operationType;
    unsigned long long  _versionFlags;
    NSString * _zoneName;
}

@property (getter=isCloudConflict, nonatomic) bool cloudConflict;
@property (nonatomic, retain) HMFTimer *delayTimer;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) id /* block */ operationBlock;
@property (nonatomic, readonly) unsigned long long operationType;
@property (nonatomic, readonly) unsigned long long versionFlags;
@property (nonatomic, readonly) NSString *zoneName;

+ (id)cloudFetchSyncOperationWithCloudConflict:(bool)arg1 block:(id /* block */)arg2;
+ (id)cloudForcePushSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(id /* block */)arg2;
+ (id)cloudPushSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(id /* block */)arg2;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(id /* block */)arg1;
+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(bool)arg2 block:(id /* block */)arg3;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(id /* block */)arg2;
+ (id)idsMergeSyncOperationWithVersionFlags:(unsigned long long)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)delayTimer;
- (id)description;
- (id)identifier;
- (id)initWithOperationType:(unsigned long long)arg1 zoneName:(id)arg2 versionFlags:(unsigned long long)arg3 syncBlock:(id /* block */)arg4;
- (bool)isCloudConflict;
- (id /* block */)operationBlock;
- (unsigned long long)operationType;
- (void)setCloudConflict:(bool)arg1;
- (void)setDelayTimer:(id)arg1;
- (void)setOperationBlock:(id /* block */)arg1;
- (unsigned long long)versionFlags;
- (id)zoneName;

@end
