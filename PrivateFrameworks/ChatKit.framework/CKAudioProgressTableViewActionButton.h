/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioProgressTableViewActionButton : _UITableViewCellActionButton {
    double  _currentProgress;
    double  _duration;
    UILabel * _label;
    double  _lastProgress;
    CKAudioProgressView * _progressView;
}

@property (nonatomic) double currentProgress;
@property (nonatomic) double duration;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) double lastProgress;
@property (nonatomic, retain) CKAudioProgressView *progressView;

- (void).cxx_destruct;
- (void)_playButtonHit:(id)arg1;
- (void)_updateTime:(id)arg1;
- (double)currentProgress;
- (void)dealloc;
- (void)didFinish:(id)arg1;
- (void)didStop:(id)arg1;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (struct CGSize { double x1; double x2; })labelSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)lastProgress;
- (void)layoutSubviews;
- (id)progressView;
- (void)removeFromSuperview;
- (void)setCurrentProgress:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setLastProgress:(double)arg1;
- (void)setProgressView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
