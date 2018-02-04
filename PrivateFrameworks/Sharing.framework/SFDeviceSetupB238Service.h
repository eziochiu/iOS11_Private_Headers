/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceSetupB238Service : NSObject {
    struct NSData { Class x1; } * _acpCapData;
    bool  _activateCalled;
    bool  _advertiseFast;
    APCPlayer * _apcPlayer;
    AVAudioPlayer * _audioPlayerStart;
    AVAudioPlayer * _audioPlayerStep;
    AVAudioSession * _audioSession;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _finishSessionEnded;
    NSObject<OS_dispatch_source> * _finishTimer;
    bool  _finished;
    bool  _finished2;
    HMDeviceSetupOperationHandler * _homeKitSetupHandler;
    bool  _invalidateCalled;
    NSString * _languageCode;
    NSString * _localeIdentifier;
    unsigned long long  _peerFeatureFlags;
    SFClient * _preventExitForLocaleClient;
    id /* block */  _progressHandler;
    SFService * _sfService;
    SFSession * _sfSession;
    SFSiriClient * _siriClient;
    NSString * _siriListenLanguage;
    long long  _siriVoiceGender;
    NSString * _siriVoiceLanguage;
    NSString * _temperatureUnit;
    int  _timeAuto;
    long long  _timeCycle;
    NSDate * _timeObj;
    NSString * _timeZone;
    int  _timeZoneAuto;
    struct __WiFiManagerClient { } * _wifiManager;
    bool  _wifiSetupEnabled;
    SFDeviceOperationHandlerWiFiSetup * _wifiSetupHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_handleAuthActionAudioPasscodeInit:(id)arg1 response:(id)arg2;
- (void)_handleAuthActionAudioPasscodeStartWithResponse:(id)arg1;
- (void)_handleAuthActionRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleAuthActionSiriInit;
- (void)_handleAuthActionSiriStart:(id)arg1 response:(id)arg2 responseHandler:(id /* block */)arg3;
- (int)_handleBasicConfigRequest:(id)arg1;
- (void)_handleBasicConfigResponse:(id)arg1;
- (void)_handleFinishDone:(unsigned int)arg1;
- (int)_handleFinishRequest:(id)arg1;
- (void)_handlePlaySoundRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleRawRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleSiriDialogIdentifier:(id)arg1;
- (void)_invalidate;
- (bool)_playSoundID:(int)arg1 error:(id*)arg2;
- (void)_runSiriDialogA;
- (void)_runSiriDialogB;
- (void)_setSiriLanguageInfo;
- (void)_setSystemName:(id)arg1 hostname:(id)arg2;
- (void)_sfServiceStart;
- (void)_speakLocalizedKey:(id)arg1 event:(unsigned int)arg2;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
