/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCReaderSession : NSObject <NFCHardwareManagerCallbacks, NFCReaderSession, NFCSessionCallbacks, NFReaderSessionCallbacks> {
    NSString * _alertMessage;
    NFWeakReference * _connectedTag;
    NFWeakReference * _delegate;
    bool  _invalidated;
    long long  _invalidationCode;
    unsigned long long  _pollMethod;
    NSLock * _pollRestartLock;
    NSObject<NFReaderSessionInterface><NSXPCProxyCreating> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _sessionStartInProgress;
    bool  _started;
}

@property (nonatomic, copy) NSString *alertMessage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic) unsigned long long pollMethod;
@property (getter=isReady, nonatomic, readonly) bool ready;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly) Class superclass;

- (bool)_connectTag:(id)arg1 error:(id*)arg2;
- (void)_invalidateSessionWithCode:(long long)arg1 callbackOnQueue:(bool)arg2;
- (void)_startPollingWithMethod:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_stopPollingWithCompletionHandler:(id /* block */)arg1;
- (id)alertMessage;
- (void)beginSession;
- (bool)checkPresenceWithError:(id*)arg1;
- (bool)connectTag:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didDetectExternalReader:(id)arg1;
- (void)didDetectTags:(id)arg1;
- (void)didInvalidate;
- (void)didStartSession:(id)arg1;
- (void)didTerminate:(id)arg1;
- (bool)disconnectTagWithError:(id*)arg1;
- (void)hardwareFailedToLoad;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (void)invalidateSession;
- (void)invalidateSessionWithReason:(long long)arg1;
- (bool)isInvalidated;
- (bool)isReady;
- (unsigned long long)pollMethod;
- (void)restartPolling;
- (id)sessionQueue;
- (void)setAlertMessage:(id)arg1;
- (void)setPollMethod:(unsigned long long)arg1;
- (void)submitBlockOnQueue:(id /* block */)arg1;
- (id)transceive:(id)arg1 error:(id*)arg2;

@end
