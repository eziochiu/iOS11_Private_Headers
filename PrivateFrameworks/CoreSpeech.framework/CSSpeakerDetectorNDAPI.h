/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeakerDetectorNDAPI : NSObject {
    <CSSpeakerDetectorNDAPIDelegate> * _delegate;
    NSString * _languageCode;
    const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; } * _lastResult;
    void * _novDetect;
    float  _retrainTriggerThreshold;
    CSSpeakerModel * _spkModel;
    float  _threshold;
}

@property (nonatomic) <CSSpeakerDetectorNDAPIDelegate> *delegate;

- (void).cxx_destruct;
- (float)_computeSATScore:(id)arg1;
- (bool)_initializeNDAPI:(id)arg1 resourcePath:(id)arg2;
- (bool)_initializeSAT:(id)arg1;
- (void)_retrainSpeakerModel:(id)arg1;
- (bool)addLastTriggerToProfile;
- (id)analyzeWavForEnrollment:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithAsset:(id)arg1 languageCode:(id)arg2 speakerModel:(id)arg3;
- (void)processSuperVector:(id)arg1 withResult:(id)arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;

@end
