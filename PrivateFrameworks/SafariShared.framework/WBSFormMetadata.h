/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormMetadata : NSObject <NSSecureCoding> {
    NSURL * _action;
    bool  _allowsAutocomplete;
    NSDictionary * _annotations;
    bool  _bestForCredentialPreFill;
    bool  _bestForPageLevelAutoFill;
    NSString * _confirmPasswordElementUniqueID;
    bool  _containsActiveElement;
    NSArray * _controls;
    NSString * _firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
    bool  _isSearchForm;
    NSString * _oldPasswordElementUniqueID;
    NSString * _passwordElementUniqueID;
    unsigned long long  _requestType;
    NSString * _textSample;
    unsigned long long  _type;
    long long  _uniqueID;
    NSString * _userNameElementUniqueID;
    bool  _usesGeneratedPassword;
    bool  _usesRelAsync;
    bool  _visible;
}

@property (nonatomic, readonly) NSURL *action;
@property (nonatomic, readonly) bool allowsAutocomplete;
@property (nonatomic, readonly, copy) NSDictionary *annotations;
@property (getter=isBestForCredentialPreFill, nonatomic, readonly) bool bestForCredentialPreFill;
@property (getter=isBestForPageLevelAutoFill, nonatomic, readonly) bool bestForPageLevelAutoFill;
@property (nonatomic, readonly, copy) NSString *confirmPasswordElementUniqueID;
@property (nonatomic, readonly) bool containsActiveElement;
@property (nonatomic, readonly, copy) NSArray *controls;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property (nonatomic, readonly) bool isSearchForm;
@property (nonatomic, readonly, copy) NSString *oldPasswordElementUniqueID;
@property (nonatomic, readonly, copy) NSString *passwordElementUniqueID;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly, copy) NSString *textSample;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long uniqueID;
@property (nonatomic, readonly, copy) NSString *userNameElementUniqueID;
@property (nonatomic, readonly) bool usesGeneratedPassword;
@property (nonatomic, readonly) bool usesRelAsync;
@property (getter=isVisible, nonatomic, readonly) bool visible;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)action;
- (bool)allowsAutocomplete;
- (id)annotations;
- (id)confirmPasswordElementUniqueID;
- (bool)containsActiveElement;
- (id)controls;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
- (id)formMetadataByReplacingControlsWith:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSValue:(id)arg1;
- (bool)isBestForCredentialPreFill;
- (bool)isBestForPageLevelAutoFill;
- (bool)isEqual:(id)arg1;
- (bool)isSearchForm;
- (bool)isVisible;
- (id)oldPasswordElementUniqueID;
- (id)passwordElementUniqueID;
- (unsigned long long)requestType;
- (id)textSample;
- (unsigned long long)type;
- (long long)uniqueID;
- (id)userNameElementUniqueID;
- (bool)usesGeneratedPassword;
- (bool)usesRelAsync;

@end