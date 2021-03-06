/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetRadioStationIntent : PBCodable <NSCopying> {
    _INPBString * _channel;
    _INPBDouble * _frequency;
    struct { 
        unsigned int radioType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _presetNumber;
    int  _radioType;
    _INPBString * _stationName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *channel;
@property (nonatomic, retain) _INPBDouble *frequency;
@property (nonatomic, readonly) bool hasChannel;
@property (nonatomic, readonly) bool hasFrequency;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPresetNumber;
@property (nonatomic) bool hasRadioType;
@property (nonatomic, readonly) bool hasStationName;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *presetNumber;
@property (nonatomic) int radioType;
@property (nonatomic, retain) _INPBString *stationName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsRadioType:(id)arg1;
- (id)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)frequency;
- (bool)hasChannel;
- (bool)hasFrequency;
- (bool)hasIntentMetadata;
- (bool)hasPresetNumber;
- (bool)hasRadioType;
- (bool)hasStationName;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)presetNumber;
- (int)radioType;
- (id)radioTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setHasRadioType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPresetNumber:(id)arg1;
- (void)setRadioType:(int)arg1;
- (void)setStationName:(id)arg1;
- (id)stationName;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
