/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordAutocorrections : TITypologyRecord {
    TIAutocorrectionList * _autocorrections;
    TIKeyboardState * _keyboardState;
    bool  _listUIDisplayed;
}

@property (nonatomic, retain) TIAutocorrectionList *autocorrections;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic) bool listUIDisplayed;

- (void)applyToStatistic:(id)arg1;
- (id)autocorrections;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyboardState;
- (bool)listUIDisplayed;
- (void)setAutocorrections:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setListUIDisplayed:(bool)arg1;
- (id)shortDescription;

@end
