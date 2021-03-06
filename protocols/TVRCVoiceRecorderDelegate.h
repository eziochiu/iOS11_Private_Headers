/* made by EzioChiu.
 */

@protocol TVRCVoiceRecorderDelegate <NSObject>

@optional

- (<_TVRCAudioBuffer> *)createBufferWithSettings:(NSDictionary *)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;
- (void)voiceRecorder:(TVRCVoiceRecorder *)arg1 bufferAvailable:(id <_TVRCAudioBuffer>)arg2;
- (void)voiceRecorder:(void *)arg1 isAboutToBeginRecording:(void *)arg2; // needs 2 arg types, found 6: TVRCVoiceRecorder *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)voidRecorderDidStop:(TVRCVoiceRecorder *)arg1;

@end
