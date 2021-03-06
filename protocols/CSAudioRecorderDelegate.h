/* made by EzioChiu.
 */

@protocol CSAudioRecorderDelegate <NSObject>

@required

- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 buffer:(NSData *)arg2 atTime:(unsigned long long)arg3;

@optional

- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1 withContext:(NSDictionary *)arg2;
- (void)audioRecorderDidStartRecording:(CSAudioRecorder *)arg1 successfully:(bool)arg2 error:(NSError *)arg3;
- (void)audioRecorderDidStopRecording:(CSAudioRecorder *)arg1 forReason:(long long)arg2;
- (void)audioRecorderEndRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(CSAudioRecorder *)arg1 toConfiguration:(long long)arg2;
- (void)voiceTriggerDetectedOnAOP:(NSDictionary *)arg1;

@end
