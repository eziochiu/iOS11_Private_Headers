/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingImageSensor : ARImageSensor <AVCaptureDataOutputSynchronizerDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    NSMutableDictionary * _avFaceMeshPayload;
    NSArray * _availableMetadataObjectTypes;
    AVCaptureDepthDataOutput * _depthDataOutput;
    unsigned long long  _droppedFramesPerSec;
    NSMutableArray * _faceDetections;
    NSObject<OS_dispatch_semaphore> * _faceSemaphore;
    AVCaptureMetadataOutput * _metaDataOutput;
    bool  _mirrorVideoOutput;
    AVCaptureDataOutputSynchronizer * _outputSynchronizer;
    NSMutableArray * _outputSynchronizerOutputs;
    NSObject<OS_dispatch_queue> * _outputSynchronizerQueue;
    bool  _recordingMode;
    NSString * _requiredFaceMetaDataObjectType;
    bool  _signpostFirstFaceDone;
    bool  _signpostFirstFrameDone;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMirrored;
@property (nonatomic) bool recordingMode;
@property (nonatomic, retain) NSString *requiredFaceMetaDataObjectType;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
- (id)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)configureMetaDataOutput;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (void)faceDataFromMetadataObjects:(id)arg1 mirroredVideoInput:(bool)arg2 pFaceBoundingBoxes:(id*)arg3 pFacePayload:(id*)arg4;
- (id)init;
- (id)initWithDeviceType:(id)arg1;
- (id)initWithDeviceType:(id)arg1 mirrorVideoOutput:(bool)arg2 captureSession:(id)arg3;
- (bool)isMirrored;
- (void)prepareSynchronizedOutputs:(id)arg1;
- (unsigned long long)providedDataTypes;
- (bool)recordingMode;
- (id)requiredFaceMetaDataObjectType;
- (void)setRecordingMode:(bool)arg1;
- (void)setRequiredFaceMetaDataObjectType:(id)arg1;
- (void)start;
- (void)stop;

@end
