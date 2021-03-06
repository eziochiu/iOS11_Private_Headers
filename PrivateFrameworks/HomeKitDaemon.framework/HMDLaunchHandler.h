/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLaunchHandler : HMFObject {
    int  _beingConfigured;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSMutableSet * _relaunchTriggeringClients;
}

@property (nonatomic) int beingConfigured;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (nonatomic, retain) NSMutableSet *relaunchTriggeringClients;

+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)_reevaluate;
- (void)_removeAssertionPlist;
- (void)_saveAssertionPlist;
- (int)beingConfigured;
- (void)beingConfigured:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)deregisterForRelaunch:(id)arg1;
- (id)handlerQueue;
- (id)init;
- (void)registerForRelaunch:(id)arg1;
- (id)relaunchTriggeringClients;
- (void)setBeingConfigured:(int)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setRelaunchTriggeringClients:(id)arg1;

@end
