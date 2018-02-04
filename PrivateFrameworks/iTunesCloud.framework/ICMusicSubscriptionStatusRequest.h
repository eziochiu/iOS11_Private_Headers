/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusRequest : ICRequestOperation {
    ICMusicSubscriptionStatus * _statusResponse;
    ICStoreRequestContext * _storeRequestContext;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
