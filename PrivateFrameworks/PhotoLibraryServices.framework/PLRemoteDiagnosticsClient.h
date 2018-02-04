/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRemoteDiagnosticsClient : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_connectionForListenerEndpoint:(id)arg1;
+ (id)diagnosticsAgentWithErrorHandler:(id /* block */)arg1;

@end