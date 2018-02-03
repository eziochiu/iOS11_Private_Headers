/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDelayedPresentationContext : NSObject {
    id /* block */  _cancellationHandler;
    bool  _enableUserInteraction;
    NSInvocation * _presentInvocation;
    long long  _reqcnt;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, retain) NSInvocation *presentInvocation;

- (void).cxx_destruct;
- (void)beginDelayedPresentation;
- (void)cancelDelayedPresentation:(bool)arg1;
- (id /* block */)cancellationHandler;
- (long long)decrementRequestCount;
- (id)delayingController;
- (void)finishDelayedPresentation:(id)arg1;
- (long long)incrementRequestCount;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(id /* block */)arg2;
- (id)invocationTarget;
- (id)presentInvocation;
- (long long)requestCount;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setPresentInvocation:(id)arg1;

@end