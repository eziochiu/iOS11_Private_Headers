/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWidgetEngagement : PBCodable <NSCopying> {
    NSString * _articleId;
    NSData * _articleViewingSessionId;
    struct { 
        unsigned int widgetArticleCount : 1; 
        unsigned int widgetArticleCountInSection : 1; 
        unsigned int widgetArticleRank : 1; 
        unsigned int widgetArticleRankInSection : 1; 
        unsigned int widgetEngagementType : 1; 
        unsigned int widgetSectionDisplayRank : 1; 
        unsigned int widgetVideoPresentationReason : 1; 
    }  _has;
    NSMutableArray * _otherVisibleSections;
    NSString * _sourceChannelId;
    int  _widgetArticleCount;
    int  _widgetArticleCountInSection;
    int  _widgetArticleRank;
    int  _widgetArticleRankInSection;
    int  _widgetEngagementType;
    int  _widgetSectionDisplayRank;
    NSString * _widgetSectionId;
    NSString * _widgetUserId;
    int  _widgetVideoPresentationReason;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) bool hasWidgetArticleCount;
@property (nonatomic) bool hasWidgetArticleCountInSection;
@property (nonatomic) bool hasWidgetArticleRank;
@property (nonatomic) bool hasWidgetArticleRankInSection;
@property (nonatomic) bool hasWidgetEngagementType;
@property (nonatomic) bool hasWidgetSectionDisplayRank;
@property (nonatomic, readonly) bool hasWidgetSectionId;
@property (nonatomic, readonly) bool hasWidgetUserId;
@property (nonatomic) bool hasWidgetVideoPresentationReason;
@property (nonatomic, retain) NSMutableArray *otherVisibleSections;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) int widgetArticleCountInSection;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic) int widgetArticleRankInSection;
@property (nonatomic) int widgetEngagementType;
@property (nonatomic) int widgetSectionDisplayRank;
@property (nonatomic, retain) NSString *widgetSectionId;
@property (nonatomic, retain) NSString *widgetUserId;
@property (nonatomic) int widgetVideoPresentationReason;

+ (Class)otherVisibleSectionsType;

- (void).cxx_destruct;
- (int)StringAsWidgetVideoPresentationReason:(id)arg1;
- (void)addOtherVisibleSections:(id)arg1;
- (id)articleId;
- (id)articleViewingSessionId;
- (void)clearOtherVisibleSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionId;
- (bool)hasSourceChannelId;
- (bool)hasWidgetArticleCount;
- (bool)hasWidgetArticleCountInSection;
- (bool)hasWidgetArticleRank;
- (bool)hasWidgetArticleRankInSection;
- (bool)hasWidgetEngagementType;
- (bool)hasWidgetSectionDisplayRank;
- (bool)hasWidgetSectionId;
- (bool)hasWidgetUserId;
- (bool)hasWidgetVideoPresentationReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)otherVisibleSections;
- (id)otherVisibleSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)otherVisibleSectionsCount;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setHasWidgetArticleCount:(bool)arg1;
- (void)setHasWidgetArticleCountInSection:(bool)arg1;
- (void)setHasWidgetArticleRank:(bool)arg1;
- (void)setHasWidgetArticleRankInSection:(bool)arg1;
- (void)setHasWidgetEngagementType:(bool)arg1;
- (void)setHasWidgetSectionDisplayRank:(bool)arg1;
- (void)setHasWidgetVideoPresentationReason:(bool)arg1;
- (void)setOtherVisibleSections:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setWidgetArticleCount:(int)arg1;
- (void)setWidgetArticleCountInSection:(int)arg1;
- (void)setWidgetArticleRank:(int)arg1;
- (void)setWidgetArticleRankInSection:(int)arg1;
- (void)setWidgetEngagementType:(int)arg1;
- (void)setWidgetSectionDisplayRank:(int)arg1;
- (void)setWidgetSectionId:(id)arg1;
- (void)setWidgetUserId:(id)arg1;
- (void)setWidgetVideoPresentationReason:(int)arg1;
- (id)sourceChannelId;
- (int)widgetArticleCount;
- (int)widgetArticleCountInSection;
- (int)widgetArticleRank;
- (int)widgetArticleRankInSection;
- (int)widgetEngagementType;
- (int)widgetSectionDisplayRank;
- (id)widgetSectionId;
- (id)widgetUserId;
- (int)widgetVideoPresentationReason;
- (id)widgetVideoPresentationReasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
