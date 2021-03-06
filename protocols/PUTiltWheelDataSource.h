/* made by EzioChiu.
 */

@protocol PUTiltWheelDataSource <NSObject>

@required

- (unsigned long long)tiltWheelMarkedIndicatorStep:(PUTiltWheel *)arg1;
- (long long)tiltWheelMaximumIndicatedDegree:(PUTiltWheel *)arg1;
- (long long)tiltWheelMinimumIndicatedDegree:(PUTiltWheel *)arg1;
- (unsigned long long)tiltWheelNumericIndicatorStep:(PUTiltWheel *)arg1;
- (int)tiltWheelOrientation:(PUTiltWheel *)arg1;

@end
