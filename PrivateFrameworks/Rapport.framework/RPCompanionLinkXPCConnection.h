/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkXPCConnection : NSObject <RPCompanionLinkXPCServerInterface> {
    RPCompanionLinkClient * _client;
    RPCompanionLinkDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _entitled;
    bool  _localDeviceUpdated;
    NSMutableSet * _registeredEventIDs;
    NSMutableSet * _registeredRequestIDs;
    NSXPCConnection * _xpcCnx;
    unsigned int  _xpcID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (bool)_entitledAndReturnError:(id*)arg1;
- (void)companionLinkActivateClient:(id)arg1 completion:(id /* block */)arg2;
- (void)companionLinkActivateTransactionID:(id)arg1 label:(id)arg2;
- (void)companionLinkDeregisterEventID:(id)arg1 completion:(id /* block */)arg2;
- (void)companionLinkDeregisterRequestID:(id)arg1 completion:(id /* block */)arg2;
- (void)companionLinkInvalidateTransactionID:(id)arg1;
- (void)companionLinkRegisterEventID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)companionLinkRegisterRequestID:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)companionLinkSendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)companionLinkSendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)connectionInvalidated;
- (id)dispatchQueue;
- (id)initWithDaemon:(id)arg1 xpcConnection:(id)arg2;
- (void)setDispatchQueue:(id)arg1;

@end
