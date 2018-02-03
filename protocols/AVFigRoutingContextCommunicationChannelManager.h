/* made by EzioChiu.
 */

@protocol AVFigRoutingContextCommunicationChannelManager <NSObject>

@required

- (AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
- (AVFigRoutingContextOutputContextImpl *)parentOutputContextImpl;
- (void)setParentOutputContextImpl:(AVFigRoutingContextOutputContextImpl *)arg1;

@end
