/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceRepairSession : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _finishState;
    int  _getProblemsState;
    SFDeviceOperationHomeKitSetup * _homeKitSetupOperation;
    int  _homeKitSetupState;
    bool  _invalidateCalled;
    int  _pairVerifyState;
    SFDevice * _peerDevice;
    int  _preflightWiFiState;
    unsigned long long  _problemFlags;
    id /* block */  _progressHandler;
    SFSession * _sfSession;
    int  _sfSessionState;
    bool  _wifiSetupEnabled;
    SFDeviceOperationWiFiSetup * _wifiSetupOperation;
    double  _wifiSetupSecs;
    int  _wifiSetupState;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_reportError:(id)arg1;
- (void)_run;
- (int)_runFinish;
- (int)_runGetProblems;
- (int)_runHomeKitSetup;
- (int)_runPairVerify;
- (int)_runPreflightWiFi;
- (int)_runSFSessionStart;
- (int)_runWiFiSetup;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)peerDevice;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
