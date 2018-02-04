/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPearlPasscodeController : PSUIBiometricController <PSPearlEnrollControllerDelegate> {
    PSPearlAttentionGroupController * _attentionGroupController;
    PSSetupController * _enrollFaceController;
    PSSpecifier * _enrollFaceSpecifier;
    PSSpecifier * _removeFaceSpecifier;
}

@property (nonatomic, retain) PSPearlAttentionGroupController *attentionGroupController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSetupController *enrollFaceController;
@property (nonatomic, retain) PSSpecifier *enrollFaceSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSSpecifier *removeFaceSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attentionGroupController;
- (void)backgrounded:(id)arg1;
- (id)biometricLogo;
- (id)biometricTableViewHeader;
- (void)dealloc;
- (void)dismissPearlIDAboutSheet:(id)arg1;
- (void)enroll:(id)arg1;
- (void)enrollBiometric;
- (id)enrollFaceController;
- (id)enrollFaceSpecifier;
- (id)headerForUseBiometricSection;
- (id)init;
- (bool)isEnrolled;
- (bool)isSafariAutofillRestricted;
- (unsigned long long)numberOfAppsUsingPearl;
- (id)numberOfAppsUsingPearlDescription:(id)arg1;
- (id)passcodeController;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (id)pearlEnrollSpecifiers;
- (void)pearlLearnMoreTapped:(id)arg1;
- (void)popPearlEnrollmentController;
- (void)removeFace:(id)arg1;
- (id)removeFaceSpecifier;
- (id)safariAutoFillEnabled:(id)arg1;
- (void)setAttentionGroupController:(id)arg1;
- (void)setEnrollFaceController:(id)arg1;
- (void)setEnrollFaceSpecifier:(id)arg1;
- (void)setRemoveFaceSpecifier:(id)arg1;
- (void)setSafariAutoFillEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
