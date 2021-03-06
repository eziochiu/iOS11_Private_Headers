/* made by EzioChiu.
 */

@protocol IFCentroidStore <NSObject>

@required

+ (<IFCentroidStore> *)defaultStore;

- (bool)addFeatureVectors:(NSArray *)arg1;
- (unsigned long long)deleteFeatureVectors;
- (unsigned long long)deleteFeatureVectorsInExcessOf:(unsigned long long)arg1;
- (unsigned long long)deleteFeatureVectorsOlderThan:(NSDate *)arg1;
- (unsigned long long)deleteFeatureVectorsWithFeatureLike:(IFFeatureMatch *)arg1;

@end
