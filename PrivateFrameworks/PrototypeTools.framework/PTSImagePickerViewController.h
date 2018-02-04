/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImagePickerViewController : UITableViewController <PTSImageLoaderDelegate, UIAdaptivePresentationControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    id /* block */  _completion;
    bool  _doneLoading;
    NSMutableArray * _filenames;
    PTSImageLoader * _imageLoader;
    NSMutableArray * _images;
    bool  _includePhotoLibrary;
    UIImagePickerController * _photoLibraryPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includePhotoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forFilename:(id)arg3;
- (void)imageLoaderDidFinishLoadingImages:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (bool)includePhotoLibrary;
- (id)initWithResourcePath:(id)arg1 completion:(id /* block */)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setIncludePhotoLibrary:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;

@end