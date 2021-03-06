/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDeveloperAttribute : NSObject {
    long long  _autocorrectionType;
    NSString * _displayName;
    NSString * _keyPath;
    long long  _keyboardType;
    NSString * _placeholder;
    long long  _spellCheckingType;
    NSValueTransformer * _valueTransformer;
}

@property (nonatomic) long long autocorrectionType;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic, retain) NSValueTransformer *valueTransformer;

+ (id)standardAttributes;

- (void).cxx_destruct;
- (long long)autocorrectionType;
- (id)displayName;
- (id)init;
- (id)keyPath;
- (long long)keyboardType;
- (id)placeholder;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setSpellCheckingType:(long long)arg1;
- (void)setValueTransformer:(id)arg1;
- (long long)spellCheckingType;
- (id)valueTransformer;

@end
