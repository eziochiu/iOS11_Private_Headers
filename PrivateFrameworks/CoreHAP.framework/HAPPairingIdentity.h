/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairingIdentity : HMFObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _permissions;
    HAPPairingKey * _privateKey;
    HAPPairingKey * _publicKey;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long permissions;
@property (nonatomic, readonly) HAPPairingKey *privateKey;
@property (nonatomic, readonly) HAPPairingKey *publicKey;

+ (id)pairingIdentityWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)dictionaryEncoding;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)permissions;
- (id)privateKey;
- (id)publicKey;
- (id)shortDescription;
- (void)updateWithDictionary:(id)arg1;

@end
