/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
 */

@interface DCAssetFetcher : NSObject {
    NSObject<OS_dispatch_queue> * _assetSerializationQueue;
    MAAsset * _cachedAsset;
}

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (id)_assetQuery;
- (void)_fetchAssetWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleMissingMetadataWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleSuccessForQuery:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryMetadataWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_validateAsset:(id)arg1 error:(id*)arg2;
- (void)fetchPublicKeyAssetWithCompletion:(id /* block */)arg1;
- (void)fetchPublicKeyMetadataIgnoringCachesWithCompletion:(id /* block */)arg1;
- (id)init;

@end
