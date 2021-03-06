/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOServicesState : PBCodable <NSCopying> {
    NSString * _bogusFieldForTestingPurposes;
}

@property (nonatomic, retain) NSString *bogusFieldForTestingPurposes;
@property (nonatomic, readonly) bool hasBogusFieldForTestingPurposes;

- (void).cxx_destruct;
- (id)bogusFieldForTestingPurposes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBogusFieldForTestingPurposes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBogusFieldForTestingPurposes:(id)arg1;
- (void)writeTo:(id)arg1;

@end
