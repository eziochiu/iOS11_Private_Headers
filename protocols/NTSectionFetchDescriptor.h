/* made by EzioChiu.
 */

@protocol NTSectionFetchDescriptor <NSObject, NSObject, NSCopying>

@required

- (void)configureCatchUpOperationWithFetchRequest:(NTCatchUpOperation *)arg1;
- (NTCatchUpOperationResults *)extractResultsFromCatchUpOperation:(NTCatchUpOperation *)arg1;
- (<FCFeedTransforming> *)incrementalLimitTransformationWithFeedPersonalizer:(id <FCFeedPersonalizing>)arg1 limit:(unsigned long long)arg2 priorFeedItems:(NSArray *)arg3;
- (<FCFeedTransforming> *)incrementalSortTransformationWithFeedPersonalizer:(id <FCFeedPersonalizing>)arg1;

@end
