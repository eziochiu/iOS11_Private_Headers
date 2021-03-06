/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitLightingContour : CIFilter {
    CIVector * inputCenter;
    CIVector * inputEyes;
    NSNumber * inputHeight;
    CIImage * inputImage;
    NSNumber * inputOrientation;
    NSNumber * inputRotate;
    NSNumber * inputScale;
    NSNumber * inputStrength;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIVector *inputEyes;
@property (nonatomic, retain) NSNumber *inputHeight;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputOrientation;
@property (nonatomic, retain) NSNumber *inputRotate;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_contourLightKernel;
- (id)_extractRed;
- (id)inputCenter;
- (id)inputEyes;
- (id)inputHeight;
- (id)inputImage;
- (id)inputOrientation;
- (id)inputRotate;
- (id)inputScale;
- (id)inputStrength;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputEyes:(id)arg1;
- (void)setInputHeight:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOrientation:(id)arg1;
- (void)setInputRotate:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
