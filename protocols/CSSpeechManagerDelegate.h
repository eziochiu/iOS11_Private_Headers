/* made by EzioChiu.
 */

@protocol CSSpeechManagerDelegate <NSObject>

@required

- (void)speechManagerDidStartForwarding:(CSSpeechManager *)arg1 successfully:(bool)arg2 error:(NSError *)arg3;
- (void)speechManagerDidStopForwarding:(CSSpeechManager *)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(CSSpeechManager *)arg1 chunk:(CSAudioChunk *)arg2;
- (void)speechManagerRecordBufferAvailable:(CSSpeechManager *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional

- (void)speechManagerBeginRecordInterruption:(CSSpeechManager *)arg1;
- (void)speechManagerBeginRecordInterruption:(CSSpeechManager *)arg1 withContext:(NSDictionary *)arg2;
- (void)speechManagerEndRecordInterruption:(CSSpeechManager *)arg1;
- (void)speechManagerRecordHardwareConfigurationDidChange:(CSSpeechManager *)arg1 toConfiguration:(long long)arg2;
- (NSDictionary *)speechManagerRecordingContext;

@end
