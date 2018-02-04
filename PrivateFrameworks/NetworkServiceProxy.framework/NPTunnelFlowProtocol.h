/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelFlowProtocol : NPTunnelFlow {
    bool  _connectedOnInitialData;
    bool  _connectedOnInitialRead;
    bool  _discardFirstData;
    bool  _disconnectedByApp;
    bool  _disconnectedByTunnel;
    NSObject<OS_dispatch_data> * _inputBuffer;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _inputProtocol;
    bool  _waitingForOutput;
}

@property bool connectedOnInitialData;
@property bool connectedOnInitialRead;
@property bool discardFirstData;
@property bool disconnectedByApp;
@property bool disconnectedByTunnel;
@property (retain) NSObject<OS_dispatch_data> *inputBuffer;
@property (readonly) struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*inputProtocol;
@property bool waitingForOutput;

- (void).cxx_destruct;
- (bool)addBufferToFrameArray:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1 bufferSize:(unsigned long long)arg2;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1 limitMinimumBytes:(unsigned int)arg2 limitMaximumBytes:(unsigned int)arg3 limitMaximumFrames:(unsigned int)arg4;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1 limitMinimumBytes:(unsigned int)arg2 limitMaximumBytes:(unsigned int)arg3 limitMaximumFrames:(unsigned int)arg4;
- (id)appData;
- (void)closeClientFlowWithError:(int)arg1;
- (bool)connect;
- (bool)connectedOnInitialData;
- (bool)connectedOnInitialRead;
- (bool)discardFirstData;
- (void)disconnect;
- (bool)disconnectedByApp;
- (bool)disconnectedByTunnel;
- (void)dropInputProtocol;
- (void)handleAppData:(id)arg1;
- (void)handleOutputFrame:(id)arg1 send:(bool)arg2;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 inputProtocol:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg3 extraProperties:(id)arg4;
- (id)inputBuffer;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)inputProtocol;
- (bool)isClientFlowClosed;
- (void)notifyClientConnected;
- (void)readDataFromClient;
- (void)sendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (void)setAppData:(id)arg1;
- (void)setConnectedOnInitialData:(bool)arg1;
- (void)setConnectedOnInitialRead:(bool)arg1;
- (void)setDiscardFirstData:(bool)arg1;
- (void)setDisconnectedByApp:(bool)arg1;
- (void)setDisconnectedByTunnel:(bool)arg1;
- (void)setInputBuffer:(id)arg1;
- (void)setWaitingForOutput:(bool)arg1;
- (bool)waitingForOutput;

@end