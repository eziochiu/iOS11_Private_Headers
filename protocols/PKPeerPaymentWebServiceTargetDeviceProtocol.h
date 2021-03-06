/* made by EzioChiu.
 */

@protocol PKPeerPaymentWebServiceTargetDeviceProtocol <NSObject>

@required

- (PKPeerPaymentAccount *)account;
- (NSString *)bridgedClientInfo;
- (void)cloudStoreStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKAccountInfo *, bool, NSError *, void*
- (void)downloadPassIfNecessaryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)provisionPeerPaymentPassWithProvisioningController:(void *)arg1 credential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentProvisioningController *, PKPeerPaymentCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPeerPaymentAccount *, void*
- (bool)userHasDisabledPeerPayment;

@end
