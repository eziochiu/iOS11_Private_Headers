/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedAssetsSectionInfo : PUFeedSectionInfo

- (bool)areAllAssetsLiked;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)assets;
- (unsigned long long)assetsCount;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)cloudFeedAssetsEntry;
- (bool)containsAsset:(id)arg1;
- (id)countsByAssetDisplayType;
- (void)getPhotoCount:(out unsigned long long*)arg1 videoCount:(out unsigned long long*)arg2;
- (bool)hasPlayableAssetForItemAtIndex:(long long)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (long long)sectionType;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;

@end
