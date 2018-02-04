/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouCatchUpOperation : FCOperation {
    FCBreakingNewsOperation * _breakingNewsOperation;
    NSHashTable * _conditionWaiters;
    FCMutexLock * _conditionWaitersLock;
    FCCoverArticlesOperation * _coverArticlesOperation;
    FCEditorialOperation * _editorialOperation;
    FCMyArticlesOperation * _myArticlesOperation;
    NSOperationQueue * _operationQueue;
    FCTopStoriesOperation * _topStoriesOperation;
    FCTrendingOperation * _trendingOperation;
}

@property (nonatomic, readonly, copy) NSArray *breakingNewsHeadlines;
@property (nonatomic, retain) FCBreakingNewsOperation *breakingNewsOperation;
@property (nonatomic, readonly, copy) NSError *catchUpError;
@property (nonatomic, retain) NSHashTable *conditionWaiters;
@property (nonatomic, retain) FCMutexLock *conditionWaitersLock;
@property (nonatomic, readonly, copy) NSArray *coverArticleHeadlines;
@property (nonatomic, retain) FCCoverArticlesOperation *coverArticlesOperation;
@property (nonatomic, retain) FCEditorialOperation *editorialOperation;
@property (readonly, copy) NSDictionary *feedContextByFeedID;
@property (nonatomic, readonly, copy) NSArray *mandatoryTopStoriesHeadlines;
@property (nonatomic, retain) FCMyArticlesOperation *myArticlesOperation;
@property (nonatomic, readonly, copy) NSArray *nonEditorialFeedItems;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly, copy) NSArray *optionalTopStoriesHeadlines;
@property (nonatomic, readonly, copy) NSArray *supplementalCoverArticleHeadlines;
@property (nonatomic, readonly, copy) <FCChannelProviding> *topStoriesChannel;
@property (nonatomic, readonly, copy) NSDictionary *topStoriesMetadataByArticleID;
@property (nonatomic, retain) FCTopStoriesOperation *topStoriesOperation;
@property (nonatomic, readonly, copy) NSArray *trendingHeadlines;
@property (nonatomic, retain) FCTrendingOperation *trendingOperation;

+ (id)sharedCatchUpOperationForEdition:(id)arg1 context:(id)arg2;
+ (id)temporaryBackgroundCatchUpOperationForEdition:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (void)_addConditionWaiter:(id)arg1;
- (void)_serviceConditionWaiters;
- (id)allFeedItemsAfterTransformation:(id)arg1;
- (id)allNonEditorialFeedItemsAfterTransformation:(id)arg1;
- (id)breakingNewsHeadlines;
- (id)breakingNewsOperation;
- (id)catchUpError;
- (id)catchUpErrorForContentTypes:(long long)arg1;
- (id)conditionWaiters;
- (id)conditionWaitersLock;
- (id)coverArticleHeadlines;
- (id)coverArticlesOperation;
- (id)editorialOperation;
- (void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(id /* block */)arg3;
- (id)feedContextByFeedID;
- (id)initWithContext:(id)arg1 dateRange:(id)arg2 background:(bool)arg3;
- (id)mandatoryTopStoriesHeadlines;
- (id)myArticlesOperation;
- (id)nonEditorialFeedItems;
- (void)operationDidFinishWithError:(id)arg1;
- (id)operationQueue;
- (id)optionalTopStoriesHeadlines;
- (id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2;
- (void)performOperation;
- (void)setBreakingNewsOperation:(id)arg1;
- (void)setConditionWaiters:(id)arg1;
- (void)setConditionWaitersLock:(id)arg1;
- (void)setCoverArticlesOperation:(id)arg1;
- (void)setEditorialOperation:(id)arg1;
- (void)setMyArticlesOperation:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setTopStoriesOperation:(id)arg1;
- (void)setTrendingOperation:(id)arg1;
- (id)supplementalCoverArticleHeadlines;
- (id)topStoriesChannel;
- (id)topStoriesMetadataByArticleID;
- (id)topStoriesOperation;
- (id)trendingHeadlines;
- (id)trendingOperation;
- (id)waiterForCondition:(id)arg1;

@end
