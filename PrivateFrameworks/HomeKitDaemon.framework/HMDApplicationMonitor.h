/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationMonitor : HMFObject <HMFTimerDelegate> {
    HMDApplicationRegistry * _appRegistry;
    <HMDApplicationMonitorDelegate> * _delegate;
    BKSApplicationStateMonitor * _monitor;
    NSMutableSet * _pendingTerminatedApplications;
    NSMutableSet * _processes;
    HMFTimer * _spiClientTerminationDelayTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) bool activeHomeKitApps;
@property (nonatomic) HMDApplicationRegistry *appRegistry;
@property (nonatomic, readonly) NSSet *backgroundApps;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDApplicationMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *foregroundApps;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BKSApplicationStateMonitor *monitor;
@property (nonatomic, readonly) NSMutableSet *pendingTerminatedApplications;
@property (nonatomic, readonly) NSMutableSet *processes;
@property (nonatomic, retain) HMFTimer *spiClientTerminationDelayTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)applicationStateDescription:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_callActiveHomeKitAppDelegate:(bool)arg1;
- (void)_callAppStateChangeDelegate:(id)arg1;
- (bool)_delegateConformsAndRespondsToSelector:(SEL)arg1;
- (void)_handleAppStateChangedInfo:(id)arg1;
- (void)_postAppTerminatedNotification:(id)arg1;
- (unsigned long long)_translateApplicationState:(unsigned int)arg1;
- (void)_updateProcessInfo:(id)arg1 info:(id)arg2;
- (bool)activeHomeKitApps;
- (id)activeRequests;
- (void)addProcess:(id)arg1;
- (id)appRegistry;
- (id)applicationInfoForApplication:(id)arg1;
- (id)applicationInfoForPID:(int)arg1;
- (id)backgroundApps;
- (id)backgroundToForegroundApps;
- (void)dealloc;
- (id)delegate;
- (id)foregroundAppIdentifiers;
- (id)foregroundApps;
- (bool)infoIsForViewService:(id)arg1;
- (id)init;
- (id)monitor;
- (id)pendingTerminatedApplications;
- (id)processInfoForPID:(int)arg1;
- (id)processes;
- (void)removeProcess:(id)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpiClientTerminationDelayTimer:(id)arg1;
- (id)spiClientTerminationDelayTimer;
- (void)start;
- (void)timerDidFire:(id)arg1;
- (unsigned long long)translateApplicationStateForInfo:(id)arg1 processInfo:(id)arg2;
- (id)workQueue;

@end
