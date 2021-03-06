/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPearlCalibrationCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _calibrationQueue;
    BWFigVideoCaptureDevice * _captureDevice;
    struct opaqueCMSampleBuffer { } * _colorSampleBuffer;
    struct OpaqueFigCaptureDevice { } * _device;
    struct opaqueCMSampleBuffer { } * _infraredSampleBuffer;
    FigStateMachine * _stateMachine;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateMachineLock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeOfFirstReceivedSystemStatus;
    double  _timeout;
}

@property (getter=isCalibrationComplete, nonatomic, readonly) bool calibrationComplete;

+ (void)initialize;

- (void)_acquireImages;
- (id)_createStateMachine;
- (void)_startCalibration;
- (void)dealloc;
- (id)initWithCaptureDevice:(id)arg1 device:(struct OpaqueFigCaptureDevice { }*)arg2;
- (bool)isCalibrationComplete;
- (void)startCalibration;
- (void)updateWithPearlSystemStatus:(int)arg1 facesDetected:(bool)arg2;
- (void)updateWithVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
