/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCGroupConfig : NSObject {
    NSDictionary * _articleMetadataByArticleID;
    unsigned long long  _cutoffCount;
    unsigned long long  _cutoffTimeSecs;
    NSDictionary * _dictionary;
    FCColor * _groupTitleColor;
}

@property (nonatomic, readonly) NSString *articleListID;
@property (nonatomic, retain) NSDictionary *articleMetadataByArticleID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic) unsigned long long cutoffCount;
@property (nonatomic) unsigned long long cutoffTimeSecs;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *feedID;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, retain) FCColor *groupTitleColor;
@property (nonatomic, readonly) NSString *sectionID;

- (void).cxx_destruct;
- (id)articleListID;
- (id)articleMetadataByArticleID;
- (id)channelID;
- (unsigned long long)cutoffCount;
- (unsigned long long)cutoffTimeSecs;
- (id)dictionary;
- (id)feedID;
- (id)groupName;
- (id)groupTitleColor;
- (id)initWithDictionary:(id)arg1;
- (id)sectionID;
- (void)setArticleMetadataByArticleID:(id)arg1;
- (void)setCutoffCount:(unsigned long long)arg1;
- (void)setCutoffTimeSecs:(unsigned long long)arg1;
- (void)setDictionary:(id)arg1;
- (void)setGroupTitleColor:(id)arg1;

@end
