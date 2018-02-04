/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleList : NSObject {
    NSArray * _articleIDs;
    FCArticleListEditorialMetadata * _editorialMetadata;
    NSString * _identifier;
    FCInterestToken * _interestToken;
    NSDate * _lastModifiedDate;
    NTPBArticleListRecord * _record;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSArray *articleIDs;
@property (nonatomic, readonly) FCArticleListEditorialMetadata *editorialMetadata;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) FCInterestToken *interestToken;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NTPBArticleListRecord *record;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)articleIDs;
- (id)editorialMetadata;
- (id)identifier;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;
- (id)interestToken;
- (id)lastModifiedDate;
- (id)record;
- (unsigned long long)type;

@end