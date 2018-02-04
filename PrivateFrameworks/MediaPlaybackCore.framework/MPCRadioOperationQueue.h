/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRadioOperationQueue : NSObject {
    RadioRequestContext * _requestContext;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) RadioRequestContext *requestContext;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)init;
- (void)loadRadioConfigurationWithCompletionBlock:(id /* block */)arg1;
- (id)requestContext;
- (void)setRequestContext:(id)arg1;

@end