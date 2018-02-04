/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioOptInRequest : RadioRequest {
    unsigned long long  _accountIdentifier;
    SSURLConnectionRequest * _request;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)startWithOptInCompletionHandler:(id /* block */)arg1;

@end
