/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRStandardCallback : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)callbackWithQueue:(id)arg1 block:(id /* block */)arg2;

- (id /* block */)block;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)invokeWithError:(id)arg1;
- (id)queue;

@end
