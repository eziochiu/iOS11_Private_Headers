/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperation : NSObject {
    id  _private;
    int  _private1;
    int  _private1b;
}

@property (getter=isAsynchronous, readonly) bool asynchronous;
@property (getter=isCancelled, readonly) bool cancelled;
@property (copy) id /* block */ completionBlock;
@property (getter=isConcurrent, readonly) bool concurrent;
@property (readonly, copy) NSArray *dependencies;
@property (getter=isExecuting, readonly) bool executing;
@property (getter=isFinished, readonly) bool finished;
@property (copy) NSString *name;
@property long long qualityOfService;
@property long long queuePriority;
@property (getter=isReady, readonly) bool ready;
@property double threadPriority;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentOperation;
+ (id)keyPathsForValuesAffectingCancelled;
+ (id)keyPathsForValuesAffectingExecuting;
+ (id)keyPathsForValuesAffectingFinished;
+ (id)keyPathsForValuesAffectingIsCancelled;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;
+ (id)keyPathsForValuesAffectingReady;

- (id)__graphDescription:(unsigned long long)arg1;
- (id)_activity;
- (id /* block */)_copyCompletionBlock;
- (id)_implicitObservationInfo;
- (void)addDependency:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)cancel;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id)debugDescription;
- (id)dependencies;
- (id)description;
- (id)init;
- (bool)isAsynchronous;
- (bool)isCancelled;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)main;
- (id)name;
- (void*)observationInfo;
- (long long)qualityOfService;
- (long long)queuePriority;
- (void)removeDependency:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setQueuePriority:(long long)arg1;
- (void)setThreadPriority:(double)arg1;
- (void)start;
- (double)threadPriority;
- (void)waitUntilFinished;
- (void)waitUntilFinishedOrTimeout:(double)arg1;

@end
