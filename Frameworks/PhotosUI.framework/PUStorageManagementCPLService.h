/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUStorageManagementCPLService : NSObject {
    PXUICPLService * _cplUIService;
    PXCPLServiceStatus * _lastServiceStatusUpdated;
    id /* block */  _uploadCallbackHandler;
}

@property (nonatomic, readonly) bool hasCompletedInitialUpload;
@property (nonatomic, copy) id /* block */ uploadCallbackHandler;

+ (id)sharedCPLService;

- (void).cxx_destruct;
- (void)_initCPLService;
- (void)_updateUploadCallbackHandler:(id)arg1;
- (bool)hasCompletedInitialUpload;
- (id)init;
- (void)setUploadCallbackHandler:(id /* block */)arg1;
- (id /* block */)uploadCallbackHandler;

@end