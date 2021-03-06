/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTTriggerEventMonitor : NSObject <VTTriggerEventMonitorDelegate> {
    NSXPCConnection * _connection;
    int  _notifyToken;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_attemptConnection;
- (void)_attemptConnectionInQueue;
- (void)_enableTriggerEventXPCNotification:(bool)arg1;
- (void)_invalidateConnection;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)earlyDetected;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)voiceTriggered;

@end
