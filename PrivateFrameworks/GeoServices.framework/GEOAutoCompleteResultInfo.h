/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAutoCompleteResultInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int suggestionsAcType : 1; 
    }  _has;
    int  _suggestionsAcType;
}

@property (nonatomic) bool hasSuggestionsAcType;
@property (nonatomic) int suggestionsAcType;

- (int)StringAsSuggestionsAcType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSuggestionsAcType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSuggestionsAcType:(bool)arg1;
- (void)setSuggestionsAcType:(int)arg1;
- (int)suggestionsAcType;
- (id)suggestionsAcTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end