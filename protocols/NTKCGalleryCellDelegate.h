/* made by EzioChiu.
 */

@protocol NTKCGalleryCellDelegate <NSObject>

@required

- (void)galleryCell:(void *)arg1 didSelectFace:(void *)arg2 finishedSelectionHandler:(void *)arg3; // needs 3 arg types, found 7: NTKCGalleryCell *, NTKFace *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIView *)galleryCell:(NTKCGalleryCell *)arg1 viewForFace:(NTKFace *)arg2 atIndex:(long long)arg3;

@optional

- (void)galleryCellDidSelectSeeAll:(NTKCGalleryCell *)arg1;

@end
