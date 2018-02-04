/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceDetector : CVMLDetector {
    CVMLFaceBBoxAligner * mBBoxAlignerImpl;
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> { 
        struct ObjectDetector_DCNFaceDetector {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mFaceDetectorImpl;
}

+ (bool)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)newCropAroundBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 extendBoundsWithinImageBy:(float)arg2 fromImageBuffer:(id)arg3 error:(id*)arg4;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (void)purgeIntermediates;

@end