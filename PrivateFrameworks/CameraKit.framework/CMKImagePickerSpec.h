/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKImagePickerSpec : CMKCameraSpec

+ (id)specForPad;
+ (id)specForPhone;

- (bool)isCameraApp;

@end
