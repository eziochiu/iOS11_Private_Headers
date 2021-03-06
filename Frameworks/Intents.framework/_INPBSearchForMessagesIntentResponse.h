/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForMessagesIntentResponse : PBCodable <NSCopying> {
    NSMutableArray * _messages;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *messages;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)messagesType;
+ (id)options;

- (void).cxx_destruct;
- (void)addMessages:(id)arg1;
- (void)clearMessages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messages;
- (id)messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)messagesCount;
- (bool)readFrom:(id)arg1;
- (void)setMessages:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
