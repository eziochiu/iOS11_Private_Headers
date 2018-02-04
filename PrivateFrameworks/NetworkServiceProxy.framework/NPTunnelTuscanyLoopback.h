/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany {
    NPTunnelFlow * _flow;
    void * _window;
}

@property (retain) NPTunnelFlow *flow;
@property void*window;

- (void).cxx_destruct;
- (bool)addNewFlow:(id)arg1;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)createTuscanyClient;
- (long long)currentMTU;
- (unsigned int)dayPassSessionCounter;
- (void)dealloc;
- (id)flow;
- (id)initWithConfiguration:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 appRule:(id)arg4 flowProperties:(id)arg5 delegate:(id)arg6;
- (unsigned long long)initialWindowSize;
- (unsigned long long)maxFrameSize;
- (void)pingWithCompletionHandler:(id /* block */)arg1;
- (void)removeFlow:(unsigned long long)arg1;
- (bool)selectBestEdge;
- (void)sendUsageReportWithSuccess:(bool)arg1 rtt:(unsigned long long)arg2 geohash:(id)arg3 fallbackReason:(long long)arg4;
- (void)setFlow:(id)arg1;
- (void)setWindow:(void*)arg1;
- (void)startConnectionTimer;
- (void*)window;
- (void)write:(id)arg1;

@end