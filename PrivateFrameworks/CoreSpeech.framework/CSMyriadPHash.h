/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSMyriadPHash : NSObject <CSVoiceTriggerDelegate> {
    short  _signalEstimate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) short signalEstimate;
@property (readonly) Class superclass;

- (id)_generateMyriadInfo:(unsigned long long)arg1 score:(float)arg2;
- (id)initWithAudioBuffer:(id)arg1;
- (unsigned short)pHash:(float*)arg1 length:(int)arg2;
- (void)setSignalEstimate:(short)arg1;
- (short)signalEstimate;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;

@end
