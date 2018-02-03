/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNumber : NSValue <NSFetchRequestResult>

@property (readonly) bool boolValue;
@property (readonly) BOOL charValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; } decimalValue;
@property (readonly, copy) NSString *description;
@property (readonly) double doubleValue;
@property (readonly) float floatValue;
@property (readonly) unsigned long long hash;
@property (readonly) int intValue;
@property (readonly) long long integerValue;
@property (readonly) long long longLongValue;
@property (readonly) long long longValue;
@property (readonly) short shortValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly) unsigned char unsignedCharValue;
@property (readonly) unsigned int unsignedIntValue;
@property (readonly) unsigned long long unsignedIntegerValue;
@property (readonly) unsigned long long unsignedLongLongValue;
@property (readonly) unsigned long long unsignedLongValue;
@property (readonly) unsigned short unsignedShortValue;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)numberWithBool:(bool)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithLong:(long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (bool)supportsSecureCoding;

- (bool)_allowsDirectEncoding;
- (long long)_cfNumberType;
- (unsigned long long)_cfTypeID;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (unsigned char)_getValue:(void*)arg1 forType:(long long)arg2;
- (long long)_reverseCompare:(id)arg1;
- (bool)boolValue;
- (BOOL)charValue;
- (Class)classForCoder;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValue;
- (unsigned long long)hash;
- (id)initWithBool:(bool)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (int)intValue;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNumber:(id)arg1;
- (bool)isNSNumber__;
- (long long)longLongValue;
- (long long)longValue;
- (short)shortValue;
- (id)stringValue;
- (unsigned char)unsignedCharValue;
- (unsigned int)unsignedIntValue;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (unsigned short)unsignedShortValue;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

@end
