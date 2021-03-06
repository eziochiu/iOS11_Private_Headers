/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDeviceToDeviceEncryptionHelper : NSObject {
    AKAppleIDAuthenticationController * _authController;
    <AAUIDeviceToDeviceEncryptionHelperDelegate> * _delegate;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) AKAppleIDAuthenticationController *authController;
@property (nonatomic) <AAUIDeviceToDeviceEncryptionHelperDelegate> *delegate;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_authenticateContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_encryptionErrorFromError:(id)arg1;
- (bool)_hasPasscode;
- (bool)_isHSA2AvailableForAuthenticationContext:(id)arg1;
- (void)_validateCDPStateForAuthResults:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_validatePasscodeWithCompletion:(id /* block */)arg1;
- (id)authController;
- (id)delegate;
- (id)initWithPresentingViewController:(id)arg1;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)presentingViewController;
- (void)setAuthController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
