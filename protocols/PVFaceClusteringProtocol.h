/* made by EzioChiu.
 */

@protocol PVFaceClusteringProtocol <NSObject>

@required

- (NSNumber *)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id*)arg3;
- (NSDictionary *)distancesFromClustersIdentifiedByFaceCSNs:(NSArray *)arg1 toClustersIdentifiedByFaceCSNs:(NSArray *)arg2 error:(id*)arg3;
- (NSDictionary *)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id*)arg2;

@end
