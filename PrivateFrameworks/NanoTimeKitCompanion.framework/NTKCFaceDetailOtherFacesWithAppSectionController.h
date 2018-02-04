/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailOtherFacesWithAppSectionController : NTKCFaceDetailSectionController <NTKCGalleryCellDelegate> {
    <NTKCFaceDetailOtherFacesWithAppSectionDelegate> * _delegate;
    NTKCGalleryCell * _galleryCell;
    NSMutableArray * _vcs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailOtherFacesWithAppSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NTKCGalleryCell *galleryCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *vcs;

- (void).cxx_destruct;
- (id)_viewControllerForFace:(id)arg1;
- (id)cellForRow:(long long)arg1;
- (id)delegate;
- (id)galleryCell;
- (void)galleryCell:(id)arg1 didSelectFace:(id)arg2 finishedSelectionHandler:(id /* block */)arg3;
- (id)galleryCell:(id)arg1 viewForFace:(id)arg2 atIndex:(long long)arg3;
- (double)heightForRow:(long long)arg1;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 app:(id)arg4;
- (long long)numberOfRows;
- (void)setDelegate:(id)arg1;
- (void)setGalleryCell:(id)arg1;
- (void)setVcs:(id)arg1;
- (id)titleForHeader;
- (id)vcs;

@end
