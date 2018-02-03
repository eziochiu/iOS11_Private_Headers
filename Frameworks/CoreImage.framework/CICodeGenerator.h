/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICodeGenerator : CIFilter {
    NSData * inputMessage;
}

@property (nonatomic, copy) NSData *inputMessage;

- (id)inputMessage;
- (struct CGImage { }*)outputCGImage;
- (id)outputImage;
- (void)setInputMessage:(id)arg1;

@end
