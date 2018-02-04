/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface FaceCoreLightWrapper : NSObject {
    NSArray * lastDetectedFaces;
}

@property (nonatomic, retain) NSArray *lastDetectedFaces;

- (void).cxx_destruct;
- (char *)advancedBoostShadowsInGrayscaleBuffer:(char *)arg1 withSize:(unsigned long long)arg2;
- (unsigned char)computeFilters:(unsigned char)arg1;
- (struct CGImage { }*)copyImageDataForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 imageWidth:(unsigned long long*)arg2 imageHeight:(unsigned long long*)arg3 shadowBoostEnabled:(bool)arg4;
- (void)dealloc;
- (id)detectFacesInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)init;
- (void)initializeFaceAPI;
- (void)interfaceOrientationChanged:(id)arg1;
- (id)lastDetectedFaces;
- (void)setLastDetectedFaces:(id)arg1;
- (void)updateCameraMirroringSetting:(bool)arg1;

@end