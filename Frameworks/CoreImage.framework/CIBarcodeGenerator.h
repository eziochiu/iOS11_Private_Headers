/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBarcodeGenerator : CIFilter {
    CIBarcodeDescriptor * inputBarcodeDescriptor;
}

@property (nonatomic, copy) CIBarcodeDescriptor *inputBarcodeDescriptor;

+ (id)customAttributes;

- (id)inputBarcodeDescriptor;
- (struct CGImage { }*)outputCGImage;
- (struct CGImage { }*)outputCGImageForAztecCodeDescriptor;
- (struct CGImage { }*)outputCGImageForDataMatrixCodeDescriptor;
- (struct CGImage { }*)outputCGImageForPDF417CodeDescriptor;
- (struct CGImage { }*)outputCGImageForQRCodeDescriptor;
- (id)outputImage;
- (void)setInputBarcodeDescriptor:(id)arg1;

@end
