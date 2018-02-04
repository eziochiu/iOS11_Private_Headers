/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface> {
    bool  _activateCalled;
    struct NSMutableDictionary { Class x1; } * _deviceDictionary;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct NSMutableDictionary { Class x1; } * _eventRegistrations;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    RPCompanionLinkDevice * _localDevice;
    id /* block */  _localDeviceUpdatedHandler;
    struct NSMutableDictionary { Class x1; } * _requestRegistrations;
    struct NSMutableSet { Class x1; } * _transactions;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, readonly, copy) NSArray *activeDevices;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly, copy) RPCompanionLinkDevice *localDevice;
@property (nonatomic, copy) id /* block */ localDeviceUpdatedHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1 reactivate:(bool)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidateTransaction:(id)arg1;
- (void)_invalidated;
- (void)_lostAllDevices;
- (void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(bool)arg3;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(bool)arg3;
- (void)_reregisterEvents;
- (void)_reregisterRequests;
- (id)activateTransactionWithLabel:(id)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)activeDevices;
- (void)companionLinkFoundDevice:(id)arg1;
- (void)companionLinkLocalDeviceUpdated:(id)arg1;
- (void)companionLinkLostDevice:(id)arg1;
- (void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2;
- (void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)localDevice;
- (id /* block */)localDeviceUpdatedHandler;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLocalDeviceUpdatedHandler:(id /* block */)arg1;

@end
