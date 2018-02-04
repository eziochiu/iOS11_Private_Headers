/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingConfiguration : ARConfiguration

+ (bool)isSupported;
+ (id)new;

- (id)init;
- (void)setLightEstimationEnabled:(bool)arg1;
- (id)techniques;

@end
