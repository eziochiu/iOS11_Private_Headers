/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointRemoteControlSessionCommunicationChannelManager : NSObject <AVFigRoutingContextCommunicationChannelManager> {
    struct __CFDictionary { } * _communicationChannelsForRemoteControlSessions;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    struct OpaqueFigEndpointRemoteControlSession { } * _outgoingRemoteControlSession;
    AVFigRoutingContextOutputContextImpl * _parentOutputContextImpl;
    struct OpaqueFigRoutingContext { } * _routingContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property AVFigRoutingContextOutputContextImpl *parentOutputContextImpl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)communicationChannelImpl:(id)arg1 didReceiveData:(id)arg2;
- (void)communicationChannelImplDidClose:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1;
- (id)outgoingCommunicationChannel;
- (id)parentOutputContextImpl;
- (void)setParentOutputContextImpl:(id)arg1;

@end
