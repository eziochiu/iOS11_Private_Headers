/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRColorProtobuf : PBCodable <NSCopying> {
    float  _alpha;
    float  _blue;
    float  _green;
    struct { 
        unsigned int alpha : 1; 
        unsigned int blue : 1; 
        unsigned int green : 1; 
        unsigned int red : 1; 
    }  _has;
    float  _red;
}

@property (nonatomic) float alpha;
@property (nonatomic) float blue;
@property (nonatomic) float green;
@property (nonatomic) bool hasAlpha;
@property (nonatomic) bool hasBlue;
@property (nonatomic) bool hasGreen;
@property (nonatomic) bool hasRed;
@property (nonatomic) float red;

- (float)alpha;
- (float)blue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)green;
- (bool)hasAlpha;
- (bool)hasBlue;
- (bool)hasGreen;
- (bool)hasRed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (float)red;
- (void)setAlpha:(float)arg1;
- (void)setBlue:(float)arg1;
- (void)setGreen:(float)arg1;
- (void)setHasAlpha:(bool)arg1;
- (void)setHasBlue:(bool)arg1;
- (void)setHasGreen:(bool)arg1;
- (void)setHasRed:(bool)arg1;
- (void)setRed:(float)arg1;
- (void)writeTo:(id)arg1;

@end