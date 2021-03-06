/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualNotificationView : UIView {
    AVPlayerItem * __loopingPlayerItem;
    double  __mediaAspectRatio;
    UIView * _contentView;
    PXContextualNotification * _contextualNotification;
    UIImageView * _dismissIconView;
    UIImage * _image;
    AVAsset * _loopingVideoAsset;
    AVVideoComposition * _loopingVideoComposition;
    PXVideoPlayerView * _mediaView;
    NSLayoutConstraint * _mediaViewHeightConstraint;
    NSString * _message;
    UILabel * _messageLabel;
    long long  _style;
    NSString * _title;
    UIImage * _titleIcon;
    UIImageView * _titleIconView;
    UILabel * _titleLabel;
    bool  _useRegularHitTesting;
}

@property (setter=_setLoopingPlayerItem:, nonatomic, retain) AVPlayerItem *_loopingPlayerItem;
@property (setter=_setMediaAspectRatio:, nonatomic) double _mediaAspectRatio;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) PXContextualNotification *contextualNotification;
@property (nonatomic, readonly) UIImageView *dismissIconView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) AVAsset *loopingVideoAsset;
@property (nonatomic, copy) AVVideoComposition *loopingVideoComposition;
@property (nonatomic, readonly) PXVideoPlayerView *mediaView;
@property (nonatomic, readonly) NSLayoutConstraint *mediaViewHeightConstraint;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, readonly) long long style;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIImage *titleIcon;
@property (nonatomic, readonly) UIImageView *titleIconView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) bool useRegularHitTesting;

- (void).cxx_destruct;
- (void)_handleDidSetVideoAudioSession;
- (id)_loopingPlayerItem;
- (double)_mediaAspectRatio;
- (void)_setLoopingPlayerItem:(id)arg1;
- (void)_setMediaAspectRatio:(double)arg1;
- (void)_updateLoopingPlayerItem;
- (id)contentView;
- (id)contextualNotification;
- (id)dismissIconView;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (bool)isPointInsideDismissArea:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isPointInsidePassthroughArea:(struct CGPoint { double x1; double x2; })arg1;
- (id)loopingVideoAsset;
- (id)loopingVideoComposition;
- (id)mediaView;
- (id)mediaViewHeightConstraint;
- (id)message;
- (id)messageLabel;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setContextualNotification:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLoopingVideoAsset:(id)arg1;
- (void)setLoopingVideoComposition:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleIcon:(id)arg1;
- (void)setUseRegularHitTesting:(bool)arg1;
- (long long)style;
- (id)title;
- (id)titleIcon;
- (id)titleIconView;
- (id)titleLabel;
- (bool)useRegularHitTesting;

@end
