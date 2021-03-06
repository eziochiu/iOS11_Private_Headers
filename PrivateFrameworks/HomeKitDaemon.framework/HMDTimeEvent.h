/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTimeEvent : HMDEvent <HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    HMDBackgroundTaskAgentTimer * _btaTimer;
    bool  _repetitive;
}

@property (nonatomic, readonly) HMDBackgroundTaskAgentTimer *btaTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) bool repetitive;
@property (readonly) Class superclass;

+ (bool)isValidAbsoluteDateComponents:(id)arg1;
+ (bool)isValidOffsetDateComponents:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_activate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_initialize;
- (id)_nextTimerDate;
- (void)_reactiveTriggerAfterDelay;
- (void)_updateRepetitive;
- (id)btaTimer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (bool)isActive;
- (bool)repetitive;
- (void)timerFired:(id)arg1;

@end
