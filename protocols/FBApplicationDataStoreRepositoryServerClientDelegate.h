/* made by EzioChiu.
 */

@protocol FBApplicationDataStoreRepositoryServerClientDelegate

@required

- (void)applicationDataStoreRepositoryClient:(FBApplicationDataStoreRepositoryServerClient *)arg1 valueChangedForObject:(id)arg2 key:(NSString *)arg3 bundleID:(NSString *)arg4;
- (void)applicationDataStoreRespositoryClient:(FBApplicationDataStoreRepositoryServerClient *)arg1 repositoryInvalidatedForBundleID:(NSString *)arg2;

@end
