/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointRemoteControlSessionOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {
    void * _callbackContextToken;
    AVFigEndpointRemoteControlSessionCommunicationChannelManager * _parentCommChannelManager;
    AVOutputContextCommunicationChannel * _parentCommunicationChannel;
    struct OpaqueFigEndpointRemoteControlSession { } * _remoteControlSession;
    AVWeakReference * _weakObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property AVOutputContextCommunicationChannel *parentCommunicationChannel;
@property AVFigEndpointRemoteControlSessionCommunicationChannelManager *parentCommunicationChannelManager;
@property (nonatomic, readonly) struct OpaqueFigEndpointRemoteControlSession { }*remoteControlSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didClose;
- (void)_didReceiveData:(id)arg1;
- (void)_serverConnectionDied;
- (void)dealloc;
- (id)init;
- (id)initWithRemoteControlSession:(struct OpaqueFigEndpointRemoteControlSession { }*)arg1;
- (void)open;
- (id)parentCommunicationChannel;
- (id)parentCommunicationChannelManager;
- (struct OpaqueFigEndpointRemoteControlSession { }*)remoteControlSession;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setParentCommunicationChannel:(id)arg1;
- (void)setParentCommunicationChannelManager:(id)arg1;

@end
