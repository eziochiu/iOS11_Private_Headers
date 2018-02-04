/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAppleIDClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_copyIdentityForAppleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_copyIdentityWithCertificatePermanentReference:(id)arg1 keyPermanentReference:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_myAccountWithCompletion:(id /* block */)arg1;
- (void)addAppleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)appleIDListWithCompletion:(id /* block */)arg1;
- (void)copyIdentityForAppleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)myAccountWithCompletion:(id /* block */)arg1;
- (void)requestWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)statusInfoWithCompletion:(id /* block */)arg1;

@end