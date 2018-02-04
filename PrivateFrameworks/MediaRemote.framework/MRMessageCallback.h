/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMessageCallback : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _reply;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) id /* block */ reply;

- (void)dealloc;
- (id)initWithReply:(id /* block */)arg1 queue:(id)arg2;
- (void)invoke:(id)arg1;
- (id)queue;
- (id /* block */)reply;

@end
