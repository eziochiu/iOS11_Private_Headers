/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformPeerPaymentAddMoneyActionView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPeerPaymentPerformActionView> {
    PKPeerPaymentAccount * _account;
    NSDecimalNumber * _cardBalance;
    NSDecimalNumber * _currentAmount;
    NSNumberFormatter * _currentAmountFormatter;
    <PKPerformActionViewDelegate> * _delegate;
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    NSDecimalNumber * _maxBalance;
    NSDecimalNumber * _maxLoadAmount;
    NSDecimalNumber * _minBalance;
    NSDecimalNumber * _minLoadAmount;
    PKEnterValueNewBalanceView * _newBalanceView;
    PKPaymentPass * _pass;
    PKPeerPaymentService * _peerPaymentService;
    PKNumericSuggestionsEnterValueAlgorithm * _suggestionGenerator;
    PKNumberPadSuggestionsView * _suggestionView;
}

@property (nonatomic, retain) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPerformActionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maxBalance;
@property (nonatomic, copy) NSDecimalNumber *maxLoadAmount;
@property (nonatomic, copy) NSDecimalNumber *minBalance;
@property (nonatomic, copy) NSDecimalNumber *minLoadAmount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_amountTopPadding;
- (void)_createSubviews;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (bool)_isCurrentAmountValid;
- (void)_setRightBarButtonEnabledState;
- (bool)_shouldShakeCard:(id)arg1;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (id)account;
- (id)amountTextField;
- (void)amountTextFieldShouldAcceptTouches:(bool)arg1;
- (id)cardBalance;
- (id)delegate;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2;
- (void)layoutSubviews;
- (id)maxBalance;
- (id)maxLoadAmount;
- (id)minBalance;
- (id)minLoadAmount;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (id)pass;
- (void)saveLastInputValues;
- (id)serviceProviderData;
- (void)setAccount:(id)arg1;
- (void)setCardBalance:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (id)transactionAmount;
- (id)transactionCurrency;
- (void)willDismissViewController;

@end
