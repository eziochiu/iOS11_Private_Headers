/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationStateMachine : NSObject <CBCentralManagerDelegate, PKContinuityPaymentCoordinatorDelegate> {
    <PKAggregateDictionaryProtocol> * _aggregateDictionary;
    bool  _awaitingClientCallbackReply;
    bool  _awaitingWebServiceResponse;
    CBCentralManager * _bluetoothCentralManager;
    NSMutableArray * _callbackQueue;
    NSObject<OS_dispatch_source> * _clientCallbackTimer;
    PKContinuityPaymentCoordinator * _continuityPaymentCoordinator;
    PKContinuityPaymentService * _continuityPaymentService;
    <PKPaymentAuthorizationStateMachineDelegate> * _delegate;
    bool  _detectedBluetoothOn;
    bool  _hasReceivedRemoteDeviceUpdate;
    unsigned long long  _hostApplicationState;
    PKInAppPaymentSession * _inAppPaymentSession;
    NSString * _instanceIdentifier;
    PKPaymentAuthorizationDataModel * _model;
    PKPaymentAuthorizationClientCallbackStateParam * _mostRecentClientCallback;
    PKPaymentService * _paymentService;
    PKPaymentWebService * _paymentWebService;
    PKPeerPaymentSession * _peerPaymentSession;
    unsigned long long  _prepareTransactionDetailsCounter;
    unsigned long long  _state;
    double  _updatePaymentDeviceTimeout;
}

@property (nonatomic, retain) <PKAggregateDictionaryProtocol> *aggregateDictionary;
@property (nonatomic) bool awaitingClientCallbackReply;
@property (nonatomic) bool awaitingWebServiceResponse;
@property (nonatomic, retain) CBCentralManager *bluetoothCentralManager;
@property (nonatomic, retain) NSMutableArray *callbackQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *clientCallbackTimer;
@property (nonatomic, retain) PKContinuityPaymentCoordinator *continuityPaymentCoordinator;
@property (nonatomic, retain) PKContinuityPaymentService *continuityPaymentService;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool detectedBluetoothOn;
@property (nonatomic) bool hasReceivedRemoteDeviceUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long hostApplicationState;
@property (nonatomic, retain) PKInAppPaymentSession *inAppPaymentSession;
@property (nonatomic, retain) NSString *instanceIdentifier;
@property (nonatomic, retain) PKPaymentAuthorizationDataModel *model;
@property (nonatomic, retain) PKPaymentAuthorizationClientCallbackStateParam *mostRecentClientCallback;
@property (nonatomic, retain) PKPaymentService *paymentService;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;
@property (nonatomic, retain) PKPeerPaymentSession *peerPaymentSession;
@property (nonatomic) unsigned long long prepareTransactionDetailsCounter;
@property (setter=_setState:, nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) double updatePaymentDeviceTimeout;
@property (nonatomic, readonly) bool useSecureElement;

