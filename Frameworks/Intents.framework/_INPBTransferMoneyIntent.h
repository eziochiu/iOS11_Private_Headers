/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTransferMoneyIntent : PBCodable <NSCopying> {
    _INPBFinancialAccountValue * _fromAccount;
    _INPBIntentMetadata * _intentMetadata;
    _INPBFinancialAccountValue * _toAccount;
    _INPBPaymentAmountValue * _transactionAmount;
    NSString * _transactionNote;
    _INPBDateTimeRange * _transactionScheduledDate;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBFinancialAccountValue *fromAccount;
@property (nonatomic, readonly) bool hasFromAccount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasToAccount;
@property (nonatomic, readonly) bool hasTransactionAmount;
@property (nonatomic, readonly) bool hasTransactionNote;
@property (nonatomic, readonly) bool hasTransactionScheduledDate;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBFinancialAccountValue *toAccount;
@property (nonatomic, retain) _INPBPaymentAmountValue *transactionAmount;
@property (nonatomic, retain) NSString *transactionNote;
@property (nonatomic, retain) _INPBDateTimeRange *transactionScheduledDate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fromAccount;
- (bool)hasFromAccount;
- (bool)hasIntentMetadata;
- (bool)hasToAccount;
- (bool)hasTransactionAmount;
- (bool)hasTransactionNote;
- (bool)hasTransactionScheduledDate;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setToAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (id)toAccount;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end