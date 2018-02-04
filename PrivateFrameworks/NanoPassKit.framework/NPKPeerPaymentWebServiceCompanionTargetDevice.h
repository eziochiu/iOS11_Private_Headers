/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    NPSDomainAccessor * _globalDomainAccessor;
    NPSManager * _preferencesSyncManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NPSDomainAccessor *globalDomainAccessor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPSManager *preferencesSyncManager;
@property (readonly) Class superclass;

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)account;
- (id)bridgedClientInfo;
- (void)cloudStoreStatusWithCompletion:(id /* block */)arg1;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)globalDomainAccessor;
- (id)init;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)preferencesSyncManager;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setGlobalDomainAccessor:(id)arg1;
- (void)setPreferencesSyncManager:(id)arg1;
- (void)setUserHasDisabledPeerPayment:(bool)arg1;
- (void)updateAccountWithCompletion:(id /* block */)arg1;
- (bool)userHasDisabledPeerPayment;

@end
