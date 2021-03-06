/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselPreviousExit : PBCodable <NSCopying> {
    unsigned long long  _elapsedTime;
    struct { 
        unsigned int elapsedTime : 1; 
        unsigned int reason : 1; 
    }  _has;
    unsigned int  _reason;
}

@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) bool hasElapsedTime;
@property (nonatomic) bool hasReason;
@property (nonatomic) unsigned int reason;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)elapsedTime;
- (bool)hasElapsedTime;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (void)setElapsedTime:(unsigned long long)arg1;
- (void)setHasElapsedTime:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
