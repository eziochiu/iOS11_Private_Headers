/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTTextDependentSpeakerRecognizer : NSObject <EARPSRAudioProcessorDelegate> {
    NSString * _assetHash;
    <VTTextDependentSpeakerRecognizerDelegate> * _delegate;
    void * _novDetect;
    unsigned long long  _numSamplesProecssed;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _resourcePath;
    NSString * _satDirectory;
    float  _satScore;
    NSData * _speakerVector;
    EARPSRAudioProcessor * _speakerVectorGenerator;
    NSString * _tdSATModelDirPath;
}

@property (nonatomic, retain) NSString *assetHash;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VTTextDependentSpeakerRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numSamplesProecssed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic, retain) NSString *satDirectory;
@property (nonatomic) float satScore;
@property (nonatomic, retain) NSData *speakerVector;
@property (nonatomic, retain) EARPSRAudioProcessor *speakerVectorGenerator;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *tdSATModelDirPath;

+ (void)_createDirectoryIfDoesNotExist:(id)arg1;

- (void).cxx_destruct;
- (double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2;
- (id)_getValueForNDAPIConfigOption:(id)arg1;
- (id)assetHash;
- (void)dealloc;
- (id)delegate;
- (void)deleteVectorAtIndex:(int)arg1;
- (void)endAudio;
- (double)getCombinationWeight;
- (double)getThresholdSAT;
- (id)initWithResourcePath:(id)arg1 satDirectory:(id)arg2 assetHash:(id)arg3 shouldCreateModelDir:(bool)arg4 delegate:(id)arg5;
- (unsigned long long)numSamplesProecssed;
- (void)processAudio:(const short*)arg1 numSamples:(unsigned long long)arg2;
- (void)psrAudioProcessor:(id)arg1 hasResult:(id)arg2 numElements:(unsigned long long)arg3;
- (id)queue;
- (void)removeInvalidSATModel;
- (void)resetForNewRequest;
- (id)resourcePath;
- (id)satDirectory;
- (float)satScore;
- (void)setAssetHash:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumSamplesProecssed:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setSatDirectory:(id)arg1;
- (void)setSatScore:(float)arg1;
- (void)setSpeakerVector:(id)arg1;
- (void)setSpeakerVectorGenerator:(id)arg1;
- (void)setTdSATModelDirPath:(id)arg1;
- (id)speakerVector;
- (id)speakerVectorGenerator;
- (id)tdSATModelDirPath;
- (void)updateSAT;

@end
