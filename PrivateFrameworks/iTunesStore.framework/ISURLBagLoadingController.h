/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLBagLoadingController : NSObject {
    SSURLBag * _URLBag;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _bagAccessRequestBlocks;
    NSDictionary * _bagDictionary;
    NSError * _bagLoadingError;
    NSHashTable * _bagObservers;
    bool  _hasSuccessfullyLoadedBag;
}

@property (nonatomic, readonly) NSDictionary *bagDictionary;

+ (id)sharedBagLoadingController;

- (void).cxx_destruct;
- (void)_didCompleteLoadingBagDictionary:(id)arg1 withError:(id)arg2;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg1;
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;
- (void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(bool)arg1;
- (void)_updateBagWithDictionary:(id)arg1 error:(id)arg2;
- (void)addBagObserver:(id)arg1;
- (id)bagDictionary;
- (void)dealloc;
- (id)init;
- (void)removeBagObserver:(id)arg1;
- (void)requestAccessToBagUsingBlock:(id /* block */)arg1;

@end
