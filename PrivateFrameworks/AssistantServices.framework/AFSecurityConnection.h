/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSecurityConnection : NSObject <AFSecurityService> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_dispatchCallbackForProcessedData:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_dispatchCallbackForProcessedDataMap:(id)arg1 errorMap:(id)arg2 completion:(id /* block */)arg3;
- (void)_invalidateConnection;
- (void)_processData:(id)arg1 usingProcedure:(long long)arg2 completion:(id /* block */)arg3;
- (void)_processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(id /* block */)arg3;
- (oneway void)processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(id /* block */)arg3;

@end
