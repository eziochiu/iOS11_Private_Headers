/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDLogger : NSObject {
    NSData * _activeAID;
    AWDServerConnection * _awdServer;
    NSObject<OS_dispatch_queue> * _awdSubmissionQueue;
    NFWeakReference * _delegate;
    NSData * _deviceExceptionUuid;
    unsigned int  _hwType;
    unsigned long long  _middlewareExceptionCount;
    unsigned long long  _previousCardIngestionSessionState;
    unsigned long long  _previousExpressTransactionState;
    unsigned long long  _previousTransactionState;
    unsigned long long  _previousVASTransactionState;
    NSData * _restrictedModeID;
    NSData * _tsmUuid;
    unsigned long long  _tsmUuidRefTimestamp;
    NSUserDefaults * _userDefault;
    NSData * _uuid;
    unsigned long long  _uuidRefTimestamp;
    NFAWDVersionInfo * _versionInfo;
}

@property (copy) NSData *activeAID;
@property (nonatomic) <NFAWDLoggerDelegate> *delegate;

+ (id)sharedAWDLogger;

- (void)_postAWDEvent:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)_postAWDHardwareExceptionEventWithAssertionCounter:(unsigned int)arg1 hardwareType:(unsigned int)arg2 wdogDump:(unsigned int*)arg3 hwFltDump:(unsigned int*)arg4;
- (void)_postReaderSessionEndedWithType:(unsigned int)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4;
- (void)_postReaderSessionPollingStartedWithType:(unsigned int)arg1 uuid:(id)arg2 startTime:(id)arg3;
- (void)_postReaderSessionStartedWithType:(unsigned int)arg1 uuid:(id)arg2;
- (void)_postReaderSessionTagFoundWithType:(unsigned int)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4;
- (void)_postReaderSessionTagReadWithType:(unsigned int)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4;
- (void)_resetAWDLoadStackExceptionCount;
- (void)_updateStats:(id)arg1 reset:(bool)arg2;
- (id)activeAID;
- (void)dealloc;
- (id)delegate;
- (void)enableQueryMetricsListener;
- (id)generateUUID;
- (unsigned long long)getTimestamp;
- (bool)incrementMiddlewareExceptionCountWithReset:(bool)arg1;
- (id)init;
- (void)postAWDAPNReceived;
- (void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDCRSAuthECommerceWithParameters:(id)arg1;
- (void)postAWDCRSAuthInitEventWithStatus:(unsigned int)arg1;
- (void)postAWDCRSAuthWithStatus:(unsigned int)arg1 withMethod:(unsigned int)arg2;
- (void)postAWDCRSDeAuthWithStatus:(unsigned int)arg1;
- (void)postAWDCardIngestionReaderStateChangeWithType:(unsigned int)arg1 errorCode:(unsigned int)arg2;
- (void)postAWDCardIngestionSessionStateChangeTo:(unsigned int)arg1;
- (void)postAWDEvent:(id)arg1;
- (void)postAWDExpressTransactionEventFor:(unsigned int)arg1 started:(bool)arg2;
- (void)postAWDFieldEventWithFieldOn:(bool)arg1 withTechnology:(unsigned int)arg2;
- (void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1;
- (void)postAWDHCIStartOfTransactionEventWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDMiddlewareException:(unsigned int)arg1 mwVersion:(unsigned int)arg2 errorType:(unsigned int)arg3 errorCode:(unsigned int)arg4 checkMaxExceptionCounter:(bool)arg5;
- (void)postAWDPLLUnlockEvent;
- (void)postAWDPeerPaymentEnrollmentWithParameters:(id)arg1;
- (void)postAWDPeerPaymentRequestWithParameters:(id)arg1;
- (void)postAWDReaderModeExceptionForType:(unsigned int)arg1 withErrorCode:(unsigned int)arg2;
- (void)postAWDReaderSessionEventWithParameters:(id)arg1;
- (void)postAWDRestrictedModeFromContactlessMode:(bool)arg1 isIcf:(bool)arg2;
- (void)postAWDSEMemoryInfo:(id)arg1 isIcf:(bool)arg2;
- (void)postAWDSERemovedEvent:(id)arg1 isIcf:(bool)arg2;
- (void)postAWDSERestrictedModeEntered:(id)arg1 isIcf:(bool)arg2;
- (void)postAWDSERestrictedModeExited:(bool)arg1;
- (void)postAWDSESelectEventWithAID:(id)arg1;
- (void)postAWDTSMConnectivityException:(unsigned int)arg1;
- (void)postAWDTSMEndOfSession;
- (void)postAWDTSMEndWithParameters:(id)arg1;
- (void)postAWDTSMStartWithParameters:(id)arg1;
- (void)postAWDTransactionEndOfOperation;
- (void)postAWDTransactionLastRAPDU;
- (void)postAWDVASGetData:(id)arg1;
- (void)postAWDVASSelectOSE:(id)arg1;
- (void)postAWDVASTransactionException:(unsigned int)arg1 withSWStatus:(unsigned int)arg2;
- (void)postAWDVersionInfo:(id)arg1;
- (void)setActiveAID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateStats:(id)arg1 reset:(bool)arg2;

@end
