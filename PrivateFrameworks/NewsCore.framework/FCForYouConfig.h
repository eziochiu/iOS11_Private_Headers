/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouConfig : NSObject <NSCopying> {
    FCGroupConfig * _breakingNewsGroupConfig;
    FCGroupConfig * _coverArticlesGroupConfig;
    NSArray * _editorialGroupConfigs;
    NTPBForYouConfigRecord * _forYouConfigRecord;
    FCInterestToken * _interestToken;
    FCTopStoriesGroupConfig * _topStoriesGroupConfig;
    FCGroupConfig * _trendingGroupConfig;
}

@property (nonatomic, readonly) NSArray *breakingNewsArticleIDs;
@property (nonatomic, retain) FCGroupConfig *breakingNewsGroupConfig;
@property (nonatomic, readonly) NSString *coverArticlesArticleListID;
@property (nonatomic, retain) FCGroupConfig *coverArticlesGroupConfig;
@property (nonatomic, readonly) NSArray *editorialArticleListIDs;
@property (nonatomic, retain) NSArray *editorialGroupConfigs;
@property (nonatomic, readonly) NSArray *editorialSectionTagIDs;
@property (nonatomic, readonly) NSDate *fetchedDate;
@property (nonatomic, retain) NTPBForYouConfigRecord *forYouConfigRecord;
@property (nonatomic, retain) FCInterestToken *interestToken;
@property (nonatomic, readonly) NSArray *topStoriesCombinedArticleIDs;
@property (nonatomic, retain) FCTopStoriesGroupConfig *topStoriesGroupConfig;
@property (nonatomic, readonly) NSString *trendingArticleListID;
@property (nonatomic, retain) FCGroupConfig *trendingGroupConfig;

- (void).cxx_destruct;
- (id)breakingNewsArticleIDs;
- (id)breakingNewsGroupConfig;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArticlesArticleListID;
- (id)coverArticlesGroupConfig;
- (id)editorialArticleListIDs;
- (id)editorialGroupConfigs;
- (id)editorialSectionTagIDs;
- (id)fetchedDate;
- (id)forYouConfigRecord;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;
- (id)interestToken;
- (void)setBreakingNewsGroupConfig:(id)arg1;
- (void)setCoverArticlesGroupConfig:(id)arg1;
- (void)setEditorialGroupConfigs:(id)arg1;
- (void)setForYouConfigRecord:(id)arg1;
- (void)setInterestToken:(id)arg1;
- (void)setTopStoriesGroupConfig:(id)arg1;
- (void)setTrendingGroupConfig:(id)arg1;
- (id)topStoriesCombinedArticleIDs;
- (id)topStoriesGroupConfig;
- (id)trendingArticleListID;
- (id)trendingGroupConfig;

@end
