/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAppPurchaseHistoryCache : NSObject {
    SSAccount * _account;
    SSDatabaseCache * _databaseCache;
    SSAppPurchaseHistoryDatabase * _purchaseHistoryDatabase;
}

- (id)allUncachedImages;
- (id)allUncachedImages:(id)arg1;
- (void)clearCacheForAdamID:(id)arg1;
- (void)dealloc;
- (id)imageDataForAdamID:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;
- (bool)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3;

@end
