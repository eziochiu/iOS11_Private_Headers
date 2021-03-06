/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBBalanceAmountValue : PBCodable <NSCopying> {
    _INPBCurrencyAmountValue * _currencyAmount;
    _INPBDecimalNumberValue * _customAmount;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBCurrencyAmountValue *currencyAmount;
@property (nonatomic, retain) _INPBDecimalNumberValue *customAmount;
@property (nonatomic, readonly) bool hasCurrencyAmount;
@property (nonatomic, readonly) bool hasCustomAmount;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)customAmount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrencyAmount;
- (bool)hasCustomAmount;
- (bool)hasType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setCustomAmount:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
