/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKRampManager : NSObject {
    NSObject<OS_dispatch_queue> * _ckQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;

+ (id)sharedInstance;

- (id)_CKUtilitiesSharedInstance;
- (void)_fetchLatestRampStateFromCK:(id /* block */)arg1;
- (id)_rampUpRecordID;
- (void)_scheduleOperation:(id)arg1;
- (bool)_shouldSendPriorityRequest;
- (void)_writeRampStateAllowed:(bool)arg1 promoted:(bool)arg2 visible:(bool)arg3;
- (void)cachedRampState:(id /* block */)arg1;
- (id)ckQueue;
- (void)dealloc;
- (void)fetchLatestRampStateFromCK:(id /* block */)arg1;
- (id)init;

@end
