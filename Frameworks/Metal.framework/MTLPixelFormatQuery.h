/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLPixelFormatQuery : NSObject {
    <MTLDevice> * _device;
    long long  _iFeatureSet;
}

@property (readonly) <MTLDevice> *device;

- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)initWithFeatureSet:(unsigned long long)arg1;
- (bool)isASTCPixelFormatsSupported;
- (bool)isDepth24Stencil8PixelFormatSupported;
- (bool)supportsFeatureSet:(unsigned long long)arg1;

@end