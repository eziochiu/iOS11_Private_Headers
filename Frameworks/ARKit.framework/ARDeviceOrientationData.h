/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARDeviceOrientationData : NSObject <ARMutableSensorData, NSSecureCoding> {
    struct { 
        double m11; 
        double m12; 
        double m13; 
        double m21; 
        double m22; 
        double m23; 
        double m31; 
        double m32; 
        double m33; 
    }  _rotationMatrix;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } rotationMatrix;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })rotationMatrix;
- (void)setRotationMatrix:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end