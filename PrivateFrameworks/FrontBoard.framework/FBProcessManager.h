/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBUIProcessManagerInternal> {
    FBApplicationLibrary * _appLibrary;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    FBApplicationProcessWatchdogPolicy * _defaultWatchdogPolicy;
    FBApplicationProcess * _foregroundAppProcess;
    NSHashTable * _observers;
    FBApplicationProcess * _preferredForegroundAppProcess;
    NSMutableSet * _preventIdleSleepReasons;
    NSMapTable * _processesByBundleID;
    NSMapTable * _processesByPID;
    NSObject<OS_dispatch_queue> * _processesQueue;
    NSObject<OS_dispatch_queue> * _queue;
    FBApplicationProcess * _systemAppProcess;
    BKSProcessAssertion * _systemAppProcessAssertion;
    NSMutableDictionary * _workspacesByClientIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) FBApplicationProcess *systemApplicationProcess;

+ (id)sharedInstance;

- (id)_processesQueue_processForPID:(int)arg1;
- (id)_processesQueue_processesForBundleIdentifier:(id)arg1;
- (void)_queue_addProcess:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_evaluateForegroundEventRouting;
- (void)_queue_notifyObserversUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_queue_removeProcess:(id)arg1 withBundleID:(id)arg2 pid:(int)arg3;
- (id)_serviceClientAddedWithProcessHandle:(id)arg1;
- (void)_setPreferredForegroundApplicationProcess:(id)arg1;
- (void)_setSystemIdleSleepDisabled:(bool)arg1 forReason:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)allApplicationProcesses;
- (id)allProcesses;
- (id)applicationProcessForPID:(int)arg1;
- (id)applicationProcessesForBundleIdentifier:(id)arg1;
- (id)createApplicationProcessForBundleID:(id)arg1;
- (id)createApplicationProcessForBundleID:(id)arg1 withExecutionContext:(id)arg2;
- (id)currentProcess;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidateClientWorkspace:(id)arg1;
- (void)noteProcess:(id)arg1 didUpdateState:(id)arg2;
- (void)noteProcessDidExit:(id)arg1;
- (bool)ping;
- (id)processForPID:(int)arg1;
- (id)processesForBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)systemApplicationProcess;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;
- (id)workspaceForSceneClientWithIdentity:(id)arg1;

@end
