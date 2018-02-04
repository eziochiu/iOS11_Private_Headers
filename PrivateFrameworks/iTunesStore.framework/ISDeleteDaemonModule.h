/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDeleteDaemonModule : NSObject {
    SSAppPurchaseHistoryCache * _purchaseHistoryCache;
}

- (void)dealloc;
- (id)init;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;

@end
