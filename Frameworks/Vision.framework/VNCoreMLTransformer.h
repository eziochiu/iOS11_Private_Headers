/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCoreMLTransformer : VNDetector {
    VNCoreMLModel * _model;
}

@property (readonly) VNCoreMLModel *model;

- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1 model:(id)arg2 error:(id*)arg3;
- (id)model;
- (id)observationsCacheKey;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
