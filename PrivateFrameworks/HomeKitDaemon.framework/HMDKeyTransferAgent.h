/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyTransferAgent : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMDHomeManager * _homeManager;
    bool  _inProgress;
    unsigned long long  _residentProvisioningStatus;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (getter=isInProgress, nonatomic) bool inProgress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) unsigned long long residentProvisioningStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)beginPairingWithCompletionHandler:(id /* block */)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (bool)isInProgress;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)resetConfig;
- (unsigned long long)residentProvisioningStatus;
- (void)setHomeManager:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
