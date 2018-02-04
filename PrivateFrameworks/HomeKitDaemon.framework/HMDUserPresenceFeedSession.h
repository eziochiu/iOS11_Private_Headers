/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserPresenceFeedSession : NSObject <HMFLogging, HMFTimerDelegate> {
    <HMDUserPresenceFeedSessionDelegate> * _delegate;
    HMDHomeManager * _homeManager;
    HMUserPresenceAuthorization * _presenceAuthStatus;
    HMUserPresenceCompute * _presenceComputeStatus;
    HMDUserPresenceRegion * _presenceRegionStatus;
    HMDUserPresenceUpdateReason * _reason;
    HMDCentralMessageDispatcher * _remoteMessageDispatcher;
    HMDDevice * _residentDevice;
    NSUUID * _sessionID;
    NSDate * _statusChangeDate;
    HMDUserPresenceFeedRetryTimer * _statusUpdateRetryTimer;
    NSUUID * _targetUUID;
    HMDUser * _user;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDUserPresenceFeedSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHomeManager *homeManager;
@property (nonatomic, readonly) HMUserPresenceAuthorization *presenceAuthStatus;
@property (nonatomic, readonly) HMUserPresenceCompute *presenceComputeStatus;
@property (nonatomic, readonly) HMDUserPresenceRegion *presenceRegionStatus;
@property (nonatomic, retain) HMDUserPresenceUpdateReason *reason;
@property (nonatomic, readonly) HMDCentralMessageDispatcher *remoteMessageDispatcher;
@property (nonatomic, readonly) HMDDevice *residentDevice;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (nonatomic, readonly) NSDate *statusChangeDate;
@property (nonatomic, retain) HMDUserPresenceFeedRetryTimer *statusUpdateRetryTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *targetUUID;
@property (nonatomic, readonly) HMDUser *user;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callDelegate;
- (void)_handleStatusUpdateMessageError:(id)arg1 responseTime:(double)arg2;
- (void)_send;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)homeManager;
- (id)initWithDelegate:(id)arg1 homeManager:(id)arg2 workQueue:(id)arg3 targetUUID:(id)arg4 remoteMessageDispatcher:(id)arg5 residentDevice:(id)arg6 user:(id)arg7 presenceAuthStatus:(id)arg8 presenceComputeStatus:(id)arg9 presenceRegionStatus:(id)arg10 reason:(id)arg11;
- (id)logIdentifier;
- (id)presenceAuthStatus;
- (id)presenceComputeStatus;
- (id)presenceRegionStatus;
- (id)reason;
- (id)remoteMessageDispatcher;
- (id)residentDevice;
- (void)send;
- (id)sessionID;
- (void)setReason:(id)arg1;
- (void)setStatusUpdateRetryTimer:(id)arg1;
- (id)statusChangeDate;
- (id)statusUpdateRetryTimer;
- (id)targetUUID;
- (void)timerDidFire:(id)arg1;
- (id)user;
- (id)workQueue;

@end