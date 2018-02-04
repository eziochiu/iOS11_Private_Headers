/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCUploadManager : NSObject {
    DCService * _service;
    NSMutableDictionary * _uploadTasks;
    NSMutableDictionary * _uploadingFiles;
}

+ (id)uploadManagerForService:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_addHandlerToCallForItemAtSubpath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_cancelExistingUpload:(id)arg1 forFile:(id)arg2;
- (void)_finishUploadFile:(id)arg1 parent:(id)arg2 error:(id)arg3;
- (id)_handlersToCallForItemAtSubpath:(id)arg1;
- (id)_initWithService:(id)arg1;
- (bool)_isUploadingFileAtPath:(id)arg1;
- (bool)_needsToStartUploadingItemAtSubpath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removePendingCompletionHandlersForCompletedUploads;
- (void)cancelAllUploadTasks;
- (bool)isUploadingFile:(id)arg1;
- (void)uploadFile:(id)arg1 usingRemoteFileManager:(id)arg2 activityInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)uploadForItemAtPath:(id)arg1;

@end