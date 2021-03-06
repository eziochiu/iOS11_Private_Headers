/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreResourceHandleAsDelegate : NSObject <NSURLConnectionDelegate, WebCoreResourceLoaderDelegate> {
    struct ResourceHandle { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct __compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct ResourceHandleInternal {} *x_1_2_1; } x_3_1_1; } x3; } * m_handle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)detachHandle;
- (id)initWithHandle:(struct ResourceHandle { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct __compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct ResourceHandleInternal {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1;

@end
