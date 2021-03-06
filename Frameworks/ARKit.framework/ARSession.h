/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSession : NSObject <ARSensorDelegate, ARTechniqueDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {
    NSMutableSet * _anchorsToAdd;
    NSMutableSet * _anchorsToRemove;
    NSObject<OS_dispatch_queue> * _audioOutputQueue;
    NSArray * _availableSensors;
    ARConfiguration * _configuration;
    <ARSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    ARFrame * _lastProcessedFrame;
    NSObject<OS_dispatch_semaphore> * _lastProcessedFrameSemaphore;
    ARSessionMetrics * _metrics;
    CMMotionManager * _motionManger;
    NSHashTable * _observers;
    NSObject<OS_dispatch_semaphore> * _observersSemaphore;
    unsigned long long  _pausedSensors;
    unsigned int  _peakPowerPressureLevel;
    int  _peakPowerPressureToken;
    unsigned long long  _powerUsage;
    unsigned long long  _runningSensors;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _sessionOriginTransform;
    bool  _sessionOriginUpdated;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _stateQueue;
    ARTechnique * _technique;
    long long  _thermalState;
    id  _thermalStateObserver;
    bool  _trackingWasReset;
    bool  _worldOriginInitialized;
    bool  _worldOriginReset;
    ARWorldTrackingTechnique * _worldTrackingTechnique;
}

@property (nonatomic, retain) NSArray *availableSensors;
@property (nonatomic, copy) ARConfiguration *configuration;
@property (nonatomic, readonly, copy) ARFrame *currentFrame;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSessionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long pausedSensors;
@property (nonatomic) unsigned long long powerUsage;
@property (nonatomic) unsigned long long runningSensors;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } sessionOriginTransform;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_endInterruption;
- (id)_getObservers;
- (id)_imageSensorForConfiguration:(id)arg1 existingSensor:(id)arg2;
- (void)_interruptSession;
- (void)_removeObserver:(id)arg1;
- (void)_replaceOrAddSensor:(id)arg1;
- (void)_sessionCameraDidChangeTrackingState:(id)arg1;
- (void)_sessionDidAddAnchors:(id)arg1;
- (void)_sessionDidFailWithError:(id)arg1;
- (void)_sessionDidRemoveAnchors:(id)arg1;
- (void)_sessionDidUpdateAnchors:(id)arg1;
- (void)_sessionDidUpdateFrame:(id)arg1;
- (void)_setTechnique:(id)arg1;
- (void)_startSensorsWithDataTypes:(unsigned long long)arg1;
- (id)_stateQueue;
- (void)_stopAllSensors;
- (void)_stopSensorsWithDataTypes:(unsigned long long)arg1 keepingDataTypes:(unsigned long long)arg2;
- (void)_updateAnchorsForFrame:(id)arg1 resultDatas:(id)arg2 addedAnchors:(id)arg3 updatedAnchors:(id)arg4 removedAnchors:(id)arg5 worldOriginUpdated:(bool)arg6 reinitializeExistingAnchors:(bool)arg7;
- (void)_updatePowerPressureLevelWithToken:(int)arg1;
- (void)_updatePowerUsage;
- (void)_updateSensorsWithConfiguration:(id)arg1;
- (void)_updateSessionStateWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_updateSessionWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_updateThermalState:(id)arg1;
- (void)addAnchor:(id)arg1;
- (id)availableSensors;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransformAtTimestamp:(double)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)configuration;
- (id)currentFrame;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (id)init;
- (void)pause;
- (unsigned long long)pausedSensors;
- (unsigned long long)powerUsage;
- (void)removeAnchor:(id)arg1;
- (void)runWithConfiguration:(id)arg1;
- (void)runWithConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)runningSensors;
- (void)sensor:(id)arg1 didFailWithError:(id)arg2;
- (void)sensor:(id)arg1 didOutputSensorData:(id)arg2;
- (void)sensorDidPause:(id)arg1;
- (void)sensorDidRestart:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })sessionOriginTransform;
- (void)setAvailableSensors:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setPausedSensors:(unsigned long long)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setRunningSensors:(unsigned long long)arg1;
- (void)setSessionOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)technique;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;

@end
