/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentType : PBCodable <NSCopying> {
    NSString * _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
