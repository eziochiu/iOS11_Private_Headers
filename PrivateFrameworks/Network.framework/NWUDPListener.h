/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWUDPListener : NSObject {
    id  _delegate;
    NWEndpoint * _endpoint;
    NSError * _error;
    NSObject<OS_nw_udp_listener> * _internalListener;
    NWEndpoint * _localEndpoint;
    NWParameters * _parameters;
}

@property id delegate;
@property (retain) NWEndpoint *endpoint;
@property (nonatomic, retain) NSError *error;
@property (retain) NSObject<OS_nw_udp_listener> *internalListener;
@property (nonatomic, retain) NWEndpoint *localEndpoint;
@property (retain) NWParameters *parameters;

- (void).cxx_destruct;
- (id)delegate;
- (id)endpoint;
- (id)error;
- (void)handleConnectedSocket:(int)arg1;
- (void)handleError:(int)arg1;
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

@end
