/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFECKeyPair : _SFKeyPair {
    id  _ecKeyPairInternal;
}

@property (nonatomic, readonly, copy) _SFECKeySpecifier *keySpecifier;

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (id)_specifierForSecKey:(struct __SecKey { }*)arg1;

- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(struct NSString { Class x1; }*)arg2;
- (id)performWithCCKey:(id /* block */)arg1;
- (id)publicKey;

@end
