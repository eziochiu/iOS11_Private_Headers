/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
 */

@interface CCCameraConnectionInternal : NSObject <CCCameraConnectionProtocol> {
    CCCameraConnection * _parent;
}

@property (nonatomic) CCCameraConnection *parent;

- (void).cxx_destruct;
- (id)parent;
- (void)setParent:(id)arg1;
- (void)takePhotoWithCountdown:(unsigned long long)arg1;
- (oneway void)xpc_beginBurstCaptureWithReply:(id /* block */)arg1;
- (oneway void)xpc_cancelCountdown;
- (oneway void)xpc_endBurstCaptureWithReply:(id /* block */)arg1;
- (oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(bool)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_setCaptureMode:(int)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_setFlashMode:(int)arg1;
- (oneway void)xpc_setFocusPoint:(id)arg1;
- (oneway void)xpc_setHDRMode:(int)arg1;
- (oneway void)xpc_setIrisMode:(int)arg1;
- (oneway void)xpc_setPreviewEndpoint:(id)arg1;
- (oneway void)xpc_setZoom:(float)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_startCaptureWithMode:(int)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_stopCaptureWithReply:(id /* block */)arg1;
- (oneway void)xpc_toggleCameraDevice;

@end
