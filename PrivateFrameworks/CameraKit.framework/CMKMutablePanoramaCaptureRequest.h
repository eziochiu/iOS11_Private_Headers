/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKMutablePanoramaCaptureRequest : CMKPanoramaCaptureRequest

@property (nonatomic) long long captureDevice;
@property (nonatomic) long long deviceOrientation;

- (void)setCaptureDevice:(long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;

@end