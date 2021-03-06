/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
 */

@interface RPPINEntryView : UIView <UIKeyInput, UITextInputTraits> {
    bool  _alphaNumeric;
    bool  _disabled;
    NSArray * _fields;
    NSMutableString * _text;
    id /* block */  _textChangedHandler;
}

@property (nonatomic) bool alphaNumeric;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, retain) NSArray *fields;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) id /* block */ textChangedHandler;
@property (nonatomic, copy) NSString *textContentType;

- (void).cxx_destruct;
- (void)_updateFields;
- (bool)alphaNumeric;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (bool)disabled;
- (id)fields;
- (bool)hasText;
- (void)insertText:(id)arg1;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (bool)resignFirstResponder;
- (void)setAlphaNumeric:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setFields:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextChangedHandler:(id /* block */)arg1;
- (long long)spellCheckingType;
- (id)text;
- (id /* block */)textChangedHandler;

@end
