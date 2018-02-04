/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdSheetConnection : NSObject {
    NSXPCConnection * _adSheetConnection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <ADAdSheetConnectionDelegate> * _delegate;
    NSMutableArray * _performWhenConnectedBlocks;
}

@property (nonatomic, retain) NSXPCConnection *adSheetConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic) <ADAdSheetConnectionDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *performWhenConnectedBlocks;

- (void)_considerConnectingToAdSheet;
- (id)adSheetConnection;
- (id)connectionQueue;
- (void)considerConnectingToAdSheet;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (void)performWhenConnected:(id /* block */)arg1;
- (id)performWhenConnectedBlocks;
- (id)rpcProxy;
- (id)rpcProxyWithErrorHandler:(id /* block */)arg1;
- (void)setAdSheetConnection:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPerformWhenConnectedBlocks:(id)arg1;
- (void)withAssertion:(id)arg1 performWhenConnected:(id /* block */)arg2;

@end
