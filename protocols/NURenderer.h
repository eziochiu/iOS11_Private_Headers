/* made by EzioChiu.
 */

@protocol NURenderer <NSObject>

@required

- (CIRenderTask *)renderImage:(CIImage *)arg1 toDestination:(CIRenderDestination *)arg2 bounds:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 error:(out id*)arg4;

@end
