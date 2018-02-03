/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputContextCommunicationChannel : NSObject {
    AVOutputContextCommunicationChannelInternal * _ivars;
}

@property (nonatomic, readonly) const struct __CFString { }*commChannelUUID;
@property (nonatomic, readonly) <AVOutputContextCommunicationChannelImpl> *impl;
@property (nonatomic, readonly) struct OpaqueFigEndpointRemoteControlSession { }*remoteControlSession;

- (const struct __CFString { }*)commChannelUUID;
- (void)dealloc;
- (id)impl;
- (id)init;
- (id)initWithOutputContextCommunicationChannelImpl:(id)arg1;
- (struct OpaqueFigEndpointRemoteControlSession { }*)remoteControlSession;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
