/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusController : NSObject {
    ICMusicSubscriptionStatus * _cachedActiveUserSubscriptionStatus;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSOperationQueue * _operationQueue;
}

+ (id)sharedStatusController;

- (void).cxx_destruct;
- (void)_getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(bool)arg2 reauthenticateOnInvalidTokenResponse:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_handleSubscriptionStatusChangedDistributedNotification:(id)arg1;
- (void)_loadCachedStatus;
- (void)clearCachedSubscriptionStatusForUserIdentiy:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)clearCachedSubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)disableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)disableSubscriptionWithCompletionHandler:(id /* block */)arg1;
- (void)enablePeriodicSubscriptionRefresh;
- (void)enableSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)enableSubscriptionWithCompletionHandler:(id /* block */)arg1;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 bypassingCache:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)getSubscriptionStatusForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getSubscriptionStatusWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)invalidateCachedSubscriptionStatus;
- (void)refreshSubscriptionForUserIdentity:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshSubscriptionUsingRequestContext:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshSubscriptionWithCompletionHandler:(id /* block */)arg1;

@end
