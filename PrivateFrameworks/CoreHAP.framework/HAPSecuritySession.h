/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPSecuritySession : HMFObject {
    NSData * _broadcastKey;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HAPSecuritySessionDelegate> * _delegate;
    NSData * _inputKey;
    NSMutableData * _inputNonce;
    NSData * _outputKey;
    NSMutableData * _outputNonce;
    struct PairingSessionPrivate { } * _pairingSession;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    unsigned long long  _resumeSessionID;
    unsigned long long  _role;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSData *broadcastKey;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) <HAPSecuritySessionDelegate> *delegate;
@property (nonatomic, retain) NSData *inputKey;
@property (nonatomic, retain) NSMutableData *inputNonce;
@property (getter=isOpen, readonly) bool open;
@property (getter=isOpening, readonly) bool opening;
@property (nonatomic, retain) NSData *outputKey;
@property (nonatomic, retain) NSMutableData *outputNonce;
@property (nonatomic) struct PairingSessionPrivate { }*pairingSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) unsigned long long resumeSessionID;
@property (nonatomic, readonly) unsigned long long role;
@property unsigned long long state;

- (void).cxx_destruct;
- (id)_broadcastInfo;
- (void)_closeWithError:(id)arg1;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1;
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int*)arg2;
- (void)_handleSetupExchangeComplete;
- (bool)_initializeSetupSession:(unsigned long long)arg1;
- (void)_initiateClientSessionSetupExchange;
- (id)_inputInfo;
- (void)_invalidate;
- (void)_notifyOpened;
- (void)_notifyOpening;
- (id)_outputInfo;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (id)broadcastKey;
- (id)clientQueue;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;
- (id)delegate;
- (id)description;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3;
- (id)getBroadcastEncryptionKey;
- (id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3;
- (id)inputKey;
- (id)inputNonce;
- (bool)isOpen;
- (bool)isOpening;
- (void)open;
- (id)outputKey;
- (id)outputNonce;
- (struct PairingSessionPrivate { }*)pairingSession;
- (id)propertyQueue;
- (void)reallyOpen;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (unsigned long long)resumeSessionID;
- (unsigned long long)role;
- (void)setBroadcastKey:(id)arg1;
- (void)setInputKey:(id)arg1;
- (void)setInputNonce:(id)arg1;
- (void)setOutputKey:(id)arg1;
- (void)setOutputNonce:(id)arg1;
- (void)setPairingSession:(struct PairingSessionPrivate { }*)arg1;
- (void)setResumeSessionID:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
