/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)_buildGroupWithCatchUpOperation:(id)arg1;
- (id)_feedTransformationWithOtherArticleIDs:(id)arg1;
- (id)_filterHeadlines:(id)arg1 withArticleMetadata:(id)arg2;
- (id)_personalizedFeedTransformationWithLimit:(unsigned long long)arg1 otherArticleIDs:(id)arg2;
- (id)headlinesLogFromHeadlines:(id)arg1 includeScore:(bool)arg2;
- (void)performOperation;

@end
