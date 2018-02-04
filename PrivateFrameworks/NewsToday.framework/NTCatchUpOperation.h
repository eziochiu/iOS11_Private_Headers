/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTCatchUpOperation : FCOperation {
    NSMutableArray * _articleIDsRequests;
    NSMutableArray * _articleListRequests;
    FCCachePolicy * _cachePolicyForArticleLists;
    id /* block */  _catchUpCompletionHandler;
    <FCContentContext> * _contentContext;
    <FCFeedPersonalizing> * _feedPersonalizer;
    NSDate * _fetchDate;
    bool  _forYouEnabled;
    NTCatchUpOperationForYouRequest * _forYouRequest;
    NTCatchUpOperationResults * _forYouResults;
    unsigned long long  _maximumCachedAgeForForYou;
    unsigned long long  _maximumCachedAgeForTrendingByParsec;
    NSArray * _networkEvents;
    NSDictionary * _resultsByArticleIDsRequestID;
    NSDictionary * _resultsByArticleListID;
    id /* block */  _sessionProvider;
    bool  _trendingByParsecEnabled;
    NTCatchUpOperationResults * _trendingByParsecResults;
}

@property (nonatomic, retain) NSMutableArray *articleIDsRequests;
@property (nonatomic, retain) NSMutableArray *articleListRequests;
@property (nonatomic, retain) FCCachePolicy *cachePolicyForArticleLists;
@property (nonatomic, copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, copy) NSDate *fetchDate;
@property (getter=isForYouEnabled, nonatomic) bool forYouEnabled;
@property (nonatomic, copy) NTCatchUpOperationForYouRequest *forYouRequest;
@property (nonatomic, copy) NTCatchUpOperationResults *forYouResults;
@property (nonatomic) unsigned long long maximumCachedAgeForForYou;
@property (nonatomic) unsigned long long maximumCachedAgeForTrendingByParsec;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, copy) NSDictionary *resultsByArticleIDsRequestID;
@property (nonatomic, copy) NSDictionary *resultsByArticleListID;
@property (nonatomic, copy) id /* block */ sessionProvider;
@property (getter=isTrendingByParsecEnabled, nonatomic) bool trendingByParsecEnabled;
@property (nonatomic, copy) NTCatchUpOperationResults *trendingByParsecResults;

- (void).cxx_destruct;
- (void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)_fetchForYouResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)_fetchTrendingByParsecResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)addArticleIDsRequest:(id)arg1;
- (void)addArticleListRequest:(id)arg1;
- (id)articleIDsRequests;
- (id)articleListRequests;
- (id)cachePolicyForArticleLists;
- (id /* block */)catchUpCompletionHandler;
- (id)contentContext;
- (id)feedPersonalizer;
- (id)fetchDate;
- (id)forYouRequest;
- (id)forYouResults;
- (id)init;
- (bool)isForYouEnabled;
- (bool)isTrendingByParsecEnabled;
- (unsigned long long)maximumCachedAgeForForYou;
- (unsigned long long)maximumCachedAgeForTrendingByParsec;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)resultsByArticleIDsRequestID;
- (id)resultsByArticleListID;
- (id /* block */)sessionProvider;
- (void)setArticleIDsRequests:(id)arg1;
- (void)setArticleListRequests:(id)arg1;
- (void)setCachePolicyForArticleLists:(id)arg1;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setContentContext:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFetchDate:(id)arg1;
- (void)setForYouEnabled:(bool)arg1;
- (void)setForYouRequest:(id)arg1;
- (void)setForYouResults:(id)arg1;
- (void)setMaximumCachedAgeForForYou:(unsigned long long)arg1;
- (void)setMaximumCachedAgeForTrendingByParsec:(unsigned long long)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setResultsByArticleIDsRequestID:(id)arg1;
- (void)setResultsByArticleListID:(id)arg1;
- (void)setSessionProvider:(id /* block */)arg1;
- (void)setTrendingByParsecEnabled:(bool)arg1;
- (void)setTrendingByParsecResults:(id)arg1;
- (id)trendingByParsecResults;
- (bool)validateOperation;

@end
