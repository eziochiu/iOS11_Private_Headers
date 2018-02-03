/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAztecCodeGenerator : CICodeGenerator {
    NSNumber * inputCompactStyle;
    NSNumber * inputCorrectionLevel;
    NSNumber * inputLayers;
}

@property (nonatomic, copy) NSNumber *inputCompactStyle;
@property (nonatomic, copy) NSNumber *inputCorrectionLevel;
@property (nonatomic, copy) NSNumber *inputLayers;

+ (id)customAttributes;

- (id)inputCompactStyle;
- (id)inputCorrectionLevel;
- (id)inputLayers;
- (struct CGImage { }*)outputCGImage;
- (void)setInputCompactStyle:(id)arg1;
- (void)setInputCorrectionLevel:(id)arg1;
- (void)setInputLayers:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
