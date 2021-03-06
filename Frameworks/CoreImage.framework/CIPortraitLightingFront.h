/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitLightingFront : CIFilter {
    CIVector * inputBottom1;
    CIVector * inputBottom2;
    NSNumber * inputBrighten;
    CIVector * inputCenter1;
    CIVector * inputCenter2;
    NSNumber * inputContrast;
    NSNumber * inputHeight1;
    NSNumber * inputHeight2;
    CIImage * inputImage;
    NSNumber * inputRotate1;
    NSNumber * inputRotate2;
    NSNumber * inputStrength;
    NSNumber * inputWidth1;
    NSNumber * inputWidth2;
}

@property (nonatomic, retain) CIVector *inputBottom1;
@property (nonatomic, retain) CIVector *inputBottom2;
@property (nonatomic, retain) NSNumber *inputBrighten;
@property (nonatomic, retain) CIVector *inputCenter1;
@property (nonatomic, retain) CIVector *inputCenter2;
@property (nonatomic, retain) NSNumber *inputContrast;
@property (nonatomic, retain) NSNumber *inputHeight1;
@property (nonatomic, retain) NSNumber *inputHeight2;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRotate1;
@property (nonatomic, retain) NSNumber *inputRotate2;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputWidth1;
@property (nonatomic, retain) NSNumber *inputWidth2;

+ (id)customAttributes;

- (id)_dualLightKernel;
- (id)inputBottom1;
- (id)inputBottom2;
- (id)inputBrighten;
- (id)inputCenter1;
- (id)inputCenter2;
- (id)inputContrast;
- (id)inputHeight1;
- (id)inputHeight2;
- (id)inputImage;
- (id)inputRotate1;
- (id)inputRotate2;
- (id)inputStrength;
- (id)inputWidth1;
- (id)inputWidth2;
- (id)outputImage;
- (void)setInputBottom1:(id)arg1;
- (void)setInputBottom2:(id)arg1;
- (void)setInputBrighten:(id)arg1;
- (void)setInputCenter1:(id)arg1;
- (void)setInputCenter2:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputHeight1:(id)arg1;
- (void)setInputHeight2:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRotate1:(id)arg1;
- (void)setInputRotate2:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWidth1:(id)arg1;
- (void)setInputWidth2:(id)arg1;

@end
