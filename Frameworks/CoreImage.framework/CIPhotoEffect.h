/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPhotoEffect : CIFilter {
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (int)_defaultVersion;
- (int)_maxVersion;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;
- (id)init;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;

@end
