/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceRepairService : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    HMDeviceSetupOperationHandler * _homeKitSetupHandler;
    bool  _invalidateCalled;
    unsigned long long  _problemFlags;
    id /* block */  _progressHandler;
    SFService * _sfService;
    SFSession * _sfSession;
    struct __WiFiManagerClient { } * _wifiManager;
    SFDeviceOperationHandlerWiFiSetup * _wifiSetupHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long problemFlags;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleGetProblemsRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_invalidate;
- (void)_sfServiceStart;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (unsigned long long)problemFlags;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setProblemFlags:(unsigned long long)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
