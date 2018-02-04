/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVBoundaryTimeObserverInfo : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _times;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSArray *times;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithTimes:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)queue;
- (id)times;

@end
