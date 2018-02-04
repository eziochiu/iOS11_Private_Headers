/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageProvider : NSObject {
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 dataProvider:(id)arg4 completion:(id /* block */)arg5;
- (void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 firstImageIsReady:(id /* block */)arg4 withCompletionHandler:(id /* block */)arg5;
- (id /* block */)createLaunchImageGeneratorWithContext:(id)arg1;
- (id)init;
- (void)preheatServiceWithTimeout:(double)arg1;

@end