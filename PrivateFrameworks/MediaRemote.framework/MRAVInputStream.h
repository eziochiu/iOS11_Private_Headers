/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVInputStream : MRAVBufferedInputStream <AVOutputContextCommunicationChannelDelegate> {
    AVOutputContext * _outputContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputContext *outputContext;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithOutputContext:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)outputContext;
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;

@end
