/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBLinkTapArticle : PBCodable <NSCopying> {
    NSString * _articleId;
    int  _articleType;
    struct { 
        unsigned int articleType : 1; 
    }  _has;
    NSString * _linkUrl;
    NSString * _referencedArticleId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) int articleType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasArticleType;
@property (nonatomic, readonly) bool hasLinkUrl;
@property (nonatomic, readonly) bool hasReferencedArticleId;
@property (nonatomic, retain) NSString *linkUrl;
@property (nonatomic, retain) NSString *referencedArticleId;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (id)articleId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleId;
- (bool)hasArticleType;
- (bool)hasLinkUrl;
- (bool)hasReferencedArticleId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)linkUrl;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleId;
- (void)setArticleId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setHasArticleType:(bool)arg1;
- (void)setLinkUrl:(id)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)writeTo:(id)arg1;

@end