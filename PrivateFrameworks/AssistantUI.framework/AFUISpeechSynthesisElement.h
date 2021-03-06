/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISpeechSynthesisElement : NSObject {
    NSDictionary * _analyticsContext;
    NSString * _animationIdentifier;
    SAUIAudioData * _audioData;
    id /* block */  _completion;
    <AFUISpeechSynthesisElementDelegate> * _delegate;
    bool  _durationHasElapsed;
    bool  _eligibleForSynthesis;
    NSString * _gender;
    NSString * _identifier;
    bool  _isPhonetic;
    NSString * _language;
    bool  _preprationBlockCompleted;
    VSPresynthesizedAudioRequest * _presynthesizedAudioRequest;
    bool  _provisional;
    NSDictionary * _speakableContextInfo;
    VSSpeechRequest * _speechRequest;
    long long  _synthesisResult;
    NSString * _text;
}

@property (nonatomic, readonly) NSDictionary *analyticsContext;
@property (nonatomic, readonly) NSString *animationIdentifier;
@property (nonatomic, readonly) SAUIAudioData *audioData;
@property (getter=_completion, nonatomic, readonly) id /* block */ completion;
@property (nonatomic) <AFUISpeechSynthesisElementDelegate> *delegate;
@property (setter=_setDurationHasElapsed:) bool durationHasElapsed;
@property (getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:, nonatomic) bool eligibleForSynthesis;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isPhonetic;
@property (nonatomic, readonly) NSString *language;
@property (setter=_setPreparationBlockCompleted:) bool preprationBlockCompleted;
@property (nonatomic, retain) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (getter=isProvisional, nonatomic, readonly) bool provisional;
@property (nonatomic, retain) NSDictionary *speakableContextInfo;
@property (nonatomic, retain) VSSpeechRequest *speechRequest;
@property (nonatomic) long long synthesisResult;
@property (setter=_setText:, nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id /* block */)_completion;
- (void)_setDurationHasElapsed:(bool)arg1;
- (void)_setEligibleForSynthesis:(bool)arg1;
- (void)_setPreparationBlockCompleted:(bool)arg1;
- (void)_setText:(id)arg1;
- (void)_updateSynthesisEligibility;
- (id)analyticsContext;
- (id)animationIdentifier;
- (id)audioData;
- (id)delegate;
- (id)description;
- (bool)durationHasElapsed;
- (void)executeCompletion;
- (id)gender;
- (id)identifier;
- (id)init;
- (id)initWithText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 provisional:(bool)arg6 eligibleAfterDuration:(double)arg7 preparation:(id /* block */)arg8 completion:(id /* block */)arg9 animationIdentifier:(id)arg10 analyticsContext:(id)arg11 speakableContextInfo:(id)arg12;
- (bool)isEligibleForSynthesis;
- (bool)isPhonetic;
- (bool)isProvisional;
- (id)language;
- (bool)preprationBlockCompleted;
- (id)presynthesizedAudioRequest;
- (void)setDelegate:(id)arg1;
- (void)setIsPhonetic:(bool)arg1;
- (void)setPresynthesizedAudioRequest:(id)arg1;
- (void)setSpeakableContextInfo:(id)arg1;
- (void)setSpeechRequest:(id)arg1;
- (void)setSynthesisResult:(long long)arg1;
- (id)speakableContextInfo;
- (id)speechRequest;
- (long long)synthesisResult;
- (id)text;

@end
