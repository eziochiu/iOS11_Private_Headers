/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWTCPListener : NSObject {
    id  _delegate;
    NWEndpoint * _endpoint;
    NSError * _error;
    NSObject<OS_tcp_listener> * _internalListener;
    NWEndpoint * _localEndpoint;
    NWParameters * _parameters;
}

@property id delegate;
@property (retain) NWEndpoint *endpoint;
@property (retain) NSError *error;
@property (retain) NSObject<OS_tcp_listener> *internalListener;
@property (retain) NWEndpoint *localEndpoint;
@property (retain) NWParameters *parameters;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)endpoint;
- (id)error;
- (void)handleError:(int)arg1;
- (void)handleNewConnection:(id)arg1;
- (id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (id)internalListener;
- (id)localEndpoint;
- (id)parameters;
- (void)setDelegate:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setError:(id)arg1;
- (void)setInternalListener:(id)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)startInternal;

@end
