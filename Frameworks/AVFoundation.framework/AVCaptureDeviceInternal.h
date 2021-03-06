/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInternal : NSObject {
    AVCaptureDeviceInput * activeInput;
    int  configLockPid;
    int  configLockRefCount;
    int  openRefCount;
    bool  usingDevice;
}

@end
