/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PCMatrix44Double : NSObject <NSCoding, NSCopying> {
    double  _m;
    struct PCMatrix44Tmpl<double> { double x1[4][4]; } * _pcMatrix;
}

- (id)array;
- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (double)doubleValueAtRow:(unsigned int)arg1 col:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)getDoubles:(double)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubles:(double)arg1;
- (id)initWithDoubles:(double)arg1 external:(bool)arg2;
- (id)initWithPCMatrix:(struct PCMatrix44Tmpl<double> { double x1[4][4]; }*)arg1;
- (bool)invert;
- (bool)invert2D;
- (bool)isEqual:(id)arg1;
- (bool)isIdentity;
- (void)leftFlipAboutY:(double)arg1;
- (void)leftMult:(id)arg1;
- (void)leftRotate:(double)arg1 axis:(int)arg2;
- (void)leftScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)leftShearX:(double)arg1 shearY:(double)arg2;
- (void)leftTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)makeIdentity;
- (struct { unsigned char x1[16]; })md5;
- (id)newPlanarTransformTo:(id)arg1;
- (id)newTransformTo:(id)arg1;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; }*)pcMatrix;
- (void)rightMult:(id)arg1;
- (void)rightRotate:(double)arg1 axis:(int)arg2;
- (void)rightScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)rightShearX:(double)arg1 shearY:(double)arg2;
- (void)rightTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)scaleSizeX:(double)arg1 sizeY:(double)arg2 sizeZ:(double)arg3 scaledSizeX:(double*)arg4 scaledSizeY:(double*)arg5 scaledSizeZ:(double*)arg6;
- (void)setDoubleValue:(double)arg1 atRow:(unsigned int)arg2 col:(unsigned int)arg3;
- (void)setDoubles:(double)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })transformInfo;
- (void)transpose;

@end