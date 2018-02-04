/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLExtensionThumbnailGenerator : NSObject {
    NSExtension * _extension;
    QLExtensionManager * _extensionManager;
    unsigned long long  _extensionRequestsCount;
    QLThumbnailHostContext * _hostContext;
    bool  _isRequestingExtension;
    id  _request;
}

@property (nonatomic, retain) QLExtensionManager *extensionManager;
@property (nonatomic, retain) QLThumbnailHostContext *hostContext;

- (void).cxx_destruct;
- (void)_didFinishExtensionRequestWithExtension:(id)arg1 request:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_failedToGenerateThumbnailWithItem:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(id /* block */)arg5 error:(id)arg6;
- (id)_generateImageFromRawData:(id)arg1 withContextSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)_generateImageFromURL:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (void)dealloc;
- (id)extensionManager;
- (void)generateThumbnailWithItem:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(id /* block */)arg5;
- (id)hostContext;
- (id)init;
- (void)setExtensionManager:(id)arg1;
- (void)setHostContext:(id)arg1;

@end