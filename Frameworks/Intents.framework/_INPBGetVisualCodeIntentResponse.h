/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetVisualCodeIntentResponse : PBCodable <NSCopying> {
    PBUnknownFields * _unknownFields;
    _INPBImageValue * _visualCodeImage;
}

@property (nonatomic, readonly) bool hasVisualCodeImage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBImageValue *visualCodeImage;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVisualCodeImage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVisualCodeImage:(id)arg1;
- (id)unknownFields;
- (id)visualCodeImage;
- (void)writeTo:(id)arg1;

@end
