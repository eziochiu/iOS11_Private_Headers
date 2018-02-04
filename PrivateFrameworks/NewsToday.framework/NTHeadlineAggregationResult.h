/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTHeadlineAggregationResult : NSObject <NSCopying> {
    NSDictionary * _aggregatedFeedItemsBySectionDescriptor;
    NSSet * _articleIDsOfLeadingCells;
    NSArray * _unusedSectionDescriptors;
}

@property (nonatomic, copy) NSDictionary *aggregatedFeedItemsBySectionDescriptor;
@property (nonatomic, copy) NSSet *articleIDsOfLeadingCells;
@property (nonatomic, copy) NSArray *unusedSectionDescriptors;

- (void).cxx_destruct;
- (id)aggregatedFeedItemsBySectionDescriptor;
- (id)articleIDsOfLeadingCells;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAggregatedFeedItemsBySectionDescriptor:(id)arg1 articleIDsOfLeadingCells:(id)arg2 unusedSectionDescriptors:(id)arg3;
- (void)setAggregatedFeedItemsBySectionDescriptor:(id)arg1;
- (void)setArticleIDsOfLeadingCells:(id)arg1;
- (void)setUnusedSectionDescriptors:(id)arg1;
- (id)unusedSectionDescriptors;

@end
