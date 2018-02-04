/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkDaemon : NSObject <NSXPCListenerDelegate> {
    struct NSMutableDictionary { Class x1; } * _activeDevices;
    CUBonjourAdvertiser * _bonjourAdvertiser;
    CUBonjourBrowser * _bonjourBrowser;
    NSData * _btAdvAddr;
    CUBluetoothClient * _btClient;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSData * _homeKitAuthTag;
    NSData * _homeKitIRK;
    NSData * _homeKitLTPK;
    NSData * _homeKitNonce;
    NSData * _homeKitRotatingID;
    NSData * _homeKitUniqueIDData;
    NSString * _homeKitUniqueIDStr;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    RPCompanionLinkDevice * _localDevice;
    NSData * _pairingAltIRK;
    NSData * _pairingAuthTag;
    CUPairingManager * _pairingMonitor;
    struct NSMutableDictionary { Class x1; } * _pairingPeers;
    bool  _prefClientEnabled;
    NSString * _prefDeviceRole;
    unsigned int  _prefMaxConnectionCount;
    bool  _prefServerEnabled;
    struct NSMutableDictionary { Class x1; } * _tcpClientConnections;
    CUTCPServer * _tcpServer;
    struct NSMutableSet { Class x1; } * _tcpServerConnections;
    struct NSMutableSet { Class x1; } * _xpcConnections;
    unsigned int  _xpcLastID;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) NSMutableDictionary *activeDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_clientBonjourChangedDevice:(id)arg1;
- (void)_clientBonjourEnsureStarted;
- (void)_clientBonjourEnsureStopped;
- (void)_clientBonjourFoundDevice:(id)arg1;
- (void)_clientBonjourLostDevice:(id)arg1;
- (void)_clientConnectionStart:(id)arg1 uniqueID:(id)arg2;
- (void)_clientEnsureStarted;
- (void)_clientEnsureStopped;
- (void)_connectionStateChanged:(unsigned int)arg1 connection:(id)arg2;
- (bool)_destinationID:(id)arg1 matchesConnection:(id)arg2;
- (void)_forEachMatchingDestinationID:(id)arg1 handler:(id /* block */)arg2;
- (bool)_homeKitAuthMatchForBonjourDevice:(id)arg1;
- (id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1;
- (void)_homeKitUpdateInfo:(bool)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)_localDeviceUpdate;
- (id)_pairedPeerForBonjourDevice:(id)arg1;
- (void)_pairingMonitorEnsureStarted;
- (void)_pairingMonitorEnsureStopped;
- (void)_pairingMonitorHomeKitIdentityUpdated:(id)arg1 error:(id)arg2;
- (void)_pairingMonitorIdentityUpdated:(id)arg1 error:(id)arg2;
- (void)_pairingMonitorPeerAdded:(id)arg1;
- (void)_pairingMonitorPeerChanged:(id)arg1;
- (void)_pairingMonitorPeerRemoved:(id)arg1;
- (void)_pairingUpdateInfo:(bool)arg1;
- (void)_receivedEventID:(id)arg1 event:(id)arg2;
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_serverBTAddressMonitorEnsureStarted;
- (void)_serverBTAddressMonitorEnsureStopped;
- (void)_serverBonjourEnsureStarted;
- (void)_serverBonjourEnsureStopped;
- (void)_serverBonjourUpdateTXT;
- (void)_serverEnsureStarted;
- (void)_serverEnsureStopped;
- (void)_serverTCPEnsureStarted;
- (void)_serverTCPEnsureStopped;
- (void)_serverTCPHandleConnectionEnded:(id)arg1;
- (void)_serverTCPHandleConnectionStarted:(id)arg1;
- (id)_uniqueID;
- (void)_update;
- (void)_xpcConnectionInvalidated:(id)arg1;
- (void)activate;
- (struct NSMutableDictionary { Class x1; }*)activeDevices;
- (id)description;
- (id)detailedDescription;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)prefsChanged;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned int)arg4 responseHandler:(id /* block */)arg5;
- (void)setDispatchQueue:(id)arg1;

@end
