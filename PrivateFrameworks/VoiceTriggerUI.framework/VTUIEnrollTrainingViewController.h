/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIEnrollTrainingViewController : UIViewController <AFMyriadDelegate, AFUIDebugControllerDelegate, AFUISiriLanguageDelegate, SUICFlamesViewDelegate, VTUIEnrollmentSetupIntroViewDelegate, VTUITrainingManagerDelegate> {
    long long  _AVVCRetryCount;
    UIView * _aboutTappedSender;
    float  _audioRms;
    long long  _badMicRetryCount;
    long long  _consecutiveTimeoutCount;
    long long  _currentTrainingState;
    <AFUIDebugControlling> * _debugController;
    <VTUIEnrollTrainingViewControllerDelegate> * _delegate;
    UIButton * _endpointButton;
    UIView * _flamesContainerView;
    SUICFlamesView * _flamesView;
    bool  _hasPHSInCloud;
    id /* block */  _hasPHSInCloudFetchBlock;
    NSObject<OS_dispatch_queue> * _hasPHSInCloudFetchQueue;
    bool  _hasRetriedTraining;
    VTUIPagedLabel * _instructionPagedLabel;
    VTUIEnrollmentSetupIntroView * _introView;
    VTUIEnrollmentLanguageOptionsView * _languageOptionsView;
    AFMyriadCoordinator * _myriadCoordinator;
    SiriUIContentButton * _radarButton;
    UIButton * _radarExitButton;
    unsigned long long  _sessionId;
    bool  _shouldTurnOnMyriad;
    AFUISiriLanguage * _siriLanguage;
    NSArray * _siriLanguageOptions;
    UIButton * _skipButton;
    NSString * _spokenLanguageCode;
    UILabel * _statusLabel;
    VTUIEnrollmentSuccessView * _successView;
    VTUITickMarkView * _tickMark;
    VTUITrainingManager * _trainingManager;
    NSArray * _trainingPageInstructions;
}

@property (nonatomic) float audioRms;
@property (nonatomic, readonly) long long currentTrainingState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VTUIEnrollTrainingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SUICFlamesView *flamesView;
@property (nonatomic) bool hasRetriedTraining;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sessionId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VTUITrainingManager *trainingManager;

- (void).cxx_destruct;
- (void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1;
- (void)VTUITrainingManagerFeedLevel:(float)arg1;
- (void)VTUITrainingManagerStopListening;
- (void)_advanceState;
- (void)_becomeActive;
- (void)_checkForPHSCloudDataIfNecessary:(id)arg1;
- (void)_cleanupTrainingManagerWithCompletion:(id /* block */)arg1;
- (void)_clearAggdScalar:(id)arg1;
- (void)_continueFromIntro:(id)arg1;
- (void)_continueFromLanguageOptions:(id)arg1;
- (void)_createTrainingManagerIfNeeded;
- (void)_finishFromLanguageOptions:(id)arg1;
- (void)_finishSiriSetup:(id)arg1;
- (id)_getSetupModeString;
- (void)_handleTrainingResultForNonRetryablePhraseWithStatus:(int)arg1;
- (void)_handleTrainingResultForRetryablePhraseWithStatus:(int)arg1 shouldShowCheckMark:(bool)arg2;
- (bool)_hasPHSCloudDataForSpokenLanguage;
- (void)_hideInstruction;
- (void)_logAggdCount:(long long)arg1 forKey:(id)arg2;
- (void)_logAggdScalar:(long long)arg1 forKey:(id)arg2;
- (void)_presentRadarView;
- (void)_resetEnrollment;
- (void)_resetIdleTimer;
- (void)_resetTrainingManager;
- (void)_resignActive;
- (void)_resumeGLDrawing;
- (void)_resumeTraining;
- (void)_retryAfterBadMicAlert;
- (void)_retryInstruction:(bool)arg1;
- (void)_setAssistantEnabled:(bool)arg1;
- (void)_setLanguageOptionsAndContinue:(id)arg1;
- (void)_setPHSEnrollmentPrefEnabled:(bool)arg1;
- (void)_setupMode;
- (void)_setupTrainingStates;
- (void)_setupViews;
- (void)_showBadMicAlertCompletion:(id /* block */)arg1;
- (void)_showBadMicAlertWithCompletion:(id /* block */)arg1;
- (void)_showEnrollmentSuccessView;
- (void)_showInstruction:(long long)arg1 isRetry:(bool)arg2;
- (void)_showIntroView;
- (void)_showRadarExitButton;
- (void)_showResultMark:(bool)arg1 completion:(id /* block */)arg2;
- (void)_showStatusMessage:(id)arg1 afterDelay:(double)arg2 completion:(id /* block */)arg3;
- (void)_showTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(bool)arg3 animate:(bool)arg4;
- (void)_showUnsupportedLocaleAlert;
- (void)_showUnsupportedLocaleAlertCompletion:(id /* block */)arg1;
- (bool)_siriLanguageIsIncompatibleWithPairedWatch;
- (void)_startEnrollment;
- (void)_startTraining;
- (void)_stopGLDrawing;
- (void)_triggerEndpoint:(id)arg1;
- (void)_updateFlamesForStatus:(long long)arg1;
- (void)_updatePageNumberForInstruction:(long long)arg1;
- (void)_warnForLanguageCompatibilityIfNecessary:(id /* block */)arg1;
- (void)aboutTapped:(id)arg1;
- (float)audioLevelForFlamesView:(id)arg1;
- (float)audioRms;
- (long long)currentTrainingState;
- (void)dealloc;
- (void)debugController:(id)arg1 openURL:(id)arg2;
- (void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2;
- (void)debugController:(id)arg1 wantsDismissViewController:(id)arg2;
- (void)debugController:(id)arg1 wantsPresentViewController:(id)arg2;
- (id)delegate;
- (void)finish:(id)arg1;
- (id)flamesView;
- (void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasRetriedTraining;
- (id)init;
- (id)interpretAudioSource:(int)arg1;
- (long long)interpretSessionManagerStatus:(int)arg1 forInstruction:(long long)arg2;
- (id)presentedViewControllerForDebugController;
- (void)radarButtonPressed:(id)arg1;
- (unsigned long long)sessionId;
- (void)setAudioRms:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasRetriedTraining:(bool)arg1;
- (void)setupNavigationBarStyleForAppearing:(bool)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)shouldContinue:(id)arg1;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1;
- (void)skipAssistant:(id)arg1;
- (void)skipTraining:(id)arg1;
- (id)trainingManager;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
