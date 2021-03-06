/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMetadataManager : NSObject {
    NSCache * _assetMetadataCache;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)analyzeAsset:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)analyzeAssets:(id)arg1 ranges:(id)arg2 types:(unsigned long long)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)analyzeColorForAsset:(id)arg1;
- (void)analyzeColorForAsset:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2;
- (void)analyzeLoudnessForRanges:(id)arg1 ofAssets:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCaches;
- (id)init;
- (id)metadataForAssetID:(id)arg1;
- (void)setMetadata:(id)arg1 forAssetID:(id)arg2;

@end
