/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet {
    NSData * _distanceIdentity;
    NSDate * _sceneAnalysisTimestamp;
    unsigned long long  _sceneAnalysisVersion;
}

@property (nonatomic, readonly) NSData *distanceIdentity;
@property (nonatomic, readonly) NSDate *sceneAnalysisTimestamp;
@property (nonatomic, readonly) unsigned long long sceneAnalysisVersion;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)distanceIdentity;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)sceneAnalysisTimestamp;
- (unsigned long long)sceneAnalysisVersion;

@end
