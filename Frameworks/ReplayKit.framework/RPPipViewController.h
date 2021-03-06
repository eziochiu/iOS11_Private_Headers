/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPPipViewController : UIViewController {
    long long  _cameraPosition;
    long long  _initialOrientation;
    AVCaptureSession * _pipSession;
    AVCaptureDevice * _videoDevice;
    AVCaptureDeviceInput * _videoInput;
}

@property (nonatomic) long long cameraPosition;
@property (nonatomic) long long initialOrientation;
@property (nonatomic, retain) AVCaptureSession *pipSession;
@property (nonatomic, retain) AVCaptureDevice *videoDevice;
@property (nonatomic, retain) AVCaptureDeviceInput *videoInput;

- (void).cxx_destruct;
- (long long)_captureVideoOrientationForUIDeviceOrientation:(long long)arg1;
- (void)_deviceOrientationDidChange;
- (id)_pipView;
- (void)_updateViewGeometry;
- (long long)cameraPosition;
- (id)cameraWithPosition:(long long)arg1;
- (id)initWithOrientation:(long long)arg1 position:(long long)arg2;
- (long long)initialOrientation;
- (void)loadView;
- (id)pipSession;
- (void)setCameraPosition:(long long)arg1;
- (void)setInitialOrientation:(long long)arg1;
- (void)setPipSession:(id)arg1;
- (void)setUpPipSession;
- (void)setVideoDevice:(id)arg1;
- (void)setVideoInput:(id)arg1;
- (void)startPipSession;
- (void)stopPipSession;
- (id)videoDevice;
- (id)videoInput;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
