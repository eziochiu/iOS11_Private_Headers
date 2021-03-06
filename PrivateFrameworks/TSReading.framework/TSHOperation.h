/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHOperation : NSObject <NSURLConnectionDataDelegate> {
    bool  mCacheControlMustRevalidate;
    bool  mCacheControlNoCache;
    bool  mCacheControlNoStore;
    unsigned long long  mContextHint;
    NSURLCredential * mCredentials;
    NSMutableDictionary * mDefaultAuthenticationMethods;
    id  mDelegate;
    NSMutableArray * mDependencies;
    long long  mErrorCode;
    NSMutableDictionary * mErrorUserInfo;
    bool  mIgnoreInvalidCertificate;
    TSHOperationQueue * mOperationQueue;
    TSHRequestQueue * mRequestQueue;
    NSMutableArray * mRequests;
    unsigned long long  mRestarts;
    NSURL * mTarget;
    NSString * mUserAgent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool ignoreInvalidCertificate;
@property (readonly) Class superclass;

- (void)addDependency:(id)arg1;
- (void)addHeadersTo:(id)arg1;
- (id)basicAuthenticationHeader;
- (void)cancel;
- (void)cancelRequests;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (unsigned long long)contextHint;
- (id)credentials;
- (void)dealloc;
- (id)defaultAuthenicationMethodForScheme:(id)arg1;
- (id)delegate;
- (id)dependencies;
- (id)description;
- (bool)ignoreInvalidCertificate;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;
- (id)localizedDescription;
- (id)operationQueue;
- (void)operationQueue:(id)arg1 dequeuedOperation:(id)arg2;
- (void)operationQueue:(id)arg1 didStartOperation:(id)arg2;
- (void)removeDependency:(id)arg1;
- (id)requestQueue;
- (void)requestQueue:(id)arg1 dequeuedRequest:(id)arg2;
- (void)requestQueue:(id)arg1 didCompleteRequest:(id)arg2;
- (void)requestQueue:(id)arg1 didStartRequest:(id)arg2 withConnection:(id)arg3;
- (void)requestQueue:(id)arg1 willStartRequest:(id)arg2;
- (void)restart;
- (unsigned long long)restarts;
- (void)setContextHint:(unsigned long long)arg1;
- (void)setDefaultAuthenticationMethod:(id)arg1 forScheme:(id)arg2;
- (void)setIgnoreInvalidCertificate:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (id)targetURL;
- (id)userAgent;

@end
