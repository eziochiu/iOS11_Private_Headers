/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface Converter : NSObject {
    NSArray * _additionalResults;
    NSString * _conversionType;
    float  _currencyUpdateTimeOut;
    NSString * _inputString;
    NSString * _inputUnit;
    NSNumber * _inputValue;
    bool  _isCurrency;
    NSString * _localizedInputValueAndUnit;
    NSString * _localizedOutputUnit;
    NSString * _localizedOutputValue;
    NSString * _localizedOutputValueAndUnit;
    NSString * _outputUnit;
    NSNumber * _outputValue;
}

@property (nonatomic, retain) NSArray *additionalResults;
@property (nonatomic, retain) NSString *conversionType;
@property float currencyUpdateTimeOut;
@property (nonatomic, retain) NSString *inputString;
@property (nonatomic, retain) NSString *inputUnit;
@property (nonatomic, retain) NSNumber *inputValue;
@property (readonly) bool isCurrency;
@property (nonatomic, retain) NSString *localizedInputValueAndUnit;
@property (nonatomic, retain) NSString *localizedOutputUnit;
@property (nonatomic, retain) NSString *localizedOutputValue;
@property (nonatomic, retain) NSString *localizedOutputValueAndUnit;
@property (nonatomic, retain) NSString *outputUnit;
@property (nonatomic, retain) NSNumber *outputValue;

+ (id)currencyCacheLastRefreshDate;
+ (id)dispatchQueue;
+ (void)initialize;
+ (bool)refreshCurrencyCache;

- (double)_doubleWithoutUnrelevantDecimalsForNumber:(id)arg1;
- (id)_localizedPluralizedStringsforNumber:(id)arg1 unit:(id)arg2;
- (id)_normalizedUnitNamesForName:(id)arg1;
- (id)_operateConversionForOutputUnit:(id)arg1;
- (bool)_parseInputQuery;
- (void)_performUnitPluralization;
- (void)_standardizeInputAndOutputUnits;
- (id)_unitInfoForNormalizedName:(id)arg1;
- (void)_updateInputValueFromMatch:(id)arg1;
- (id)additionalResults;
- (id)conversionType;
- (float)currencyUpdateTimeOut;
- (void)dealloc;
- (id)initWithInput:(id)arg1;
- (id)inputString;
- (id)inputUnit;
- (id)inputValue;
- (bool)isCurrency;
- (id)localizedInputValueAndUnit;
- (id)localizedOutputUnit;
- (id)localizedOutputValue;
- (id)localizedOutputValueAndUnit;
- (id)outputUnit;
- (id)outputValue;
- (void)processConversionWithCompletion:(id /* block */)arg1;
- (void)setAdditionalResults:(id)arg1;
- (void)setConversionType:(id)arg1;
- (void)setCurrencyUpdateTimeOut:(float)arg1;
- (void)setInputString:(id)arg1;
- (void)setInputUnit:(id)arg1;
- (void)setInputValue:(id)arg1;
- (void)setLocalizedInputValueAndUnit:(id)arg1;
- (void)setLocalizedOutputUnit:(id)arg1;
- (void)setLocalizedOutputValue:(id)arg1;
- (void)setLocalizedOutputValueAndUnit:(id)arg1;
- (void)setOutputUnit:(id)arg1;
- (void)setOutputValue:(id)arg1;
- (id)similarUnitsForNormalizedName:(id)arg1;

@end