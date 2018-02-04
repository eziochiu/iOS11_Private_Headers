/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal * _internal;
}

@property (readonly) unsigned long long factors;
@property (readonly) NSString *level;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)factors;
- (id)init;
- (id)initWithLevel:(id)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)level;
- (id)recommendedFrameRateRangeForPortrait;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (int)_clampFrameRate:(int)arg1 toRange:(id)arg2;
- (id)cam_recommendedFrameRateRangeForNonDepthPhotoPreset;
- (id)cam_recommendedFrameRateRangeForPortraitWithVideoDevice:(id)arg1;

@end
