/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTXPCConnectionProvider : NSObject {
    NSXPCConnection * _connection;
    id /* block */  _errorHandler;
    MTXPCConnectionInfo * _info;
    NSDate * _lastLifecycleNotification;
    id /* block */  _reconnectHandler;
    <NAScheduler> * _serializer;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, retain) MTXPCConnectionInfo *info;
@property (nonatomic, retain) NSDate *lastLifecycleNotification;
@property (nonatomic, copy) id /* block */ reconnectHandler;
@property (nonatomic, retain) <NAScheduler> *serializer;

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(id /* block */)arg2;
+ (id)providerWithConnectionInfo:(id)arg1 reconnectHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (void)_didTerminateConnection;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_retryConnection;
- (void)_retryConnectionWithRecover:(bool)arg1;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)didReceiveLifecycleNotification;
- (id /* block */)errorHandler;
- (id)info;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(id /* block */)arg2 reconnectHandler:(id /* block */)arg3;
- (id)lastLifecycleNotification;
- (void)performRemoteBlock:(id /* block */)arg1;
- (void)performRemoteBlock:(id /* block */)arg1 withErrorHandler:(id /* block */)arg2;
- (id /* block */)reconnectHandler;
- (id)serializer;
- (void)setConnection:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInfo:(id)arg1;
- (void)setLastLifecycleNotification:(id)arg1;
- (void)setReconnectHandler:(id /* block */)arg1;
- (void)setSerializer:(id)arg1;

@end