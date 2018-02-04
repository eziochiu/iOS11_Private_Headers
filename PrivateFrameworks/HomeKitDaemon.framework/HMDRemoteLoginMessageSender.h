/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginMessageSender : HMFObject <HMFLogging> {
    HMDDevice * _remoteDevice;
    HMDCentralMessageDispatcher * _remoteMessageDispatcher;
    NSUUID * _target;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDDevice *remoteDevice;
@property (nonatomic, readonly) HMDCentralMessageDispatcher *remoteMessageDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *target;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageDispatcher:(id)arg4;
- (id)logIdentifier;
- (id)remoteDevice;
- (id)remoteMessageDispatcher;
- (void)sendRemoteMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)target;
- (id)workQueue;

@end
