/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFAuthenticatedCiphertext : _SFCiphertext {
    id  _authenticatedCiphertextInternal;
}

@property (readonly) NSData *authenticationCode;
@property (readonly) NSData *initializationVector;

- (void).cxx_destruct;
- (id)authenticationCode;
- (id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3;
- (id)initializationVector;

@end
