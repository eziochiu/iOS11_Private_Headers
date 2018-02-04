/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshotServer : NSObject {
    NSObject<OS_dispatch_queue> * _homeQueue;
}

- (void)_renderRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithHomeQueue:(id)arg1;
- (void)renderRequest:(id)arg1 completion:(id /* block */)arg2;

@end
