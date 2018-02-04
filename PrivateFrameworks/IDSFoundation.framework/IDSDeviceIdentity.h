/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSDeviceIdentity : NSObject <ENDeviceKey> {
    IDSAccountIdentity * _accountIdentity;
    IDSMPFullLegacyIdentity * _legacyIdentity;
    IDSMPFullDeviceIdentity * _modernIdentity;
}

@property (nonatomic, readonly) IDSAccountIdentity *accountIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <ENDevicePublicKey> *devicePublicKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSMPFullLegacyIdentity *legacyIdentity;
@property (nonatomic, readonly) IDSMPFullDeviceIdentity *modernIdentity;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devicePublicKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3;
- (id)legacyIdentity;
- (id)modernIdentity;

@end