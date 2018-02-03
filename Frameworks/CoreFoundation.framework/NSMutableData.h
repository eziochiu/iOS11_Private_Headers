/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableData : NSData

@property unsigned long long length;
@property (readonly) void*mutableBytes;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)dataWithLength:(unsigned long long)arg1;

- (bool)_isCompact;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)appendData:(id)arg1;
- (Class)classForCoder;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (void*)mutableBytes;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2;
- (void)replaceBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3;
- (void)resetBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setData:(id)arg1;
- (void)setLength:(unsigned long long)arg1;

@end
