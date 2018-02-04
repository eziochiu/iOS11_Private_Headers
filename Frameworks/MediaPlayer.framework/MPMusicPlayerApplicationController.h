/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {
    NSObject<OS_dispatch_semaphore> * _queueLoadingSemaphore;
    NSObject<OS_dispatch_queue> * _queueTransationQueue;
}

- (void).cxx_destruct;
- (void)_queueDidInvalidate;
- (void)_queueRequestDidFinish;
- (void)_queueUpdateDidFinish;
- (id)init;
- (void)performQueueTransaction:(id /* block */)arg1 completionHandler:(id /* block */)arg2;

@end
