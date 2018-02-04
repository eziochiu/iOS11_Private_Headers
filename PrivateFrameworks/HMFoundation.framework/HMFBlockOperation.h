/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFBlockOperation : NSBlockOperation {
    NSError * _error;
    NSObject<OS_dispatch_semaphore> * _finishedSemaphore;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) unsigned long long dispatchTimeout;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *finishedSemaphore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_cancelWithError:(id)arg1;
- (id)_error;
- (void)_finish;
- (id)_finishedSemaphore;
- (void)_setError:(id)arg1;
- (void)_setFinishedSemaphore:(id)arg1;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)dispatchTimeout;
- (id)error;
- (void)finish;
- (id)finishedSemaphore;
- (id)init;
- (void)setError:(id)arg1;
- (void)setFinishedSemaphore:(id)arg1;
- (void)start;
- (id)workQueue;

@end
