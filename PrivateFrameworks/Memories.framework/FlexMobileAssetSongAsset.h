/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexMobileAssetSongAsset : FlexCloudSongAsset {
    NSString * _mobileAssetPropertyType;
    NSString * _mobileAssetTypeIdentifier;
}

@property (readonly) NSString *mobileAssetPropertyType;
@property (readonly) NSString *mobileAssetTypeIdentifier;

- (void).cxx_destruct;
- (id)_assetCachedMetadata;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (bool)contentUpdateAvaliable;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 mobileAssetTypeIdentifier:(id)arg5 mobileAssetPropertyType:(id)arg6 contentVersion:(long long)arg7 compatibilityVersion:(long long)arg8;
- (id)mobileAssetPropertyType;
- (id)mobileAssetTypeIdentifier;

@end
