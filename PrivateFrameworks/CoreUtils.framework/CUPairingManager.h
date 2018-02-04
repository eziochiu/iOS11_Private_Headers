/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _identityCreatedHandler;
    id /* block */  _identityDeletedHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    unsigned long long  _monitorOptions;
    bool  _monitoring;
    id /* block */  _pairedPeerAddedHandler;
    id /* block */  _pairedPeerChangedHandler;
    id /* block */  _pairedPeerRemovedHandler;
    bool  _targetUserSession;
    NSXPCListenerEndpoint * _testListenerEndpoint;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ identityCreatedHandler;
@property (nonatomic, copy) id /* block */ identityDeletedHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ pairedPeerAddedHandler;
@property (nonatomic, copy) id /* block */ pairedPeerChangedHandler;
@property (nonatomic, copy) id /* block */ pairedPeerRemovedHandler;
@property (nonatomic) bool targetUserSession;
@property (nonatomic, retain) NSXPCListenerEndpoint *testListenerEndpoint;

- (void).cxx_destruct;
- (void)_deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (int)_ensureXPCStarted;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_getPairedPeersWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_showWithCompletion:(id /* block */)arg1;
- (void)_startMonitoringWithOptions:(unsigned long long)arg1;
- (void)dealloc;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)dispatchQueue;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id /* block */)identityCreatedHandler;
- (id /* block */)identityDeletedHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)pairedPeerAdded:(id)arg1 options:(unsigned long long)arg2;
- (id /* block */)pairedPeerAddedHandler;
- (void)pairedPeerChanged:(id)arg1 options:(unsigned long long)arg2;
- (id /* block */)pairedPeerChangedHandler;
- (void)pairedPeerRemoved:(id)arg1 options:(unsigned long long)arg2;
- (id /* block */)pairedPeerRemovedHandler;
- (void)pairingIdentityCreated:(id)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)arg1;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setIdentityCreatedHandler:(id /* block */)arg1;
- (void)setIdentityDeletedHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPairedPeerAddedHandler:(id /* block */)arg1;
- (void)setPairedPeerChangedHandler:(id /* block */)arg1;
- (void)setPairedPeerRemovedHandler:(id /* block */)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (void)setTestListenerEndpoint:(id)arg1;
- (void)showWithCompletion:(id /* block */)arg1;
- (void)startMonitoringWithOptions:(unsigned long long)arg1;
- (bool)targetUserSession;
- (id)testListenerEndpoint;

@end