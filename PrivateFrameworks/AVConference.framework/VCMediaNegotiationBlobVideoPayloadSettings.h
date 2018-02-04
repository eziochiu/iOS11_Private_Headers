/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying> {
    NSString * _featureString;
    unsigned int  _parameterSet;
    unsigned int  _payload;
    NSMutableArray * _videoRuleCollections;
}

@property (nonatomic, retain) NSString *featureString;
@property (nonatomic) unsigned int parameterSet;
@property (nonatomic) unsigned int payload;
@property (nonatomic, retain) NSMutableArray *videoRuleCollections;

+ (Class)videoRuleCollectionsType;

- (void)addVideoRuleCollections:(id)arg1;
- (void)clearVideoRuleCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)parameterSet;
- (unsigned int)payload;
- (bool)readFrom:(id)arg1;
- (void)setFeatureString:(id)arg1;
- (void)setParameterSet:(unsigned int)arg1;
- (void)setPayload:(unsigned int)arg1;
- (void)setVideoRuleCollections:(id)arg1;
- (id)videoRuleCollections;
- (id)videoRuleCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoRuleCollectionsCount;
- (void)writeTo:(id)arg1;

@end