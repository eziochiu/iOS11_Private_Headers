/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEnterValueNewBalanceView : UIView {
    NSDecimalNumber * _additionalAmount;
    NSDecimalNumber * _cardBalance;
    NSString * _currencyCode;
    NSNumberFormatter * _currentAmountFormatter;
    NSDecimalNumber * _maxBalance;
    NSDecimalNumber * _maxLoadAmount;
    NSString * _maxLoadAmountText;
    NSDecimalNumber * _minBalance;
    NSDecimalNumber * _minLoadAmount;
    UILabel * _newBalanceAmount;
    UILabel * _newBalancePrompt;
    NSString * _promptText;
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
    bool  _subtractAdditionalAmountFromCurrentAmount;
    NSString * _updatedBalancePromptText;
}

@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSDecimalNumber *maxBalance;
@property (nonatomic, copy) NSDecimalNumber *maxLoadAmount;
@property (nonatomic, copy) NSString *maxLoadAmountText;
@property (nonatomic, copy) NSDecimalNumber *minBalance;
@property (nonatomic, copy) NSDecimalNumber *minLoadAmount;
@property (nonatomic, copy) NSString *promptText;
@property (nonatomic, copy) NSString *updatedBalancePromptText;

- (void).cxx_destruct;
- (void)_addSubviews;
- (void)_createAmountFormatter;
- (id)_formattedStringForAmount:(id)arg1;
- (void)_updateAdditionalAmount:(id)arg1 subtractAdditionalAmountFromCurrentAmount:(bool)arg2;
- (void)_updateBalanceText;
- (void)addAmountToBalance:(id)arg1;
- (id)cardBalance;
- (id)currencyCode;
- (id)init;
- (id)initWithCurrencyCode:(id)arg1;
- (void)layoutSubviews;
- (id)maxBalance;
- (id)maxLoadAmount;
- (id)maxLoadAmountText;
- (id)minBalance;
- (id)minLoadAmount;
- (id)promptText;
- (void)setCardBalance:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMaxLoadAmountText:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)setPromptText:(id)arg1;
- (void)setUpdatedBalancePromptText:(id)arg1;
- (void)showSpinner:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)subtractAmountFromBalance:(id)arg1;
- (id)updatedBalancePromptText;

@end
