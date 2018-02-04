/* made by EzioChiu.
 */

@protocol NUMutableImage <NUImage>

@required

- (bool)copyBufferStorage:(id <NUImageStorage>)arg1 region:(NURegion *)arg2 atPoint:(struct { long long x1; long long x2; })arg3;
- (bool)copySurfaceStorage:(id <NUSurfaceStorage>)arg1 device:(id <NUDevice>)arg2 region:(NURegion *)arg3 atPoint:(struct { long long x1; long long x2; })arg4;

@end
