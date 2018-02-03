/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSampleBufferSinkNode : BWSinkNode {
    bool  _aggdShutterLagIsStillDuringVideo;
    id /* block */  _sampleBufferAvailableHandler;
}

@property (nonatomic, copy) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)_reportAggdDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadataDictionary:(id)arg3 stillImagePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (bool)aggdShutterLagIsStillDuringVideo;
- (void)dealloc;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithInputMediaType:(unsigned int)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id /* block */)sampleBufferAvailableHandler;
- (void)setAggdShutterLagIsStillDuringVideo:(bool)arg1;
- (void)setSampleBufferAvailableHandler:(id /* block */)arg1;

@end
