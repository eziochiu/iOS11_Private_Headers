/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSystemMonitor : NSObject <CPLEngineComponent, CPLNetworkWatcherDelegate> {
    CPLEngineLibrary * _engineLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _volumeURL;
    CPLNetworkWatcher * _watcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (unsigned long long)diskPressureState;
- (id)engineLibrary;
- (unsigned long long)freeDiskSpaceSize;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isNetworkConnected;
- (void)networkStateDidChangeForNetworkWatched:(id)arg1;
- (void)openWithCompletionHandler:(id /* block */)arg1;

@end
