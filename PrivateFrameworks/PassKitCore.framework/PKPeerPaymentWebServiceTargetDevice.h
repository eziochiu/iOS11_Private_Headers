/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    PKPeerPaymentService * _peerPaymentService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)localTargetDevice;

- (void).cxx_destruct;
- (id)account;
- (id)bridgedClientInfo;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (bool)userHasDisabledPeerPayment;

@end
