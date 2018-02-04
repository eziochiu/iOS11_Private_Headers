/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricSignatureOperation : ISOperation {
    ISBiometricStore * _biometricStore;
    SSBiometricAuthenticationContext * _context;
    ISDialog * _fallbackDialog;
    id /* block */  _outputBlock;
    ISTouchIDDialog * _touchIDDialog;
}

@property (nonatomic, retain) ISBiometricStore *biometricStore;
@property (retain) SSBiometricAuthenticationContext *context;
@property (nonatomic, retain) ISDialog *fallbackDialog;
@property (copy) id /* block */ outputBlock;
@property (nonatomic, retain) ISTouchIDDialog *touchIDDialog;

- (void).cxx_destruct;
- (bool)_promptUserToAuthenticateForIdentityMapChangeWithAccountIdentifier:(id)arg1 accountName:(id)arg2;
- (id)biometricStore;
- (id)context;
- (id)fallbackDialog;
- (id)initWithBiometricAuthenticationContext:(id)arg1 touchIDDialog:(id)arg2 fallbackDialog:(id)arg3;
- (id /* block */)outputBlock;
- (void)run;
- (void)setBiometricStore:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFallbackDialog:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setTouchIDDialog:(id)arg1;
- (id)touchIDDialog;

@end