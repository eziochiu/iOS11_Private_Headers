/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCoder : NSObject

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)__categorizeException:(id)arg1 intoError:(id*)arg2;

- (bool)__failWithException:(id)arg1;
- (bool)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3;
- (void)__failWithExternalError:(id)arg1;
- (void)__setError:(id)arg1;
- (id)__tryDecodeObjectForKey:(id)arg1 error:(id*)arg2 decodeBlock:(id /* block */)arg3;
- (bool)_allowsValueCoding;
- (bool)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(bool)arg3;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (long long)decodeLongForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct CGPoint { double x1; double x2; })decodePoint;
- (struct CGPoint { double x1; double x2; })decodePointForKey:(id)arg1;
- (id)decodePropertyListForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeSize;
- (struct CGSize { double x1; double x2; })decodeSizeForKey:(id)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id*)arg1;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2 size:(unsigned long long)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (long long)decodingFailurePolicy;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeLong:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)error;
- (void)failWithError:(id)arg1;
- (struct _NSZone { }*)objectZone;
- (bool)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (unsigned int)systemVersion;
- (bool)validateAllowedClass:(Class)arg1 forKey:(id)arg2;
- (bool)validateClassSupportsSecureCoding:(Class)arg1;
- (long long)versionForClassName:(id)arg1;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

- (struct { long long x1; int x2; unsigned int x3; long long x4; })decodeCMTimeForKey:(id)arg1;
- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })decodeCMTimeMappingForKey:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })decodeCMTimeRangeForKey:(id)arg1;
- (void)encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

- (id)ls_decodeArrayWithValuesOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClass:(Class)arg2 forKey:(id)arg3;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClasses:(id)arg2 forKey:(id)arg3;
- (id)ls_decodeSetWithValuesOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)CA_supportedClasses;

- (bool)CA_decodeCGFloatArray:(double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (id)CA_decodeObjectForKey:(id)arg1;
- (void)CA_encodeCGFloatArray:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(bool)arg3;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)_ui_isInterprocess;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })decodeCGAffineTransformForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { double x1; double x2; })decodeCGVectorForKey:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })decodeDirectionalEdgeInsetsForKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (struct UIOffset { double x1; double x2; })decodeUIOffsetForKey:(id)arg1;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeUIOffset:(struct UIOffset { double x1; double x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })un_decodeCGRectForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })un_decodeCMTimeForKey:(id)arg1;
- (void)un_encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)un_encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

- (unsigned long long)decodeTheme;
- (unsigned long long)decodeThemeForKey:(id)arg1;
- (void)encodeTheme:(unsigned long long)arg1;
- (void)encodeTheme:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { double x1; double x2; })decodeCGVectorForKey:(id)arg1;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { double x1; double x2; })arg1 forKey:(id)arg2;

@end
