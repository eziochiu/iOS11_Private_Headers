/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface PinnedHTTPSSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    bool  _failed;
    NSData * _trustedCertData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool failed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *trustedCertData;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)failed;
- (void)setFailed:(bool)arg1;
- (void)setTrustedCertData:(id)arg1;
- (id)trustedCertData;

@end
