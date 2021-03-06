/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation {
    id /* block */  _completionHandler;
    QLThumbnailHostContext * _hostContext;
    QLItem * _item;
    double  _minimumSize;
    double  _scale;
    id /* block */  _serviceErrorHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) QLThumbnailHostContext *hostContext;
@property (nonatomic) QLItem *item;
@property (nonatomic) double minimumSize;
@property (nonatomic) double scale;
@property (nonatomic, copy) id /* block */ serviceErrorHandler;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finish;
- (id)hostContext;
- (id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 minimumSize:(double)arg4 scale:(double)arg5 completionHandler:(id /* block */)arg6 serviceErrorHandler:(id /* block */)arg7;
- (id)item;
- (void)main;
- (double)minimumSize;
- (double)scale;
- (id /* block */)serviceErrorHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setHostContext:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMinimumSize:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setServiceErrorHandler:(id /* block */)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
