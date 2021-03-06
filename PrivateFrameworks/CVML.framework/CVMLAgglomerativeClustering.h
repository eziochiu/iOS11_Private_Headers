/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLAgglomerativeClustering : NSObject <CVMLClustering> {
    bool  _debugMode;
    NSMutableDictionary * _faceIdsMapping;
    NSMutableArray * distances_map;
}

@property bool debugMode;
@property (retain) NSMutableDictionary *faceIdsMapping;

- (void).cxx_destruct;
- (void)_addFaceId:(id)arg1 withSimilarityMatrix:(id)arg2;
- (bool)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3;
- (bool)addFaceIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3;
- (bool)cancelClustering:(id*)arg1;
- (void)dealloc;
- (bool)debugMode;
- (id)faceIdsMapping;
- (id)getClustersWithOptions:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1;
- (void)setDebugMode:(bool)arg1;
- (void)setFaceIdsMapping:(id)arg1;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end
