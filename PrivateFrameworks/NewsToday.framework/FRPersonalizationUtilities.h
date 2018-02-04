/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface FRPersonalizationUtilities : NSObject

+ (id)diversifyArticles:(id)arg1 withLimit:(unsigned long long)arg2 similarityStartExpectation:(double)arg3 similarityEndExpectation:(double)arg4 publisherDiversificationSlope:(double)arg5 publisherDiversificationYIntercept:(double)arg6;
+ (id)limitArticles:(id)arg1 byHourlyFlowRate:(double)arg2 articleFilterPerPublisher:(double)arg3 timeInterval:(double)arg4;
+ (id)sortArticles:(id)arg1 withArticleToGlobalScoreMap:(id)arg2 readonlyPersonalizationAggregateStore:(id)arg3 personalizationDataSource:(id)arg4 configurableValues:(id)arg5 subscribedTagIDs:(id)arg6 mutedTagIDs:(id)arg7 autofavoritedTagIDs:(id)arg8;
+ (id)sortArticles:(id)arg1 withArticleToGlobalScoreMap:(id)arg2 readonlyPersonalizationAggregateStore:(id)arg3 personalizationDataSource:(id)arg4 configurableValues:(id)arg5 subscribedTagIDs:(id)arg6 mutedTagIDs:(id)arg7 autofavoritedTagIDs:(id)arg8 sortOptions:(long long)arg9;

@end
