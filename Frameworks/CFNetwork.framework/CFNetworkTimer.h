/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface CFNetworkTimer : NSObject {
    double  _interval;
    double  _lastPauseTime;
    double  _lastResumeTime;
    double  _runTime;
    NSObject<OS_dispatch_source> * _timer;
}

- (void)cancelTimer;
- (void)dealloc;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pauseTimer;
- (void)resumeCallbacksForTimer;
- (void)resumeTimer;
- (void)setCancelCallbacks:(id /* block */)arg1;
- (void)setTimer:(double)arg1;
- (void)suspendCallbacksForTimer;

@end
