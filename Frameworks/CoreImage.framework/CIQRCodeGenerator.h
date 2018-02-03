/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIQRCodeGenerator : CICodeGenerator {
    NSString * inputCorrectionLevel;
}

@property (nonatomic, copy) NSString *inputCorrectionLevel;

+ (id)customAttributes;

- (id)inputCorrectionLevel;
- (struct CGImage { }*)outputCGImage;
- (void)setInputCorrectionLevel:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
