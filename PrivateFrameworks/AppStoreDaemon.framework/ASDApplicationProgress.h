/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDApplicationProgress : NSObject {
    NSString * _bundleID;
    <ASDApplicationProgressDelegate> * _observer;
    NSProgress * _progress;
}

@property (readonly) NSString *bundleID;
@property (nonatomic) <ASDApplicationProgressDelegate> *observer;
@property (readonly) NSProgress *progress;

- (void).cxx_destruct;
- (void)_beginObservingProgress;
- (void)_endObservingProgress;
- (id)bundleID;
- (void)dealloc;
- (id)description;
- (id)initWithBundleID:(id)arg1 progress:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observer;
- (id)progress;
- (void)setObserver:(id)arg1;

@end
