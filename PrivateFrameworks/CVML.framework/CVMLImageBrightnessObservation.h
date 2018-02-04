/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLImageBrightnessObservation : CVMLObservation {
    float  _brightness;
}

@property float brightness;

+ (id)brightnessWithValue:(float)arg1;

- (float)brightness;
- (id)initWithBrightness:(float)arg1;
- (void)setBrightness:(float)arg1;

@end
