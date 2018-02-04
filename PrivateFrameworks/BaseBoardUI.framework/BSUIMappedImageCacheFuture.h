/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIMappedImageCacheFuture : NSObject {
    UIImage * _cacheImage;
    int  _submitted;
    id /* block */  _waitBlock;
    NSObject<OS_dispatch_semaphore> * _waitableSemaphore;
    int  _waited;
    int  _workCompletionWasCalled;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (id)cacheImage;
- (void)dealloc;
- (id)init;
- (void)submitWorkBlock:(id /* block */)arg1;

@end
