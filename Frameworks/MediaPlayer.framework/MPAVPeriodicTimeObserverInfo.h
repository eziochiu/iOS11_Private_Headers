/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVPeriodicTimeObserverInfo : NSObject {
    id /* block */  _block;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _interval;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } interval;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })interval;
- (id)queue;

@end
