/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDFairPlaySAPSession : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDFairPlaySAPSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    }  _hardwareInfo;
    struct FPSAPContextOpaque_ { } * _session;
    NSUUID * _sessionIdentifier;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) <HMDFairPlaySAPSessionDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; } hardwareInfo;
@property (nonatomic, readonly) struct FPSAPContextOpaque_ { }*session;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_handleServerCertificate:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleServerSAPExchangeData:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_setupSAPSessionWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_teardown;
- (id)clientQueue;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; })hardwareInfo;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)openWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (struct FPSAPContextOpaque_ { }*)session;
- (id)sessionIdentifier;
- (void)setState:(unsigned long long)arg1;
- (void)signatureForData:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)state;
- (void)verifySignedData:(id)arg1 signature:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;

@end