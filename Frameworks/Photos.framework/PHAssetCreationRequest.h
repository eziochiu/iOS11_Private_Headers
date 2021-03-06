/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest> {
    PHAssetCreationPhotoStreamPublishingRequest * __photoStreamPublishingRequest;
    PHAssetResourceBag * _assetResourceBag;
    NSMutableArray * _assetResources;
    bool  _duplicateAllowsPrivateMetadata;
    NSString * _duplicateAssetIdentifier;
    bool  _duplicateLivePhotoAsStill;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duplicateStillSourceTime;
    NSMutableDictionary * _movedFiles;
    bool  _shouldCreateScreenshot;
}

@property (nonatomic, readonly) NSDictionary *_movedFiles;
@property (setter=_setPhotoStreamPublishingRequest:, nonatomic, retain) PHAssetCreationPhotoStreamPublishingRequest *_photoStreamPublishingRequest;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setDuplicateAllowsPrivateMetadata:, nonatomic) bool duplicateAllowsPrivateMetadata;
@property (setter=_setDuplicateAssetIdentifier:, nonatomic, retain) NSString *duplicateAssetIdentifier;
@property (setter=_setDuplicateLivePhotoAsStill:, nonatomic) bool duplicateLivePhotoAsStill;
@property (setter=_setDuplicateStillSourceTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } duplicateStillSourceTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isNew, readonly) bool new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (getter=_shouldCreateScreenshot, setter=_setShouldCreateScreenshot:, nonatomic) bool shouldCreateScreenshot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)_createAssetFromImageData:(id)arg1 imageType:(id)arg2 uuid:(id)arg3 error:(id*)arg4;
+ (id)_creationRequestForAssetUsingUUID:(id)arg1;
+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)creationRequestForAsset;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1 stillSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
+ (id)creationRequestForAssetCopyStillPhotoFromLivePhotoAsset:(id)arg1 stillSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;
+ (id)creationRequestForAssetFromScreenshotImage:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (bool)supportsAssetResourceTypes:(id)arg1;

- (void).cxx_destruct;
- (void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4;
- (void)_copyMetadataFromAsset:(id)arg1;
- (bool)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 error:(id*)arg3;
- (bool)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 error:(id*)arg3;
- (bool)_createAssetFromValidatedResources:(id)arg1 uuid:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (bool)_createRAWSidecarForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (void)_didMoveFileFromURL:(id)arg1 toURL:(id)arg2;
- (id)_duplicatedAssetResourcesFromAsset:(id)arg1 stillSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 flattenLivePhotoIntoStillPhoto:(bool)arg3 error:(id*)arg4;
- (id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg1;
- (id)_managedAssetFromData:(id)arg1 imageUTIType:(id)arg2 photoLibrary:(id)arg3 getImageSource:(struct CGImageSource {}**)arg4 imageData:(id*)arg5;
- (long long)_mediaTypeForCreatedAsset;
- (id)_movedFiles;
- (id)_photoStreamPublishingRequest;
- (bool)_populateDuplicatingAssetCreationRequest:(id)arg1 error:(id*)arg2;
- (void)_resetMovedFiles;
- (bool)_restoreMovedFilesOnFailure;
- (id)_secureMove:(bool)arg1 assetResource:(id)arg2 error:(id*)arg3;
- (id)_secureMove:(bool)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 error:(id*)arg4;
- (void)_setDuplicateAllowsPrivateMetadata:(bool)arg1;
- (void)_setDuplicateAssetIdentifier:(id)arg1;
- (void)_setDuplicateLivePhotoAsStill:(bool)arg1;
- (void)_setDuplicateStillSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setPhotoStreamPublishingRequest:(id)arg1;
- (void)_setShouldCreateScreenshot:(bool)arg1;
- (bool)_shouldCreateScreenshot;
- (void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg1;
- (void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3;
- (void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)duplicateAllowsPrivateMetadata;
- (id)duplicateAssetIdentifier;
- (bool)duplicateLivePhotoAsStill;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duplicateStillSourceTime;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initForNewObjectWithUUID:(id)arg1;
- (id)initWithHelper:(id)arg1;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isNew;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)placeholderForCreatedAsset;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;

@end
