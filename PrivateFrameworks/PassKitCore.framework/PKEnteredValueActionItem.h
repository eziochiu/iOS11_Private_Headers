/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKEnteredValueActionItem : NSObject <NSSecureCoding> {
    NSString * _currency;
    NSArray * _defaultSuggestions;
    NSDecimalNumber * _maxAmount;
    bool  _maxAmountIncludesLocalBalance;
    NSDecimalNumber * _minAmount;
    NSDictionary * _serviceProviderData;
}

@property (nonatomic, readonly, copy) NSString *currency;
@property (nonatomic, readonly, copy) NSArray *defaultSuggestions;
@property (nonatomic, readonly, copy) NSDecimalNumber *maxAmount;
@property (nonatomic, readonly) bool maxAmountIncludesLocalBalance;
@property (nonatomic, readonly, copy) NSDecimalNumber *minAmount;
@property (nonatomic, readonly, copy) NSDictionary *serviceProviderData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processLocalizableStrings:(id /* block */)arg1;
- (id)currency;
- (id)defaultSuggestions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)maxAmount;
- (bool)maxAmountIncludesLocalBalance;
- (id)minAmount;
- (id)serviceProviderData;

@end
