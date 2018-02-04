/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerFirstPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate> {
    CSAsset * _currentAsset;
    <CSVoiceTriggerFirstPassDelegate> * _delegate;
    float  _firstPassThreshold;
    bool  _hasTriggerPending;
    NSMutableArray * _keywordAnalyzersNDAPI;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpeechManager * _speechManager;
    bool  _voiceTriggerEnabled;
    CSVoiceTriggerEnabledPolicyNonAOP * _voiceTriggerStartPolicy;
}

@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVoiceTriggerFirstPassDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float firstPassThreshold;
@property (nonatomic) bool hasTriggerPending;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *keywordAnalyzersNDAPI;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;
@property (nonatomic) bool voiceTriggerEnabled;
@property (nonatomic, retain) CSVoiceTriggerEnabledPolicyNonAOP *voiceTriggerStartPolicy;

- (void).cxx_destruct;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (void)_startVoiceTrigger;
- (void)_stopVoiceTrigger;
- (void)_transitVoiceTriggerStatus:(bool)arg1;
- (id)currentAsset;
- (id)delegate;
- (float)firstPassThreshold;
- (bool)hasTriggerPending;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (id)keywordAnalyzersNDAPI;
- (id)queue;
- (void)reset;
- (void)setAsset:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstPassThreshold:(float)arg1;
- (void)setHasTriggerPending:(bool)arg1;
- (void)setKeywordAnalyzersNDAPI:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setVoiceTriggerEnabled:(bool)arg1;
- (void)setVoiceTriggerStartPolicy:(id)arg1;
- (id)speechManager;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (bool)voiceTriggerEnabled;
- (id)voiceTriggerStartPolicy;

@end
