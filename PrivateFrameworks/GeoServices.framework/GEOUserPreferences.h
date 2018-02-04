/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserPreferences : PBCodable <NSCopying> {
    bool  _avoidHighways;
    bool  _avoidTolls;
    struct { 
        unsigned int avoidHighways : 1; 
        unsigned int avoidTolls : 1; 
    }  _has;
}

@property (nonatomic) bool avoidHighways;
@property (nonatomic) bool avoidTolls;
@property (nonatomic) bool hasAvoidHighways;
@property (nonatomic) bool hasAvoidTolls;

- (bool)avoidHighways;
- (bool)avoidTolls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAvoidHighways;
- (bool)hasAvoidTolls;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvoidHighways:(bool)arg1;
- (void)setAvoidTolls:(bool)arg1;
- (void)setHasAvoidHighways:(bool)arg1;
- (void)setHasAvoidTolls:(bool)arg1;
- (void)writeTo:(id)arg1;

@end