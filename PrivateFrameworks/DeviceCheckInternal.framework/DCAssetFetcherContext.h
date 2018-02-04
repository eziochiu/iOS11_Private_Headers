/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
 */

@interface DCAssetFetcherContext : NSObject {
    bool  _allowCatalogRefresh;
    bool  _ignoreCachedAsset;
    bool  _ignoreCachedMetadata;
}

@property (nonatomic) bool allowCatalogRefresh;
@property (nonatomic) bool ignoreCachedAsset;
@property (nonatomic) bool ignoreCachedMetadata;

- (bool)allowCatalogRefresh;
- (id)description;
- (bool)ignoreCachedAsset;
- (bool)ignoreCachedMetadata;
- (void)setAllowCatalogRefresh:(bool)arg1;
- (void)setIgnoreCachedAsset:(bool)arg1;
- (void)setIgnoreCachedMetadata:(bool)arg1;

@end
