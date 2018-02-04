/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationAudioSession : NSObject <MNAudioSession> {
    unsigned long long  _appContext;
    <MNNavigationAudioSessionDelegate> * _delegate;
    NSString * _language;
    bool  _muteSpeechOverride;
    unsigned long long  _sessionType;
    bool  _speechEnabled;
    unsigned long long  _voiceGuidanceLevel;
}

@property (nonatomic) unsigned long long appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic) bool muteSpeechOverride;
@property (nonatomic) unsigned long long sessionType;
@property (nonatomic) bool speechEnabled;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long voiceGuidanceLevel;

+ (id)sessionOfType:(unsigned long long)arg1 language:(id)arg2;

- (void).cxx_destruct;
- (bool)_beepIfNecessaryWithShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2;
- (bool)_headphonesAreInUse;
- (bool)_isVoiceGuidanceEnabled;
- (void)_speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (unsigned long long)appContext;
- (void)beginSession;
- (void)clearAllAnnouncements;
- (void)dealloc;
- (id)delegate;
- (void)endSession;
- (id)init;
- (id)language;
- (bool)muteSpeechOverride;
- (void)prepareToAnnounce;
- (unsigned long long)sessionType;
- (void)setAppContext:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMuteSpeechOverride:(bool)arg1;
- (void)setSessionType:(unsigned long long)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setVoiceGuidanceLevel:(unsigned long long)arg1;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(bool)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (bool)speechEnabled;
- (void)stop;
- (bool)vibrateForPrompt:(unsigned long long)arg1;
- (unsigned long long)voiceGuidanceLevel;

@end