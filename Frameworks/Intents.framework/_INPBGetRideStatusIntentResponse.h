/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetRideStatusIntentResponse : PBCodable <NSCopying> {
    _INPBRideStatus * _rideStatus;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasRideStatus;
@property (nonatomic, retain) _INPBRideStatus *rideStatus;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRideStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rideStatus;
- (void)setRideStatus:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
