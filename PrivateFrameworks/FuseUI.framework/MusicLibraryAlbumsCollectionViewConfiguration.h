/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryAlbumsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {
    NSMutableSet * _additionalQueryFilterPredicates;
    bool  _forMainAlbumsList;
    bool  _includeCompilations;
}

+ (void)populateHorizontalLayoutInterpolatorsOnCollectionViewDescriptor:(id)arg1;

- (void).cxx_destruct;
- (id)_detailViewControllerForAlbumPersistentID:(unsigned long long)arg1 sourceViewController:(id)arg2;
- (void)addQueryFilterPredicate:(id)arg1;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (void)dealloc;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initForMainAlbumsList:(bool)arg1 includeCompilations:(bool)arg2;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (bool)pushAlbumViewWithAlbumPersistentID:(unsigned long long)arg1 fromViewController:(id)arg2;
- (id)queryForAlbumsCollectionView;

@end