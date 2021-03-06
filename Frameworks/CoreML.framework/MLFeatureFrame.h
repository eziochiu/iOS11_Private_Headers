/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFeatureFrame : NSObject <MLFeatureFrame>

@property (nonatomic, readonly) NSDictionary *description;
@property (readonly) unsigned long long featureCount;
@property (readonly) unsigned long long sampleCount;

+ (id)featureFrameFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)featureFrameFromFeatureArrayMap:(id)arg1 frameDescription:(id)arg2 error:(id*)arg3;
+ (id)featureFrameFromFeatureDictionary:(id)arg1 frameDescription:(id)arg2 error:(id*)arg3;

- (id)description;
- (unsigned long long)featureCount;
- (id)featureFrameByAddingFeatureArray:(id)arg1 featureDescription:(id)arg2 error:(id*)arg3;
- (id)featureFrameByAddingFrame:(id)arg1 error:(id*)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)sampleCount;
- (id)subsetWithFeaturesNamed:(id)arg1;

@end
