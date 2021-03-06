/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationConsumerService : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _activeSessions;
}

- (void).cxx_destruct;
- (id)init;
- (void)performRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;

@end
