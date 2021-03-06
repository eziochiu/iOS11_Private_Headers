/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCardSecondaryManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController {
    bool  _suppressPrimarySetupFields;
}

@property (nonatomic) bool suppressPrimarySetupFields;

- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (id)newPaymentEligibilityRequest;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)readonlyFieldIdentifiers;
- (void)setSuppressPrimarySetupFields:(bool)arg1;
- (bool)suppressPrimarySetupFields;
- (void)viewDidLoad;
- (id)visibleFieldIdentifiers;

@end
