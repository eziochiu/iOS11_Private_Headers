/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCollectionViewController : UICollectionViewController <HUResizableCellDelegate> {
    NSMapTable * _installedChildViewControllersKeyedByCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *installedChildViewControllersKeyedByCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didUpdateRequiredHeightForCell:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)installedChildViewControllersKeyedByCell;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setInstalledChildViewControllersKeyedByCell:(id)arg1;

@end