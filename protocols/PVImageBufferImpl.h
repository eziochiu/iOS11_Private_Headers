/* made by EzioChiu.
 */

@protocol PVImageBufferImpl <NSObject>

@required

- (bool)canCreateCVPixelBuffer;
- (struct CGImage { }*)cgImage;
- (bool)cvPixelBufferRequiresCopy;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })cvPixelBufferWithColorSpace:(PVColorSpace *)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
