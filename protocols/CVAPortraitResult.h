/* made by EzioChiu.
 */

@protocol CVAPortraitResult <NSObject>

@required

- (<CVAMattingResult> *)mattingResult;
- (struct __CVBuffer { }*)portraitPixelBuffer;
- (float)portraitStability;

@end
