/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface StrictSecurityURLSessionDelegate : NSObject <NSURLSessionDelegate> {
    id /* block */  _xctAssert;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) id /* block */ xctAssert;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithXCTAssertBlock:(id /* block */)arg1;
- (void)setXctAssert:(id /* block */)arg1;
- (id /* block */)xctAssert;

@end
