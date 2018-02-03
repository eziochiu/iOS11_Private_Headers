/* made by EzioChiu.
 */

@protocol SBSAccelerometerDelegate <NSObject>

@required

- (void)accelerometer:(SBSAccelerometer *)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;

@optional

- (void)accelerometer:(SBSAccelerometer *)arg1 didChangeDeviceOrientation:(int)arg2;

@end
