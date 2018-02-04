/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {
    bool  _allowsNewlineAcceptance;
    bool  _autoAcceptWhenMaxNumbersMet;
    unsigned long long  _maxNumbersAllowed;
    NSMutableCharacterSet * _numericTrimmingSet;
}

@property (nonatomic) bool allowsNewlineAcceptance;
@property (nonatomic) bool autoAcceptWhenMaxNumbersMet;
@property (nonatomic) unsigned long long maxNumbersAllowed;

+ (bool)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;

- (void).cxx_destruct;
- (void)_appendString:(id)arg1;
- (void)_deleteLastCharacter;
- (bool)_hasMaxDigitsSpecified;
- (void)_reallyAppendString:(id)arg1;
- (bool)allowsNewlineAcceptance;
- (bool)autoAcceptWhenMaxNumbersMet;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (unsigned long long)maxNumbersAllowed;
- (bool)resignFirstResponder;
- (void)setAllowsNewlineAcceptance:(bool)arg1;
- (void)setAutoAcceptWhenMaxNumbersMet:(bool)arg1;
- (void)setMaxNumbersAllowed:(unsigned long long)arg1;
- (bool)shouldInsertPasscodeText:(id)arg1;

@end