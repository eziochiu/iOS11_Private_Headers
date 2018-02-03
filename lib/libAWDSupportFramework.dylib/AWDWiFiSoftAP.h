/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiSoftAP : PBCodable <NSCopying> {
    unsigned int  _bringUpMethod;
    struct { 
        unsigned int misToSoftAPActiveTimeInMilliseconds : 1; 
        unsigned int timestamp : 1; 
        unsigned int bringUpMethod : 1; 
        unsigned int reasonCode : 1; 
    }  _has;
    unsigned long long  _misToSoftAPActiveTimeInMilliseconds;
    unsigned int  _reasonCode;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int bringUpMethod;
@property (nonatomic) bool hasBringUpMethod;
@property (nonatomic) bool hasMisToSoftAPActiveTimeInMilliseconds;
@property (nonatomic) bool hasReasonCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long misToSoftAPActiveTimeInMilliseconds;
@property (nonatomic) unsigned int reasonCode;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)bringUpMethod;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBringUpMethod;
- (bool)hasMisToSoftAPActiveTimeInMilliseconds;
- (bool)hasReasonCode;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)misToSoftAPActiveTimeInMilliseconds;
- (bool)readFrom:(id)arg1;
- (unsigned int)reasonCode;
- (void)setBringUpMethod:(unsigned int)arg1;
- (void)setHasBringUpMethod:(bool)arg1;
- (void)setHasMisToSoftAPActiveTimeInMilliseconds:(bool)arg1;
- (void)setHasReasonCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMisToSoftAPActiveTimeInMilliseconds:(unsigned long long)arg1;
- (void)setReasonCode:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
