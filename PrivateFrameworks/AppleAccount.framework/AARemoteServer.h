/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARemoteServer : NSObject {
    AAURLSession * _session;
}

+ (id)newSigningSessionWithError:(id*)arg1;
+ (id)sharedSession;

- (void).cxx_destruct;
- (id)_bodyDictionaryWithProtocolVersion:(id)arg1;
- (void)_fetchServerConfigWithContext:(long long)arg1 cachePolicy:(long long)arg2 responseClass:(Class)arg3 completion:(id /* block */)arg4;
- (id)_newURLRequestWithURLString:(id)arg1;
- (id)_redactedBodyStringWithPropertyList:(id)arg1;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (void)_startRequest:(id)arg1 responseClass:(Class)arg2 mainThread:(bool)arg3 completion:(id /* block */)arg4;
- (void)authenticateAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchServerConfigForBuddyWithCachePolicy:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchServerConfigForSettingsWithCachePolicy:(long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)loginDelegates:(id)arg1 parameters:(id)arg2 completion:(id /* block */)arg3;
- (void)registerAccount:(id)arg1 withHSA:(bool)arg2 completion:(id /* block */)arg3;
- (void)registerAccount:(id)arg1 withHSA:(bool)arg2 usingCookieHeaders:(id)arg3 completion:(id /* block */)arg4;

@end
