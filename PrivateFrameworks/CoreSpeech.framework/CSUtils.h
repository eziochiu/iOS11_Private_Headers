/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSUtils : NSObject

+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })aiffFileASBD;
+ (id)alertMuteSettings;
+ (id)assetHashInResourcePath:(id)arg1;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;
+ (id)deviceProductType;
+ (id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1;
+ (id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2;
+ (double)getHostClockFrequency;
+ (id)getSiriLanguageWithFallback:(id)arg1;
+ (bool)hasRemoteCoreSpeech;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (bool)isRecordContextVoiceTrigger:(id)arg1;
+ (void)iterateBitset:(unsigned long long)arg1 block:(id /* block */)arg2;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmInt16ASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmInt16NarrowBandASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmNarrowBandASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmNonInterleavedASBD;
+ (id)lpcmRecordSettings;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })opusASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })opusNarrowBandASBD;
+ (id)opusRecordSettings;
+ (bool)readAudioChunksFrom:(id)arg1 block:(id /* block */)arg2;
+ (id)rootQueueWithFixedPriority:(int)arg1;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (bool)shouldRunVTOnCS;
+ (bool)supportCSTwoShotDecision;
+ (bool)supportContinuousVoiceTrigger;
+ (bool)supportKeywordDetector;
+ (bool)supportOpportunisticZLL;
+ (bool)supportPremiumAssets;
+ (bool)supportSelfTriggerSuppression;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })utteranceFileASBD;
+ (id)voiceTriggerRecordContext;

@end
