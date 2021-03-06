/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadNeedsValue : PBCodable <NSCopying> {
    NSMutableArray * _promptItems;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *promptItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)promptItemsType;

- (void).cxx_destruct;
- (void)addPromptItems:(id)arg1;
- (void)clearPromptItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)promptItems;
- (id)promptItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)promptItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setPromptItems:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
