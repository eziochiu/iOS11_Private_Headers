/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPaymentAmountValue : PBCodable <NSCopying> {
    int  _amountType;
    struct { 
        unsigned int amountType : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
    _INPBCurrencyAmountValue * _value;
}

@property (nonatomic) int amountType;
@property (nonatomic) bool hasAmountType;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBCurrencyAmountValue *value;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAmountType:(id)arg1;
- (int)amountType;
- (id)amountTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmountType;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmountType:(int)arg1;
- (void)setHasAmountType:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)unknownFields;
- (id)value;
- (void)writeTo:(id)arg1;

@end
