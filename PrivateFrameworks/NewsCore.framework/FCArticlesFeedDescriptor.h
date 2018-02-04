/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticlesFeedDescriptor : FCArticleIDFeedDescriptor {
    NSArray * _articleIDs;
}

@property (nonatomic, readonly) NSArray *articleIDs;

- (void).cxx_destruct;
- (id)articleIDs;
- (id)initWithIdentifier:(id)arg1 articleIDs:(id)arg2;
- (id)name;
- (id)streamOfLatestArticleIDsWithContext:(id)arg1;

@end
