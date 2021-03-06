/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSStopWatch : NSObject {
    double  _startTimestamp;
}

@property (nonatomic, readonly) double elapsedTime;

- (id)_initWithStartTime:(double)arg1;
- (double)_timeIntervalSinceInternalClockReference;
- (double)elapsedTime;
- (id)init;
- (id)initWithDistantPast;
- (void)reset;

@end
