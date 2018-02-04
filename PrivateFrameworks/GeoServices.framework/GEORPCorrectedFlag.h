/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedFlag : PBCodable <NSCopying> {
    bool  _correctedValue;
    int  _flag;
    struct { 
        unsigned int flag : 1; 
        unsigned int correctedValue : 1; 
        unsigned int originalValue : 1; 
    }  _has;
    bool  _originalValue;
}

@property (nonatomic) bool correctedValue;
@property (nonatomic) int flag;
@property (nonatomic) bool hasCorrectedValue;
@property (nonatomic) bool hasFlag;
@property (nonatomic) bool hasOriginalValue;
@property (nonatomic) bool originalValue;

- (int)StringAsFlag:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)correctedValue;
- (id)description;
- (id)dictionaryRepresentation;
- (int)flag;
- (id)flagAsString:(int)arg1;
- (bool)hasCorrectedValue;
- (bool)hasFlag;
- (bool)hasOriginalValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)originalValue;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedValue:(bool)arg1;
- (void)setFlag:(int)arg1;
- (void)setHasCorrectedValue:(bool)arg1;
- (void)setHasFlag:(bool)arg1;
- (void)setHasOriginalValue:(bool)arg1;
- (void)setOriginalValue:(bool)arg1;
- (void)writeTo:(id)arg1;

@end