- (void).cxx_destruct;
- (void)_advanceToNextState;
- (void)_applyBillingInformationToPayment:(id)arg1;
- (void)_applyShippingInformationToPayment:(id)arg1;
- (void)_applyShippingMethodToPayment:(id)arg1;
- (void)_applyWebServiceConfigurationIfNeeded;
- (void)_cancelClientCallbackTimer;
- (void)_clientCallbackTimedOut;
- (id)_createNewRemotePaymentRequest;
- (id)_dequeuePendingCallbackParam;
- (void)_deviceUpdateDidTimeout;
- (void)_dispatchNextCallbackParam;
- (void)_enqeueDidAuthorizePurchaseWithParam:(id)arg1;
- (void)_enqueueCallbackOfKind:(long long)arg1 withObject:(id)arg2;
- (void)_enqueueDidAuthorizePaymentWithByPassPayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithPayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithRemotePayment:(id)arg1;
- (void)_enqueueDidAuthorizePaymentWithToken:(id)arg1;
- (void)_enqueueDidAuthorizePeerPaymentQuoteWithAuthorizedQuote:(id)arg1;
- (void)_enqueueDidRequestMerchantSession;
- (void)_enqueueDidSelectPaymentMethodWithQuote:(id)arg1;
- (void)_enqueueDidSelectPaymentPass:(id)arg1;
- (void)_enqueueDidSelectPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1;
- (void)_enqueueDidSelectRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (void)_enqueueDidSelectShippingContact:(id)arg1;
- (void)_enqueueInitialCallbacks;
- (void)_handleStateMachineWillStartNotification:(id)arg1;
- (id)_pendingTransactionOnAlternateFundingSourceForAutorizedPeerPaymentQuote:(id)arg1;
- (id)_pendingTransactionOnPeerPaymentPassForAuthorizedPeerPaymentQuote:(id)arg1;
- (void)_performAuthorizationWithParam:(id)arg1;
- (void)_performCancelRemotePaymentRequest;
- (void)_performDidAuthorizeCallbackWithParam:(id)arg1;
- (void)_performNonceRequestWithParam:(id)arg1;
- (void)_performPrepareTransactionDetailsRequestWithParam:(id)arg1;
- (void)_performRewrapRequestWithParam:(id)arg1;
- (void)_performSendClientUpdateWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2 paymentApplication:(id)arg3 status:(long long)arg4;
- (void)_performSendPaymentResult:(id)arg1;
- (void)_performSendRemotePaymentRequest;
- (void)_performUpdatePaymentDevices;
- (void)_postStateMachineWillStartNotification;
- (void)_processBluetoothState:(long long)arg1;
- (void)_processErrorsForDataType:(long long)arg1;
- (void)_registerForNotifications;
- (void)_removeWebServiceConfigurationIfNeeded;
- (void)_sendDidTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 withParam:(id)arg3;
- (void)_setState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1 param:(id)arg2;
- (void)_simulatePayment;
- (void)_start;
- (void)_startClientCallbackTimer;
- (void)_startHandoff;
- (void)_startPayment;
- (void)_startRemoteDeviceUpdate;
- (id)_transactionWithPaymentToken:(id)arg1;
- (id)_transactionWithPurchase:(id)arg1 paymentHash:(id)arg2;
- (void)_unregisterForNotifications;
- (void)_updateModelWithShippingMethods:(id)arg1 paymentSummaryItems:(id)arg2;
- (id)aggregateDictionary;
- (bool)awaitingClientCallbackReply;
- (bool)awaitingWebServiceResponse;
- (id)bluetoothCentralManager;
- (id)callbackQueue;
- (bool)canSelectPaymentOptions;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)clientCallbackTimer;
- (id)continuityPaymentCoordinator;
- (void)continuityPaymentCoordinator:(id)arg1 didReceivePayment:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didReceiveUpdatedPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinator:(id)arg1 didTimeoutTotalWithPaymentDevices:(id)arg2;
- (void)continuityPaymentCoordinatorDidReceiveCancellation:(id)arg1;
- (void)continuityPaymentCoordinatorDidTimeoutUpdatePaymentDevices:(id)arg1;
- (id)continuityPaymentService;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)detectedBluetoothOn;
- (void)didAuthenticateWithCredential:(id)arg1;
- (void)didBecomeActive:(bool)arg1;
- (void)didCancel;
- (void)didEncounterError:(id)arg1;
- (void)didEncounterFatalError:(id)arg1;
- (void)didReceiveMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)didReceivePaymentAuthorizationResult:(id)arg1;
- (void)didReceivePaymentAuthorizationStatus:(long long)arg1;
- (void)didReceivePaymentMethodCompleteWithSummaryItems:(id)arg1;
- (void)didReceivePaymentMethodCompleteWithUpdate:(id)arg1;
- (void)didReceiveShippingContactCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)didReceiveShippingContactCompleteWithUpdate:(id)arg1;
- (void)didReceiveShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)didReceiveShippingMethodCompleteWithUpdate:(id)arg1;
- (void)didRequestMerchantSession;
- (void)didResignActive:(bool)arg1;
- (void)didResolveError;
- (void)didSelectBillingAddress:(id)arg1;
- (void)didSelectPaymentPass:(id)arg1;
- (void)didSelectPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (void)didSelectRemotePaymentInstrument:(id)arg1;
- (void)didSelectRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (void)didSelectShippingContact:(id)arg1;
- (void)didSelectShippingEmail:(id)arg1;
- (void)didSelectShippingMethod:(id)arg1;
- (void)didSelectShippingName:(id)arg1;
- (void)didSelectShippingPhoneNumber:(id)arg1;
- (bool)hasPendingCallbacks;
- (bool)hasReceivedRemoteDeviceUpdate;
- (unsigned long long)hostApplicationState;
- (id)inAppPaymentSession;
- (id)init;
- (id)instanceIdentifier;
- (id)model;
- (id)mostRecentClientCallback;
- (id)paymentService;
- (id)paymentWebService;
- (id)peerPaymentSession;
- (unsigned long long)prepareTransactionDetailsCounter;
- (void)setAggregateDictionary:(id)arg1;
- (void)setAwaitingClientCallbackReply:(bool)arg1;
- (void)setAwaitingWebServiceResponse:(bool)arg1;
- (void)setBluetoothCentralManager:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setClientCallbackTimer:(id)arg1;
- (void)setContinuityPaymentCoordinator:(id)arg1;
- (void)setContinuityPaymentService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetectedBluetoothOn:(bool)arg1;
- (void)setHasReceivedRemoteDeviceUpdate:(bool)arg1;
- (void)setHostApplicationState:(unsigned long long)arg1;
- (void)setInAppPaymentSession:(id)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setMostRecentClientCallback:(id)arg1;
- (void)setPaymentService:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (void)setPeerPaymentSession:(id)arg1;
- (void)setPrepareTransactionDetailsCounter:(unsigned long long)arg1;
- (void)setUpdatePaymentDeviceTimeout:(double)arg1;
- (void)start;
- (unsigned long long)state;
- (double)updatePaymentDeviceTimeout;
- (bool)useSecureElement;

@end
