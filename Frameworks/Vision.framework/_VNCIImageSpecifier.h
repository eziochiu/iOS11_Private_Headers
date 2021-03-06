/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface _VNCIImageSpecifier : VNImageSpecifier {
    CIImage * _ciImage;
}

- (void).cxx_destruct;
- (id)ciImage;
- (id)description;
- (id)initWithCIImage:(id)arg1;
- (id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;

@end
