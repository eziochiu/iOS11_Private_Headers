/* made by EzioChiu.
 */

@protocol SXReachabilityProvider <NSObject>

@required

- (void)addReachabilityObserver:(id <SXReachabilityObserver>)arg1;
- (bool)isNetworkReachable;

@end
