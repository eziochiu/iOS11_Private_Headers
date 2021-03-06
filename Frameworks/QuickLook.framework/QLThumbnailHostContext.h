/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailHostContext : NSExtensionContext {
    NSOperationQueue * _thumbnailGenerationConcurrenQueue;
}

@property (nonatomic, retain) NSOperationQueue *thumbnailGenerationConcurrenQueue;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 withItem:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)protocolServiceWithErrorHandler:(id /* block */)arg1;
- (void)setThumbnailGenerationConcurrenQueue:(id)arg1;
- (id)thumbnailGenerationConcurrenQueue;

@end
