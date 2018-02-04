/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSectionFeedFilterTransformation : NSObject <FCFeedTransforming> {
    <FCFeedTransforming> * _underlyingTransformation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <FCFeedTransforming> *underlyingTransformation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 readArticlesFilterMethod:(int)arg4 recentlyReadHistoryItems:(id)arg5 seenArticlesFilterMethod:(int)arg6 minimumTimeSinceFirstSeenToFilter:(double)arg7 recentlySeenHistoryItems:(id)arg8 supplementalFeedFilterOptions:(long long)arg9 otherArticleIDs:(id)arg10 otherClusterIDs:(id)arg11 filterDate:(id)arg12;
- (void)setUnderlyingTransformation:(id)arg1;
- (id)transformFeedItems:(id)arg1;
- (id)underlyingTransformation;

@end
