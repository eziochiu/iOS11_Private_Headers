/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource

+ (id)sharedStoreArtworkDataSource;

- (id)_bestURLForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (void)getExportableArtworkURLForCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (bool)wantsBackgroundImageDecompression;

@end
