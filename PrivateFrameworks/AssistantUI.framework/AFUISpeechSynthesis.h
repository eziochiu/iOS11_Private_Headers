/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISpeechSynthesis : NSObject <AFQueueDelegate, AFUISpeechSynthesis, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate> {
    NSMutableArray * _activeElements;
    NSMutableDictionary * _availableVoicesForLanguage;
    <AFUISpeechSynthesisDelegate> * _delegate;
    AFQueue * _elementQueue;
    <AFUISpeechSynthesisLocalDelegate> * _localDelegate;
    AFVoiceInfo * _outputVoice;
    NSObject<OS_dispatch_queue> * _processingElementsQueue;
    unsigned int  _sessionID;
    bool  _sessionIDIsValid;
    VSSpeechSynthesizer * _synthesizer;
}

@property (getter=_activeElements, nonatomic, readonly) NSMutableArray *activeElements;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <AFUISpeechSynthesisDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_elementQueue, nonatomic, readonly) AFQueue *elementQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AFUISpeechSynthesisLocalDelegate> *localDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeElementWithPresynthesizedAudioRequest:(id)arg1;
- (id)_activeElementWithSpeechRequest:(id)arg1;
- (id)_activeElements;
- (void)_cancelByCancellingActiveElementsOnly:(bool)arg1;
- (id)_elementQueue;
- (void)_enqueueText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 isPhonetic:(bool)arg6 provisionally:(bool)arg7 eligibleAfterDuration:(double)arg8 preparationIdentifier:(id)arg9 completion:(id /* block */)arg10 animationIdentifier:(id)arg11 analyticsContext:(id)arg12 speakableContextInfo:(id)arg13;
- (id)_filterVoices:(id)arg1 gender:(id)arg2;
- (void)_findVoiceForLanguage:(id)arg1 gender:(id)arg2 completion:(id /* block */)arg3;
- (long long)_genderForString:(id)arg1;
- (void)_handleAudioData:(id)arg1;
- (void)_handleText:(id)arg1;
- (void)_processElementQueue;
- (void)_processProvisionalElements;
- (bool)_startSpeechPreSynthesisOfText:(id)arg1 speakableContext:(id)arg2 error:(id*)arg3;
- (id)_synthesizer;
- (void)_updateSynthesizerWithSessionID:(unsigned int)arg1;
- (void)cancel;
- (id)delegate;
- (void)enqueueAudioData:(id)arg1 identifier:(id)arg2 provisionally:(bool)arg3 eligibleAfterDuration:(double)arg4 completion:(id /* block */)arg5;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)enqueueText:(id)arg1 identifier:(id)arg2 language:(id)arg3 gender:(id)arg4 isPhonetic:(bool)arg5 provisionally:(bool)arg6 eligibleAfterDuration:(double)arg7 preparationIdentifier:(id)arg8 completion:(id /* block */)arg9 animationIdentifier:(id)arg10 analyticsContext:(id)arg11 speakableContextInfo:(id)arg12;
- (id)init;
- (void)invalidate;
- (void)invalidateOnMainThread;
- (bool)isSpeaking;
- (bool)isSynthesisQueueEmpty;
- (id)localDelegate;
- (void)presynthesizeDialogStrings:(id)arg1 speakableContext:(id)arg2;
- (void)prewarmIfNeeded;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalDelegate:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)skipCurrentSynthesis;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(bool)arg3 error:(id)arg4;

@end
