/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegateAccountStoreXPCWriter : NSObject <ICDelegateAccountStoreWriter> {
    NSXPCConnection * _connection;
    bool  _isValid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_onceWithCompletionHandler:(id /* block */)arg1;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithSingleWriterConnection:(id)arg1;
- (void)invalidate;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)arg1;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokenForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(id /* block */)arg3;

@end
