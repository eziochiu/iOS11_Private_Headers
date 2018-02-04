/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXEventCacheEvictionManager : NSObject {
    int  _assertionsHeld;
    NSHashTable * _caches;
    bool  _disabled;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned long long  _memoryPressureStatus;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_evictAllExceptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_handleCurrentEvictionCriteriaLocked;
- (void)dealloc;
- (void)disable;
- (id)init;
- (void)rangeWasRequested;
- (void)registerCache:(id)arg1;
- (void)unregisterCache:(id)arg1;

@end