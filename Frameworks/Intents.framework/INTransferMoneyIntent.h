/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTransferMoneyIntent : INIntent <INTransferMoneyIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INPaymentAccount *fromAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INPaymentAccount *toAccount;
@property (nonatomic, readonly, copy) INPaymentAmount *transactionAmount;
@property (nonatomic, readonly, copy) NSString *transactionNote;
@property (nonatomic, readonly, copy) INDateComponentsRange *transactionScheduledDate;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)domain;
- (id)fromAccount;
- (id)initWithFromAccount:(id)arg1 toAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setToAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)toAccount;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (id)verb;

@end