/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSApplicationDataStoreClientFactory : NSObject {
    unsigned long long  _count;
    Class  _dataStoreClientClass;
    NSArray * _prefetchedKeys;
    NSObject<OS_dispatch_queue> * _queue;
    <FBSApplicationDataStoreRepositoryClient> * _sharedClient;
}

@property (nonatomic, retain) NSArray *prefetchedKeys;

+ (id)sharedInstance;

- (void)checkin;
- (id)checkout;
- (void)dealloc;
- (id)init;
- (id)prefetchedKeys;
- (void)registerClientClass:(Class)arg1;
- (void)setPrefetchedKeys:(id)arg1;

@end
