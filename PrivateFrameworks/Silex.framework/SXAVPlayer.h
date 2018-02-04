/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAVPlayer : AVPlayer <AVPlayerItemDelegate> {
    int  _audioMode;
    double  _duration;
    double  _elapsedTime;
    double  _frameRate;
    bool  _isObservingDuration;
    bool  _isObservingLoadedTimeRanges;
    bool  _isObservingStatus;
    bool  _isObservingTimeControlStatus;
    id /* block */  _loadingProgressBlock;
    int  _playbackPosition;
    id /* block */  _playbackProgressBlock;
    double  _playbackStartTime;
    int  _playbackStatus;
    id /* block */  _playbackStatusBlock;
    id  _timeObserver;
    double  _totalTimePlayed;
}

@property (nonatomic, readonly) int audioMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double frameRate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isObservingDuration;
@property (nonatomic) bool isObservingLoadedTimeRanges;
@property (nonatomic) bool isObservingStatus;
@property (nonatomic) bool isObservingTimeControlStatus;
@property (nonatomic, copy) id /* block */ loadingProgressBlock;
@property (nonatomic) int playbackPosition;
@property (nonatomic, copy) id /* block */ playbackProgressBlock;
@property (nonatomic) double playbackStartTime;
@property (nonatomic) int playbackStatus;
@property (nonatomic, copy) id /* block */ playbackStatusBlock;
@property (readonly) Class superclass;
@property (nonatomic, retain) id timeObserver;
@property (nonatomic) double totalTimePlayed;

- (void).cxx_destruct;
- (void)addObservers;
- (int)audioMode;
- (void)dealloc;
- (double)duration;
- (void)durationChanged;
- (double)elapsedTime;
- (double)frameRate;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 audioMode:(int)arg2;
- (bool)isObservingDuration;
- (bool)isObservingLoadedTimeRanges;
- (bool)isObservingStatus;
- (bool)isObservingTimeControlStatus;
- (void)loadFrameRate;
- (void)loadedTimeRangesChanged;
- (id /* block */)loadingProgressBlock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)playbackPosition;
- (id /* block */)playbackProgressBlock;
- (double)playbackStartTime;
- (int)playbackStatus;
- (id /* block */)playbackStatusBlock;
- (void)playedToEnd:(id)arg1;
- (void)removeObservers;
- (void)seekToStartWithCompletionBlock:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setElapsedTime:(double)arg1 duration:(double)arg2;
- (void)setFrameRate:(double)arg1;
- (void)setIsObservingDuration:(bool)arg1;
- (void)setIsObservingLoadedTimeRanges:(bool)arg1;
- (void)setIsObservingStatus:(bool)arg1;
- (void)setIsObservingTimeControlStatus:(bool)arg1;
- (void)setLoadingProgressBlock:(id /* block */)arg1;
- (void)setPlaybackPosition:(int)arg1;
- (void)setPlaybackProgressBlock:(id /* block */)arg1;
- (void)setPlaybackStartTime:(double)arg1;
- (void)setPlaybackStatus:(int)arg1;
- (void)setPlaybackStatusBlock:(id /* block */)arg1;
- (void)setTimeObserver:(id)arg1;
- (void)setTotalTimePlayed:(double)arg1;
- (void)startTimeObserver;
- (void)statusChanged;
- (void)stopTimeObserver;
- (void)timeControlStatusChanged;
- (id)timeObserver;
- (double)totalTimePlayed;

@end
