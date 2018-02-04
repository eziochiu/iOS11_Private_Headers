/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSource : PBCodable <NSCopying> {
    struct { 
        unsigned int resultProviderId : 1; 
    }  _has;
    int  _resultProviderId;
    NSString * _sourceId;
    PBUnknownFields * _unknownFields;
    NSString * _version;
}

@property (nonatomic) bool hasResultProviderId;
@property (nonatomic, readonly) bool hasSourceId;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic) int resultProviderId;
@property (nonatomic, retain) NSString *sourceId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResultProviderId;
- (bool)hasSourceId;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setHasResultProviderId:(bool)arg1;
- (void)setResultProviderId:(int)arg1;
- (void)setSourceId:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)sourceId;
- (id)unknownFields;
- (id)version;
- (void)writeTo:(id)arg1;

@end