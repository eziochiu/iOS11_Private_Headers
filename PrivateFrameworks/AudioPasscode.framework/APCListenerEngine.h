/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
 */

@interface APCListenerEngine : NSObject {
    AUPasscodeCodecConfiguration * _codecConfig;
    AUPasscodeDecoder * _decoderAU;
    AVAudioUnit * _decoderAUNode;
    AVAudioEngine * _engine;
}

+ (id)listenerWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(id /* block */)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)createAU:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)createEngineAndAttachNodes;
- (id)initWithCodecConfig:(id)arg1 queue:(id)arg2 dataReceivedHandler:(id /* block */)arg3 error:(id*)arg4;
- (void)makeEngineConnections;
- (void)setupAudioSession;
- (void)startEngine;
- (void)stopEngine;

@end
