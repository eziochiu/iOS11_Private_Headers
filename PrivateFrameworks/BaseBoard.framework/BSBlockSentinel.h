/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBlockSentinel : NSObject {
    unsigned long long  _count;
    NSObject<OS_dispatch_queue> * _explicitQueue;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _internalQueue;
    BSAction * _sentinelAction;
}

+ (id)sentinelWithExceptionReason:(id)arg1;
+ (id)sentinelWithQueue:(id)arg1 completion:(id /* block */)arg2;
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 signalHandler:(id /* block */)arg3;
+ (id)sentinelWithQueue:(id)arg1 signalHandler:(id /* block */)arg2;
+ (id)sentinelWithSignalCount:(unsigned long long)arg1 exceptionReason:(id)arg2;

- (void)_performSynchronously:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (bool)signal;
- (bool)signalWithContext:(id)arg1;

@end