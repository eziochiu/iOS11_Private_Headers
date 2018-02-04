/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBootstrapScriptFallback : NSObject <IKAppScriptFallbackHandler> {
    NSString * _cacheFilename;
    NSURL * _cacheFolder;
    double  _maximumAge;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) long long _unsynchronizedState;
@property (nonatomic, readonly, copy) NSString *cacheFilename;
@property (nonatomic, readonly) NSURL *cacheFolder;
@property (nonatomic, readonly, copy) NSURL *cachedFileLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isBagAvailable;
@property double maximumAge;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) long long state;
@property (readonly) Class superclass;

+ (id)cacheFilenameForStoreFrontIdentifier:(id)arg1;
+ (id)defaultCacheFolder;

- (void).cxx_destruct;
- (void)_createCacheDirectoriesIfNeeded;
- (void)_logError:(id)arg1 forOperation:(id)arg2;
- (void)_runWhenBackgroundWorkFinished:(id /* block */)arg1;
- (bool)_setCacheAge:(id)arg1 error:(id*)arg2;
- (long long)_unsynchronizedState;
- (id)cacheFilename;
- (id)cacheFolder;
- (id)cachedFileLocation;
- (bool)canFallbackForError:(id)arg1;
- (id)init;
- (id)initWithCacheFolder:(id)arg1 filename:(id)arg2;
- (id)initWithFilename:(id)arg1;
- (void)invalidate;
- (bool)isBagAvailable;
- (double)maximumAge;
- (id)queue;
- (id)retrieveScript:(id*)arg1;
- (void)scriptEvaluated:(id)arg1;
- (void)setMaximumAge:(double)arg1;
- (long long)state;

@end