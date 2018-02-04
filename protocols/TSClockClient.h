/* made by EzioChiu.
 */

@protocol TSClockClient <NSObject>

@optional

- (void)didBeginClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didChangeClockMasterForClock:(TSClock *)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(TSClock *)arg2;
- (void)didEndClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didProcessSync:(TSClock *)arg1;
- (void)didResetClock:(TSClock *)arg1;

@end
