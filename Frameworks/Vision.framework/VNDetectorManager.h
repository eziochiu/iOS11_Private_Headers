/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectorManager : NSObject {
    VNFaceBBoxAligner * _faceBoxAligner;
    NSObject<OS_dispatch_queue> * _faceBoxAlignerSerialQueue;
    VNFaceDetector * _faceDetectorAccurate;
    NSObject<OS_dispatch_queue> * _faceDetectorAccurateSerialQueue;
    VNFaceDetector * _faceDetectorBalanced;
    NSObject<OS_dispatch_queue> * _faceDetectorBalancedSerialQueue;
    VNFaceDetector * _faceDetectorFast;
    NSObject<OS_dispatch_queue> * _faceDetectorFastSerialQueue;
    VNFaceExpressionDetector * _faceExpressionDetector;
    NSObject<OS_dispatch_queue> * _faceExpressionDetectorSerialQueue;
    VNFaceLandmarkDetector * _faceLandmarkDetector;
    NSObject<OS_dispatch_queue> * _faceLandmarkDetectorSerialQueue;
    VNFaceprintGenerator * _faceprintGenerator;
    NSObject<OS_dispatch_queue> * _faceprintGeneratorSerialQueue;
    VNHumanDetector * _humanDetector;
    NSObject<OS_dispatch_queue> * _humanDetectorSerialQueue;
    VNImageprintGenerator * _imageprintGenerator;
    NSObject<OS_dispatch_queue> * _imageprintGeneratorSerialQueue;
    VNJunkIdentifier * _junkIdentifier;
    NSObject<OS_dispatch_queue> * _junkIdentifierSerialQueue;
    VNSceneClassifier * _sceneClassifier;
    NSObject<OS_dispatch_queue> * _sceneClassifierSerialQueue;
}

+ (id)manager;

- (void).cxx_destruct;
- (id)detectorOfType:(id)arg1 backingStore:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4;
- (id)detectorOfType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)forcedCleanup;
- (void)forcedCleanupFacePipelineWithLevel:(id)arg1;
- (void)forcedCleanupJunkPipelineWithLevel:(id)arg1;
- (void)forcedCleanupScenePipelineWithLevel:(id)arg1;
- (void)forcedCleanupWithOptions:(id)arg1;
- (id)getSerialDispatchQueueFaceBoxAligner;
- (id)getSerialDispatchQueueFaceDetectorAccurate;
- (id)getSerialDispatchQueueFaceDetectorBalanced;
- (id)getSerialDispatchQueueFaceDetectorFast;
- (id)getSerialDispatchQueueFaceExpressionDetector;
- (id)getSerialDispatchQueueFaceLandmarkDetector;
- (id)getSerialDispatchQueueFacePrinter;
- (id)getSerialDispatchQueueHumanDetector;
- (id)getSerialDispatchQueueImageprintGenerator;
- (id)getSerialDispatchQueueJunkDetector;
- (id)getSerialDispatchQueueSceneDetector;
- (id)init;

@end