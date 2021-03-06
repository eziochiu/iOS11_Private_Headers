/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PICurvesFilter : CIFilter {
    NSData * inputBlueData;
    NSNumber * inputGrayChoice;
    NSData * inputGreenData;
    CIImage * inputImage;
    NSData * inputRGBData;
    NSData * inputRedData;
}

+ (id)curvesKernels;

- (void).cxx_destruct;
- (id)makeImageFromCurveData;
- (id)outputImage;

@end
