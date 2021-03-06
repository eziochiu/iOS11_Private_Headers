/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECConcurrentLIFOQueue : NSObject {
    NSObject<OS_dispatch_queue> * _concurrencyLimitMutationQueue;
    NSObject<OS_dispatch_semaphore> * _concurrencySemaphore;
    unsigned long long  _concurrentDispatchLimit;
    NSMutableArray * _queue;
    NSObject<OS_dispatch_queue> * _queueMutationQueue;
}

@property (nonatomic) unsigned long long concurrentDispatchLimit;
@property (nonatomic, retain) NSMutableArray *queue;

- (void).cxx_destruct;
- (void)_consumeBlock;
- (unsigned long long)concurrentDispatchLimit;
- (void)enqueueBlock:(id /* block */)arg1;
- (void)enqueueBlocksFromArray:(id)arg1;
- (id)init;
- (id)initWithConcurrentDispatchLimit:(unsigned long long)arg1;
- (id)queue;
- (void)setConcurrentDispatchLimit:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;

@end
