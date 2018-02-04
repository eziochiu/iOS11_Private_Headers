/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFIESCiphertext : _SFCiphertext {
    id  _iesCiphertextInternal;
}

@property (readonly) NSData *authenticationCode;
@property (readonly) _SFECPublicKey *ephemeralSenderPublicKey;

- (void).cxx_destruct;
- (id)authenticationCode;
- (id)ephemeralSenderPublicKey;
- (id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3;

@end
