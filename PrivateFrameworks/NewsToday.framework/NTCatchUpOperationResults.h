/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTCatchUpOperationResults : NSObject <NSCopying> {
    NSDictionary * _headlineCacheExpirationDatesByArticleID;
    NSArray * _headlines;
    SFRankingFeedback * _rankingFeedback;
    NSDictionary * _searchResultsByArticleID;
}

@property (nonatomic, copy) NSDictionary *headlineCacheExpirationDatesByArticleID;
@property (nonatomic, copy) NSArray *headlines;
@property (nonatomic, copy) SFRankingFeedback *rankingFeedback;
@property (nonatomic, copy) NSDictionary *searchResultsByArticleID;

- (void).cxx_destruct;
- (id)copyWithHeadlines:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)headlineCacheExpirationDatesByArticleID;
- (id)headlines;
- (id)init;
- (id)initWithHeadlines:(id)arg1 headlineCacheExpirationDatesByArticleID:(id)arg2 searchResultsByArticleID:(id)arg3 rankingFeedback:(id)arg4;
- (id)initWithHeadlines:(id)arg1 searchResultsByArticleID:(id)arg2 rankingFeedback:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)rankingFeedback;
- (id)resultsByCombiningWithResults:(id)arg1;
- (id)searchResultsByArticleID;
- (void)setHeadlineCacheExpirationDatesByArticleID:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setRankingFeedback:(id)arg1;
- (void)setSearchResultsByArticleID:(id)arg1;

@end
