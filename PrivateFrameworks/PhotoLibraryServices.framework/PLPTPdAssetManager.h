/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {
    NSSet * _availableAssetIDs;
    NSObject<PhotoLibraryPTPDelegate> * _delegate;
    NSString * _firstDCIMFolderServiced;
    PLPTPdFormatConversionManager * _formatConversionManager;
    int  _libraryStatus;
    PLPhotoLibrary * _photoLibrary;
    NSMutableSet * _ptpDeletedAssets;
    NSObject<OS_dispatch_queue> * availableAssetsQueue;
    NSFileManager * fileManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly, retain) PLManagedObjectContext *managedObjectContext;
@property (retain) PFMediaCapabilities *peerMediaCapabilities;
@property (nonatomic, readonly, retain) PLPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (id)_allAssetObjectIDs;
- (void)_expungeAsset:(id)arg1 withReason:(id)arg2;
- (id)_generateThumbnailForAsset:(id)arg1 imagePath:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 compressionQuality:(float)arg4;
- (void)_performBlockAndWait:(id /* block */)arg1;
- (id)_performResultBlockAndWait:(id /* block */)arg1;
- (id)_performResultTransactionAndWait:(id /* block */)arg1;
- (void)_performTransactionAndWait:(id /* block */)arg1;
- (id)_ptpAssetEnumeratorAllAssets;
- (id)_ptpAssetsForAssetWithID:(id)arg1;
- (bool)_ptpDeletePhotoWithAssetID:(id)arg1 andExtension:(id)arg2;
- (id)_ptpInformationForAllAssets;
- (id)_ptpInformationForPhotoWithObjectID:(id)arg1;
- (id)_ptpOriginalExifDataForAssetWithID:(id)arg1;
- (id)_ptpThumbnailForFullSizeRenderWithAssetID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 compressionQuality:(float)arg3;
- (id)_ptpThumbnailForOriginalWithAssetID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 compressionQuality:(float)arg3;
- (void)_registerForFirstUnlockNotification;
- (struct CGSize { double x1; double x2; })_validateSize:(struct CGSize { double x1; double x2; })arg1;
- (id)albumHandles;
- (id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3;
- (id)assetsInAssociation:(struct NSObject { Class x1; }*)arg1;
- (id)associationsInAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)dataByJPEGCompressingCGImage:(struct CGImage { }*)arg1 toLengthLimit:(long long)arg2 initialCompressionQuality:(float)arg3 size:(struct CGSize { double x1; double x2; })arg4 orientation:(long long)arg5;
- (id)dataForThumbnailFileAtPath:(id)arg1 rotatedToOrientation:(long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 compressionQuality:(float)arg4;
- (void)dealloc;
- (id)delegate;
- (void)deleteAsset:(id)arg1;
- (void)enumeratePTPInformationForFilesInDirectory:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg1;
- (id)fileManager;
- (void)handlePhotoLibraryAvailableNotification;
- (id)infoForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)infoForAsset:(struct NSObject { Class x1; }*)arg1;
- (id)init;
- (bool)libraryIsAvailable;
- (id)managedObjectContext;
- (void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssetIDs:(id)arg2 deletedAssetIDs:(id)arg3 changedAssetIDs:(id)arg4 adjustedAssetIDs:(id)arg5;
- (void)markSignpostForAsset:(id)arg1 endMarker:(bool)arg2 adjusted:(bool)arg3 arg4:(unsigned long long)arg4;
- (id)peerMediaCapabilities;
- (id)photoLibrary;
- (id)ptpAssetReaderForAssetHandle:(id)arg1;
- (bool)ptpCanDeleteFiles;
- (bool)ptpDeletePhotoForAssetHandle:(id)arg1;
- (bool)ptpDeletePhotoWithKey:(id)arg1 andExtension:(id)arg2;
- (void)ptpEnumerateAllAssetsUsingBlock:(id /* block */)arg1;
- (void)ptpEnumerateAssetsWithPrimaryKeys:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)ptpExifDataForAssetHandle:(id)arg1;
- (id)ptpExifDataForPhotoWithKey:(id)arg1;
- (id)ptpImagePropertiesForAssetHandle:(id)arg1;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (id)ptpThumbnailForAssetHandle:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 compressionQuality:(float)arg3;
- (id)ptpThumbnailForPhotoWithKey:(id)arg1;
- (id)ptpThumbnailForPhotoWithKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 compressionQuality:(float)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFileManager:(id)arg1;
- (void)setPeerMediaCapabilities:(id)arg1;
- (void)setPtpDelegate:(id)arg1;

@end