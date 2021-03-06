/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCreateNoteIntentResponse : PBCodable <NSCopying> {
    _INPBNote * _createdNote;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBNote *createdNote;
@property (nonatomic, readonly) bool hasCreatedNote;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdNote;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreatedNote;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedNote:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
