/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableRelationshipEvent : PBCodable <NSCopying> {
    long long  _anchor;
    struct { 
        unsigned int anchor : 1; 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
        unsigned int version : 1; 
    }  _has;
    double  _timestamp;
    long long  _type;
    long long  _version;
}

@property (nonatomic) long long anchor;
@property (nonatomic) bool hasAnchor;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasVersion;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (nonatomic) long long version;

- (long long)anchor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnchor;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnchor:(long long)arg1;
- (void)setHasAnchor:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (double)timestamp;
- (long long)type;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
