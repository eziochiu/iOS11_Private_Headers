/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseHeterogenousCollectionViewController : MusicLibraryBrowseCollectionViewController {
    MusicEntityValueContext * _itemEntityValueContext;
    NSMutableDictionary * _layoutMetricsPerSection;
    MusicSectionEntityValueContext * _sectionEntityValueContext;
}

@property (nonatomic, readonly) MusicLibraryBrowseHeterogenousCollectionViewConfiguration *libraryViewConfiguration;

- (void).cxx_destruct;
- (void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (id)_entityValueContextAtIndexPath:(id)arg1;
- (void)_invalidateLayoutMetrics;
- (id)_layoutMetrics;
- (id)_layoutMetricsForCollectionViewContentDescriptor:(id)arg1;
- (id)_sectionEntityValueContextForIndex:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectAddButtonForCell:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionViewTintColorDidChange:(id)arg1;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)layoutMetricsForSection:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end