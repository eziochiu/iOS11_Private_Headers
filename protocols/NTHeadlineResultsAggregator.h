/* made by EzioChiu.
 */

@protocol NTHeadlineResultsAggregator <NSObject>

@required

- (NTHeadlineAggregationResult *)aggregateSections:(NSArray *)arg1 feedItemsBySectionDescriptor:(NSDictionary *)arg2;

@end
