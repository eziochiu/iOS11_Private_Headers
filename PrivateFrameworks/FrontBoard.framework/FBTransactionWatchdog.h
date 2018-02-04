/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBTransactionWatchdog : BSWatchdog {
    FBTransaction * _transaction;
}

@property (nonatomic, readonly, retain) FBTransaction *transaction;

- (void)_dumpDebugInfo;
- (void)_watchdogTimerFired;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1;
- (void)invalidate;
- (id)transaction;

@end
