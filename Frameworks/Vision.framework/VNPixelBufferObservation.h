/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPixelBufferObservation : VNObservation {
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __CVBuffer { }*)pixelBuffer;

@end
