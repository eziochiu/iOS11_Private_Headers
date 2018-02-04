/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding> {
    bool  _is3DLandmarks;
    NSDictionary * _results;
}

@property (nonatomic) bool is3DLandmarks;
@property (nonatomic, retain) NSDictionary *results;

+ (bool)supportsSecureCoding;
+ (id)unitTestingFaceLandmarksIs3D:(bool)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisionFaceLandmarks:(id)arg1;
- (bool)is3DLandmarks;
- (id)localizedStringForLandmarkType:(unsigned long long)arg1;
- (id)pointValuesForFaceLandmarkType:(unsigned long long)arg1;
- (id)pointsArrayForRegion:(id)arg1;
- (id)results;
- (void)setIs3DLandmarks:(bool)arg1;
- (void)setResults:(id)arg1;

@end