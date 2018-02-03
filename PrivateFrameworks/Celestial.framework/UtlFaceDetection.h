/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface UtlFaceDetection : NSObject {
    NSArray * _faces;
    float  _landmarksModelFraction;
    unsigned int  _pixelFormat;
    VNImageRequestHandler * _requestHandler;
    UtlROIProcessor * _roi;
}

@property (readonly) float blink;
@property (readonly) bool isBlinking;
@property (readonly) int landmarkCount;
@property (readonly) UtlROIProcessor *roi;

+ (id)createFaceLandmarksRequest:(float)arg1;
+ (void)deallocateResources;
+ (bool)prewarmBoxAlignmentAndLandmarksDetectorUsingFractionOfLandmarksModelFile:(float)arg1;

- (void).cxx_destruct;
- (float)blink;
- (bool)computeLandmarks;
- (bool)computeQuality:(struct __CVBuffer { }*)arg1 orientation:(int)arg2 rectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 quality:(float*)arg4 alignedRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (void)end;
- (id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned int)arg3 landmarksModelFraction:(float)arg4;
- (bool)isBlinking;
- (struct CGPoint { double x1; double x2; })landmark:(int)arg1;
- (int)landmarkCount;
- (id)roi;
- (bool)start;

@end