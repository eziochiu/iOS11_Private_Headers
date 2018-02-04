/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection * _conn;
    NSLock * _connLock;
}

- (void).cxx_destruct;
- (id)connection;
- (id)daemon;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (id)init;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)arg1;

@end
