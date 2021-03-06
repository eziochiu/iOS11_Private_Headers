/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDataString : PBCodable <NSCopying> {
    NSMutableArray * _alternatives;
    NSString * _localizedValue;
    PBUnknownFields * _unknownFields;
    NSString * _vocabularyIdentifier;
}

@property (nonatomic, retain) NSMutableArray *alternatives;
@property (nonatomic, readonly) bool hasLocalizedValue;
@property (nonatomic, readonly) bool hasVocabularyIdentifier;
@property (nonatomic, retain) NSString *localizedValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *vocabularyIdentifier;

+ (Class)alternativesType;
+ (id)options;

- (void).cxx_destruct;
- (void)addAlternatives:(id)arg1;
- (id)alternatives;
- (id)alternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativesCount;
- (void)clearAlternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalizedValue;
- (bool)hasVocabularyIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedValue;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlternatives:(id)arg1;
- (void)setLocalizedValue:(id)arg1;
- (void)setVocabularyIdentifier:(id)arg1;
- (id)unknownFields;
- (id)vocabularyIdentifier;
- (void)writeTo:(id)arg1;

@end
