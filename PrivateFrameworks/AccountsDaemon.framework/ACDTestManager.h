/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDTestManager : NSObject {
    NSXPCListener * _accountStoreConnectionListener;
    NSXPCListener * _authenticationDialogConnectionListener;
    NSXPCListener * _oauthSignerConnectionListener;
    NSString * _storePath;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;
@property (nonatomic, readonly) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;

+ (id)testServer;

- (void).cxx_destruct;
- (id)_pseudoUniqueDatabasePath;
- (id)remoteAccountStoreEndpoint;
- (id)remoteOAuthSignerEndpoint;
- (void)startTestServer;
- (void)stopTestServer;

@end