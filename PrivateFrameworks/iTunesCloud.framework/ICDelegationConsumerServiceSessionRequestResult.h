/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject {
    ICDelegateToken * _delegateToken;
    NSError * _resultError;
}

@property (nonatomic, readonly, copy) ICDelegateToken *delegateToken;
@property (nonatomic, readonly, copy) NSError *resultError;

- (void).cxx_destruct;
- (id)delegateToken;
- (id)initWithDelegateToken:(id)arg1 resultError:(id)arg2;
- (id)resultError;

@end
