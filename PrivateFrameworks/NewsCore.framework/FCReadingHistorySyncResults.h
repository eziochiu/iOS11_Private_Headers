/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingHistorySyncResults : NSObject {
    NSArray * _deletedArticleIDs;
    NSArray * _modifiedArticleIDs;
}

@property (nonatomic, retain) NSArray *deletedArticleIDs;
@property (nonatomic, retain) NSArray *modifiedArticleIDs;

- (void).cxx_destruct;
- (id)deletedArticleIDs;
- (id)initWithModifiedArticleIDs:(id)arg1 deletedArticleIDs:(id)arg2;
- (id)modifiedArticleIDs;
- (void)setDeletedArticleIDs:(id)arg1;
- (void)setModifiedArticleIDs:(id)arg1;

@end
