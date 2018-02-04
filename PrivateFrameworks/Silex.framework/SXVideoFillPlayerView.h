/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoFillPlayerView : UIView {
    SXContext * _context;
    unsigned long long  _fillMode;
    bool  _hasRequestedPlayback;
    SXImageResource * _imageResource;
    SXAVPlayer * _player;
    AVPlayerLayer * _playerLayer;
    bool  _shouldLoop;
    SXImageView * _stillImageView;
    SXVideoResource * _videoResource;
}

@property (nonatomic, retain) SXContext *context;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) bool hasRequestedPlayback;
@property (nonatomic, retain) SXImageResource *imageResource;
@property (nonatomic, retain) SXAVPlayer *player;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic) bool shouldLoop;
@property (nonatomic, retain) SXImageView *stillImageView;
@property (nonatomic, retain) SXVideoResource *videoResource;

- (void).cxx_destruct;
- (id)context;
- (void)dealloc;
- (unsigned long long)fillMode;
- (bool)hasRequestedPlayback;
- (id)imageResource;
- (id)initWithImageResource:(id)arg1 videoResource:(id)arg2 andContext:(id)arg3;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (void)playIfPossible;
- (id)player;
- (id)playerLayer;
- (void)reset;
- (void)setContext:(id)arg1;
- (void)setFillMode:(unsigned long long)arg1;
- (void)setHasRequestedPlayback:(bool)arg1;
- (void)setImageResource:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setShouldLoop:(bool)arg1;
- (void)setStillImageView:(id)arg1;
- (void)setVideoResource:(id)arg1;
- (bool)shouldLoop;
- (id)stillImageView;
- (void)switchToPlayer;
- (id)videoResource;

@end
