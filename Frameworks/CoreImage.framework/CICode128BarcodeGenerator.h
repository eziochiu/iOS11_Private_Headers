/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICode128BarcodeGenerator : CICodeGenerator {
    NSNumber * inputBarcodeHeight;
    NSNumber * inputQuietSpace;
}

@property (nonatomic, copy) NSNumber *inputBarcodeHeight;
@property (nonatomic, copy) NSNumber *inputQuietSpace;

+ (id)customAttributes;

- (id)inputBarcodeHeight;
- (id)inputQuietSpace;
- (struct CGImage { }*)outputCGImage;
- (void)setInputBarcodeHeight:(id)arg1;
- (void)setInputQuietSpace:(id)arg1;

@end
