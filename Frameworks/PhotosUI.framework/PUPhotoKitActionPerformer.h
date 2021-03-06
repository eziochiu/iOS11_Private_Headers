/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitActionPerformer : PUAssetActionPerformer {
    PUPhotoKitDataSourceManager * _photoKitDataSourceManager;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, retain) PUPhotoKitDataSourceManager *photoKitDataSourceManager;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (id)_photosDataSourceFromDataSourceManager:(id)arg1;
- (void)forceIncludeAssetsInDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (id)photoKitDataSourceManager;
- (void)setPhotoKitDataSourceManager:(id)arg1;
- (void)stopExcludingAssetsFromDataSource;

@end
