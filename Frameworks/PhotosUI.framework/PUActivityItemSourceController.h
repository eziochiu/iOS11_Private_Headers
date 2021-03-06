/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivityItemSourceController : NSObject {
    NSArray * __activeItemSources;
    NSError * __error;
    NSString * _activeActivityType;
    PUActivityViewController * _activityViewController;
    NSMutableOrderedSet * _assetItemSources;
    NSMutableOrderedSet * _assetItems;
    id /* block */  _progressHandler;
    int  _taskId;
}

@property (setter=_setActiveItemSources:, retain) NSArray *_activeItemSources;
@property (setter=_setError:, retain) NSError *_error;
@property (retain) NSString *activeActivityType;
@property (nonatomic) PUActivityViewController *activityViewController;
@property (nonatomic, readonly, copy) NSOrderedSet *assetItemSources;
@property (nonatomic, copy) NSOrderedSet *assetItems;
@property (nonatomic, readonly, copy) NSOrderedSet *assets;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)_activeItemSources;
- (id)_error;
- (void)_setActiveItemSources:(id)arg1;
- (void)_setError:(id)arg1;
- (id)activeActivityType;
- (id)activityItemSourceForAsset:(id)arg1;
- (id)activityViewController;
- (void)addAssetItem:(id)arg1;
- (id)assetItemSources;
- (id)assetItems;
- (id)assets;
- (void)cancel;
- (long long)countOfImagesToShare;
- (long long)countOfLoopsToShare;
- (long long)countOfVideosToShare;
- (id /* block */)progressHandler;
- (void)removeAssetItem:(id)arg1;
- (void)runExplicitly:(bool)arg1 withActivityType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setActiveActivityType:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setAssetItems:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
