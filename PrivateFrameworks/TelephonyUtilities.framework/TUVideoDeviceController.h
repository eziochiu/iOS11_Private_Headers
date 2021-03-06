/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate> {
    <TUVideoDeviceControllerProvider> * _provider;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _wantsPreview;
}

@property (nonatomic, retain) AVCaptureDevice *currentInputDevice;
@property (nonatomic) int currentVideoOrientation;
@property (nonatomic, readonly, copy) NSArray *inputDevices;
@property (nonatomic, retain) CALayer *localBackLayer;
@property (nonatomic, retain) CALayer *localFrontLayer;
@property (getter=isPreviewRunning, nonatomic, readonly) bool previewRunning;
@property (nonatomic, readonly) <TUVideoDeviceControllerProvider> *provider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) bool wantsPreview;

+ (int)_tuOrientationForVideoOrientation:(int)arg1;
+ (int)_videoOrientationForTUOrientation:(int)arg1;

- (void).cxx_destruct;
- (void)captureDevicesChangedForProvider:(id)arg1;
- (id)currentInputDevice;
- (int)currentVideoOrientation;
- (id)debugDescription;
- (void)didStartPreviewForProvider:(id)arg1;
- (void)didStopPreviewForProvider:(id)arg1;
- (id)init;
- (id)initWithProvider:(id)arg1 serialQueue:(id)arg2;
- (id)initWithSerialQueue:(id)arg1;
- (id)inputDevices;
- (bool)isPreviewRunning;
- (id)localBackLayer;
- (id)localFrontLayer;
- (void)noteBeginAnimationToPIP;
- (void)noteBeginAnimationToPreview;
- (void)noteEndAnimationToPIP;
- (void)noteEndAnimationToPreview;
- (void)pausePreview;
- (id)provider;
- (void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2;
- (void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2;
- (void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3;
- (void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2;
- (id)serialQueue;
- (void)setCurrentInputDevice:(id)arg1;
- (void)setCurrentVideoOrientation:(int)arg1;
- (void)setLocalBackLayer:(id)arg1;
- (void)setLocalFrontLayer:(id)arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1 localLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg2;
- (void)setWantsPreview:(bool)arg1;
- (void)startPreview;
- (void)stopPreview;
- (bool)wantsPreview;

@end
