/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLGetAssetCountsTask : CPLEngineSyncTask {
    <CPLEngineTransportGetLibraryInfoTask> * _transportTask;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)launch;
- (void)pause;
- (void)resume;
- (id)taskIdentifier;

@end
