/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetExplorerReviewScreenEditActionPerformer : PUAssetExplorerReviewScreenActionPerformer {
    <PUPhotoEditViewControllerSessionDelegate> * _photoDelegate;
    <PUReviewAssetProvider> * _reviewAssetProvider;
    <PUVideoEditViewControllerSessionDelegate> * _videoDelegate;
}

@property (nonatomic) <PUPhotoEditViewControllerSessionDelegate> *photoDelegate;
@property (nonatomic, retain) <PUReviewAssetProvider> *reviewAssetProvider;
@property (nonatomic) <PUVideoEditViewControllerSessionDelegate> *videoDelegate;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_presentEditViewControllerForReviewAsset:(id)arg1;
- (void)performUserInteractionTask;
- (id)photoDelegate;
- (id)reviewAssetProvider;
- (void)setPhotoDelegate:(id)arg1;
- (void)setReviewAssetProvider:(id)arg1;
- (void)setVideoDelegate:(id)arg1;
- (id)videoDelegate;

@end
