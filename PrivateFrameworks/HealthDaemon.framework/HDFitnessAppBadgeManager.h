/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessAppBadgeManager : NSObject {
    NSHashTable * _providers;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)registerProvider:(id)arg1;
- (void)requestBadgeUpdate;
- (void)unregisterProvider:(id)arg1;

@end
