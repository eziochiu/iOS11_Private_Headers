/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTAuthenticatorDeferredRequest : NSObject {
    bool  _accountAuthRequired;
    NSMutableURLRequest * _request;
}

- (bool)accountAuthRequired;
- (void)dealloc;
- (id)request;
- (void)setAccountAuthRequired:(bool)arg1;
- (void)setRequest:(id)arg1;

@end