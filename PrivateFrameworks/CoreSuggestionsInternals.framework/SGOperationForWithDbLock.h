/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGOperationForWithDbLock : NSBlockOperation {
    NSObject<OS_dispatch_semaphore> * _semaphoreFinish;
    NSObject<OS_dispatch_semaphore> * _semaphoreStart;
}

- (void).cxx_destruct;
- (void)block;
- (void)complete;
- (id)init;
- (void)waitForStart;

@end
