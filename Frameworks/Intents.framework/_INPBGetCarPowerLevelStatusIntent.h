/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetCarPowerLevelStatusIntent : PBCodable <NSCopying> {
    _INPBDataString * _carName;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDataString *carName;
@property (nonatomic, readonly) bool hasCarName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)carName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCarName;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarName:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
