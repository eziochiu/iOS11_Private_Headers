/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int spokenGuidanceIndex : 1; 
        unsigned int shortPrompt : 1; 
    }  _has;
    bool  _shortPrompt;
    int  _spokenGuidanceIndex;
}

@property (nonatomic) bool hasShortPrompt;
@property (nonatomic) bool hasSpokenGuidanceIndex;
@property (nonatomic) bool shortPrompt;
@property (nonatomic) int spokenGuidanceIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShortPrompt;
- (bool)hasSpokenGuidanceIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShortPrompt:(bool)arg1;
- (void)setHasSpokenGuidanceIndex:(bool)arg1;
- (void)setShortPrompt:(bool)arg1;
- (void)setSpokenGuidanceIndex:(int)arg1;
- (bool)shortPrompt;
- (int)spokenGuidanceIndex;
- (void)writeTo:(id)arg1;

@end
