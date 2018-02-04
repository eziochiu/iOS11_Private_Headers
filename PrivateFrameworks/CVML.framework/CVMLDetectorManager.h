/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLDetectorManager : NSObject {
    CVMLFaceDetector * _faceDetectorAccurate;
    NSObject<OS_dispatch_queue> * _faceDetectorAccurateSerialQueue;
    CVMLFaceDetector * _faceDetectorBalanced;
    NSObject<OS_dispatch_queue> * _faceDetectorBalancedSerialQueue;
    CVMLFaceDetector * _faceDetectorFast;
    NSObject<OS_dispatch_queue> * _faceDetectorFastSerialQueue;
    CVMLFaceExpressionDetector * _faceExpressionDetector;
    NSObject<OS_dispatch_queue> * _faceExpressionDetectorSerialQueue;
    CVMLFaceLandmarkDetector * _faceLandmarkDetector;
    NSObject<OS_dispatch_queue> * _faceLandmarkDetectorSerialQueue;
    CVMLFaceprintGenerator * _faceprintGenerator;
    NSObject<OS_dispatch_queue> * _faceprintGeneratorSerialQueue;
    CVMLHumanDetector * _humanDetector;
    NSObject<OS_dispatch_queue> * _humanDetectorSerialQueue;
    CVMLImageprintGenerator * _imageprintGenerator;
    NSObject<OS_dispatch_queue> * _imageprintGeneratorSerialQueue;
    CVMLJunkIdentifier * _junkIdentifier;
    NSObject<OS_dispatch_queue> * _junkIdentifierSerialQueue;
    CVMLSceneClassifier * _sceneClassifier;
    NSObject<OS_dispatch_queue> * _sceneClassifierSerialQueue;
}

+ (id)manager;

- (void).cxx_destruct;
- (id)detectorOfType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)forcedCleanup;
- (void)forcedCleanupFacePipelineWithLevel:(id)arg1;
- (void)forcedCleanupJunkPipelineWithLevel:(id)arg1;
- (void)forcedCleanupScenePipelineWithLevel:(id)arg1;
- (void)forcedCleanupWithOptions:(id)arg1;
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
