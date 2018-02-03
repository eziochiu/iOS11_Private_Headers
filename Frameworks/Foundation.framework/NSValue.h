/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } CATransform3DValue;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } CGAffineTransformValue;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } CGPointValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } CGRectValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } CGSizeValue;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } CGVectorValue;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } UIEdgeInsetsValue;
@property (readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } UIKBHandwritingPointValue;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } UIOffsetValue;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } directionalEdgeInsetsValue;
@property (readonly) const char *objCType;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)value:(const void*)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithBytes:(const void*)arg1 objCType:(const char *)arg2;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithPointer:(const void*)arg1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithWeakObject:(id)arg1;

- (bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsValue;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void*)arg1;
- (void)getValue:(void*)arg1 size:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToValue:(id)arg1;
- (bool)isNSValue__;
- (id)nonretainedObjectValue;
- (const char *)objCType;
- (struct CGPoint { double x1; double x2; })pointValue;
- (void*)pointerValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeValue;
- (id)weakObjectValue;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (id)valueWithCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1;
+ (id)valueWithCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })CMTimeMappingValue;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })CMTimeRangeValue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)valueWithCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
+ (id)valueWithCAPoint3D:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;

- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })CAColorMatrixValue;
- (id)CAMLType;
- (struct CAPoint3D { double x1; double x2; double x3; })CAPoint3DValue;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })CATransform3DValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithCGVector:(struct CGVector { double x1; double x2; })arg1;
+ (id)valueWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithNSDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithUIKBHandwritingPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
+ (id)valueWithUIOffset:(struct UIOffset { double x1; double x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;
- (struct CGSize { double x1; double x2; })CGSizeValue;
- (struct CGVector { double x1; double x2; })CGVectorValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })UIEdgeInsetsValue;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })UIKBHandwritingPointValue;
- (struct UIOffset { double x1; double x2; })UIOffsetValue;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalEdgeInsetsValue;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)bs_valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)bs_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bs_valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })bs_CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })bs_CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bs_CGRectValue;
- (struct CGSize { double x1; double x2; })bs_CGSizeValue;
- (bool)bs_getValue:(out void*)arg1 ofSize:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;

- (struct CGPoint { double x1; double x2; })CGPointValue;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;

@end
