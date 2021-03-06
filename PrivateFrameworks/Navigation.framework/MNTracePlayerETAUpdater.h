/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTracePlayerETAUpdater : GEOETAUpdater {
    NSTimer * _delayTimer;
}

- (void).cxx_destruct;
- (void)_timerFiredWithResponse:(id)arg1 currentStep:(id)arg2 percentOfStepRemaining:(double)arg3 error:(id)arg4;
- (void)dealloc;
- (void)playETAUpdate:(id)arg1;
- (void)requestUpdate;
- (void)reset;
- (void)startUpdateRequests;

@end
