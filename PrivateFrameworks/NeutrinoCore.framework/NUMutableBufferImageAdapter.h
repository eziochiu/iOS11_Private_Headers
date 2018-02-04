/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage> {
    <NUMutableBuffer> * _mutableBuffer;
}

@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) NUImageLayout *layout;
@property (readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;
@property (readonly, copy) NURegion *validRegion;

- (void).cxx_destruct;
- (bool)copyBufferStorage:(id)arg1 region:(id)arg2 atPoint:(struct { long long x1; long long x2; })arg3;
- (bool)copySurfaceStorage:(id)arg1 device:(id)arg2 region:(id)arg3 atPoint:(struct { long long x1; long long x2; })arg4;
- (id)init;
- (id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (id)initWithMutableBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;
- (void)writeBufferRegion:(id)arg1 withBlock:(id /* block */)arg2;

@end
