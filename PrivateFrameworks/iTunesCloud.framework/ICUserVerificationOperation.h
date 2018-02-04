/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserVerificationOperation : ICAsyncOperation {
    id /* block */  _responseHandler;
    ICUserVerificationRequest * _verificationRequest;
}

@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, readonly, copy) ICUserVerificationRequest *verificationRequest;

+ (id)operationWithVerificationRequest:(id)arg1;

- (void).cxx_destruct;
- (void)execute;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;
- (id)verificationRequest;

@end