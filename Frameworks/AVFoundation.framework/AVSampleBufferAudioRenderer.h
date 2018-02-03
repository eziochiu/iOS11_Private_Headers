/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRendering, AVQueuedSampleBufferRenderingInternal> {
    AVSampleBufferAudioRendererInternal * _audioRendererInternal;
}

@property (nonatomic, copy) NSString *audioOutputDeviceUniqueID;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (getter=isReadyForMoreMediaData, readonly) bool readyForMoreMediaData;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (readonly, retain) struct OpaqueCMTimebase { }*timebase;

+ (id)sampleBufferAudioRenderer;

- (int)_initializeTimebase;
- (int)_installNotificationHandlers;
- (void)_transitionToFailedStatusWithOSStatus:(int)arg1;
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)_triggerMediaRequestCallback;
- (void)_uninstallNotificationHandlers;
- (void)_wasFlushedAutomaticallyAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)audioOutputDeviceUniqueID;
- (id)audioTimePitchAlgorithm;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer {}**)arg1;
- (void)dealloc;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)error;
- (void)finalize;
- (void)flush;
- (void)flushFromSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isMuted;
- (bool)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)scheduledAudioParameters;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setMuted:(bool)arg1;
- (bool)setRenderSynchronizer:(id)arg1 error:(id*)arg2;
- (void)setScheduledAudioParameters:(id)arg1;
- (void)setVolume:(float)arg1;
- (long long)status;
- (void)stopRequestingMediaData;
- (struct OpaqueCMTimebase { }*)timebase;
- (float)volume;

@end