/* made by EzioChiu.
 */

@protocol HDWorkoutEventObserver <NSObject>

@required

- (void)workoutManager:(HDWorkoutManager *)arg1 didReceiveEvent:(_HKWorkoutEvent *)arg2;

@end
