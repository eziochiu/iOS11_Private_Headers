/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperationQueue : NSObject {
    id  _private;
    void * _reserved;
}

@property long long maxConcurrentOperationCount;
@property (copy) NSString *name;
@property (readonly) unsigned long long operationCount;
@property (readonly, copy) NSArray *operations;
@property long long qualityOfService;
@property (getter=isSuspended) bool suspended;
@property NSObject<OS_dispatch_queue> *underlyingQueue;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentQueue;
+ (id)mainQueue;

- (id)__graphDescription;
- (void)_fc_addUncancellableOperationForReactorID:(id)arg1 block:(id /* block */)arg2;
- (void)_fc_addUncancellableOperationWithBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isSuspended;
- (long long)maxConcurrentOperationCount;
- (id)name;
- (unsigned long long)operationCount;
- (id)operations;
- (bool)overcommitsOperations;
- (long long)qualityOfService;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setMaxConcurrentOperationCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOvercommitsOperations:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setUnderlyingQueue:(id)arg1;
- (id)underlyingQueue;
- (void)waitUntilAllOperationsAreFinished;

@end
