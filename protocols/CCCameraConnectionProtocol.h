/* made by EzioChiu.
 */

@protocol CCCameraConnectionProtocol

@required

- (void)takePhotoWithCountdown:(unsigned long long)arg1;
- (oneway void)xpc_beginBurstCaptureWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_cancelCountdown;
- (oneway void)xpc_endBurstCaptureWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSOrderedSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 23: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSOrderedSet *, int, bool, NSDate *, int, bool, bool, float, int, int, int, int, int, int, bool, bool, int, void*
- (oneway void)xpc_setCaptureMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_setFlashMode:(int)arg1;
- (oneway void)xpc_setFocusPoint:(NSValue *)arg1;
- (oneway void)xpc_setHDRMode:(int)arg1;
- (oneway void)xpc_setIrisMode:(int)arg1;
- (oneway void)xpc_setPreviewEndpoint:(NSString *)arg1;
- (oneway void)xpc_setZoom:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (oneway void)xpc_startCaptureWithMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_stopCaptureWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_toggleCameraDevice;

@end
