/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkConnection : NSObject {
    CUBonjourDevice * _bonjourPeerDevice;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct { 
        unsigned char frameType; 
        unsigned char frameLen[3]; 
    }  _frameHeader;
    int  _internalState;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    bool  _isClient;
    CUPairingStream * _mainStream;
    CUPairingSession * _pairVerifySession;
    RPCompanionLinkDevice * _peerDeviceInfo;
    NSString * _peerIdentifier;
    bool  _present;
    id /* block */  _receivedEventHandler;
    id /* block */  _receivedRequestHandler;
    bool  _receivingHeader;
    struct NSMutableDictionary { Class x1; } * _requests;
    bool  _retryFired;
    NSObject<OS_dispatch_source> * _retryTimer;
    NSString * _selfIdentifier;
    unsigned int  _state;
    id /* block */  _stateChangedHandler;
    bool  _stepDone;
    NSError * _stepError;
    CUTCPConnection * _tcpConnection;
    unsigned int  _xidLast;
}

@property (nonatomic, retain) CUBonjourDevice *bonjourPeerDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) RPCompanionLinkDevice *peerDeviceInfo;
@property (nonatomic, copy) NSString *peerIdentifier;
@property (nonatomic) bool present;
@property (nonatomic, copy) id /* block */ receivedEventHandler;
@property (nonatomic, copy) id /* block */ receivedRequestHandler;
@property (nonatomic, copy) NSString *selfIdentifier;
@property (nonatomic) unsigned int state;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (nonatomic, retain) CUTCPConnection *tcpConnection;

- (void).cxx_destruct;
- (void)_clientConnectCompleted:(id)arg1;
- (void)_clientConnectStart;
- (bool)_clientError:(id)arg1;
- (void)_clientPairVerifyCompleted:(id)arg1;
- (void)_clientPairVerifyStart;
- (void)_clientPairVerifyWithData:(id)arg1;
- (void)_clientRetryFired;
- (void)_clientRetryStart;
- (void)_clientRun;
- (void)_clientStartSession;
- (void)_invalidate;
- (void)_invalidated;
- (void)_pairVerifyInvalidate;
- (void)_receiveCompletion:(id)arg1;
- (void)_receiveStart:(id)arg1;
- (void)_receivedEvent:(id)arg1;
- (void)_receivedHeader:(const struct { unsigned char x1; unsigned char x2[3]; }*)arg1 body:(id)arg2;
- (void)_receivedHeader:(const struct { unsigned char x1; unsigned char x2[3]; }*)arg1 encryptedObjectData:(id)arg2;
- (void)_receivedObject:(id)arg1;
- (void)_receivedRequest:(id)arg1;
- (void)_receivedResponse:(id)arg1;
- (void)_receivedSystemInfo:(id)arg1 xid:(id)arg2;
- (void)_run;
- (void)_sendEncryptedResponse:(id)arg1 error:(id)arg2 xid:(id)arg3;
- (void)_sendFrameType:(unsigned char)arg1 body:(id)arg2;
- (void)_sendFrameType:(unsigned char)arg1 unencryptedObject:(id)arg2;
- (void)_serverAccept;
- (void)_serverPairVerifyCompleted:(id)arg1;
- (void)_serverPairVerifyWithData:(id)arg1 start:(bool)arg2;
- (void)_serverRun;
- (id)_systeminfo;
- (void)_updateExternalState;
- (void)activate;
- (id)bonjourPeerDevice;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)peerDeviceInfo;
- (id)peerIdentifier;
- (bool)present;
- (id /* block */)receivedEventHandler;
- (id /* block */)receivedRequestHandler;
- (id)selfIdentifier;
- (bool)sendEncryptedData:(id)arg1 error:(id*)arg2;
- (bool)sendEncryptedRequestID:(id)arg1 request:(id)arg2 xpcID:(unsigned int)arg3 error:(id*)arg4 responseHandler:(id /* block */)arg5;
- (void)setBonjourPeerDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setPeerIdentifier:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setReceivedEventHandler:(id /* block */)arg1;
- (void)setReceivedRequestHandler:(id /* block */)arg1;
- (void)setSelfIdentifier:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (void)setTcpConnection:(id)arg1;
- (unsigned int)state;
- (id /* block */)stateChangedHandler;
- (id)tcpConnection;

@end
