/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceClusteringProperties : PHFacePropertySet {
    PHFaceprint * _faceprint;
}

@property (nonatomic, readonly) PHFaceprint *faceprint;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)faceprint;
- (id)initWithFetchDictionary:(id)arg1 face:(id)arg2 prefetched:(bool)arg3;

@end
