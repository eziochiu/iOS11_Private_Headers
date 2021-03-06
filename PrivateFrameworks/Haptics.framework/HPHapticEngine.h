/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
 */

@interface HPHapticEngine : NSObject {
    struct bitset<20> { 
        unsigned long long __first_; 
    }  _channelSet;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AVHapticPlayer * _player;
    double  _runTimeout;
    bool  _running;
    NSTimer * _timer;
}

@property (readonly) double currentTime;
@property (readonly) AVHapticPlayer *player;
@property bool running;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelIdleTimer;
- (id)createPlayerWithPattern:(id)arg1 error:(id*)arg2;
- (double)currentTime;
- (void)dealloc;
- (void)dispatchOnLocal:(id /* block */)arg1;
- (void)dispatchOnMain:(id /* block */)arg1;
- (id)getAvailableChannel;
- (id)init;
- (id)initAndReturnError:(id*)arg1;
- (id)player;
- (void)releaseChannel:(id)arg1;
- (bool)running;
- (void)setRunning:(bool)arg1;
- (void)startIdleTimerWithHandler:(id /* block */)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 timeoutHandler:(id /* block */)arg2;
- (void)stop;

@end
