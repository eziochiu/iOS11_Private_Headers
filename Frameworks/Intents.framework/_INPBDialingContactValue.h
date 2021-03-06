/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDialingContactValue : PBCodable <NSCopying> {
    _INPBContactValue * _dialingContact;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBContactValue *dialingContact;
@property (nonatomic, readonly) bool hasDialingContact;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialingContact;
- (id)dictionaryRepresentation;
- (bool)hasDialingContact;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDialingContact:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
