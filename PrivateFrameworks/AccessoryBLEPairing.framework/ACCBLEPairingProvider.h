/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryBLEPairing.framework/AccessoryBLEPairing
 */

@interface ACCBLEPairingProvider : NSObject {
    NSMutableDictionary * _accessories;
    <ACCBLEPairingProviderProtocol> * _delegate;
    NSString * _providerUID;
    <ACCBLEPairingXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic) <ACCBLEPairingProviderProtocol> *delegate;
@property (nonatomic, retain) NSString *providerUID;
@property (nonatomic, retain) <ACCBLEPairingXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

- (void).cxx_destruct;
- (id)accessories;
- (void)accessoryBLEPairingAttached:(id)arg1 blePairingUUID:(id)arg2 accInfoDict:(id)arg3 supportedPairTypes:(id)arg4;
- (void)accessoryBLEPairingDataUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairData:(id)arg4;
- (void)accessoryBLEPairingDetached:(id)arg1 blePairingUUID:(id)arg2;
- (void)accessoryBLEPairingInfoUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(unsigned char)arg3 pairInfoList:(id)arg4;
- (void)accessoryBLEPairingStateUpdate:(id)arg1 blePairingUUID:(id)arg2 validMask:(unsigned int)arg3 btRadioOn:(bool)arg4 pairingState:(int)arg5 pairingModeOn:(bool)arg6;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (void)devicePairingData:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairData:(id)arg4;
- (void)deviceStateUpdate:(id)arg1 blePairingUUID:(id)arg2 bRadioOn:(bool)arg3 pairState:(int)arg4 bPairModeOn:(bool)arg5;
- (void)deviceUpdatePairingInfo:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairInfo:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (id)providerUID;
- (id)remoteObject;
- (id)serverConnection;
- (void)setAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProviderUID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)startBLEUpdates:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 bRadioUpdatesOn:(bool)arg4 bPairInfoUpdatesOn:(bool)arg5;
- (void)stopBLEUpdates:(id)arg1 blePairingUUID:(id)arg2;

@end
