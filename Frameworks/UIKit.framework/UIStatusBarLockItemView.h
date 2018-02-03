/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate> {
    bool  _alongsideViewIsBecomingVisible;
    id /* block */  _animationCompletionBlock;
    int  _animationCount;
    _UIStatusBarLockItemPadlockView * _padlockView;
    double  _padlockViewCenterOffsetFromForegroundViewCenter;
    UIView * _textClippingView;
    _UIExpandingGlyphsView * _textView;
    UIView * _timeItemSnapshot;
    double  _timeItemSnapshotCenterOffsetFromForegroundViewCenter;
    UIView * _viewToAnimateAlongside;
    double  _widthNeededDuringAnimation;
    double  _widthNeededForFinalState;
}

@property (nonatomic) bool alongsideViewIsBecomingVisible;
@property (nonatomic, copy) id /* block */ animationCompletionBlock;
@property (nonatomic) int animationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIStatusBarLockItemPadlockView *padlockView;
@property (nonatomic) double padlockViewCenterOffsetFromForegroundViewCenter;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *textClippingView;
@property (nonatomic, retain) _UIExpandingGlyphsView *textView;
@property (nonatomic, retain) UIView *timeItemSnapshot;
@property (nonatomic) double timeItemSnapshotCenterOffsetFromForegroundViewCenter;
@property (nonatomic) UIView *viewToAnimateAlongside;
@property (nonatomic) double widthNeededDuringAnimation;
@property (nonatomic) double widthNeededForFinalState;

+ (double)lockSlideAnimationDuration;

- (void).cxx_destruct;
- (void)_beginAnimation;
- (void)_endAnimation;
- (bool)_isAnimating;
- (id)accessibilityHUDRepresentation;
- (bool)alongsideViewIsBecomingVisible;
- (void)animateUnlockForegroundView:(id)arg1 timeItemSnapshot:(id)arg2 completionBlock:(id /* block */)arg3;
- (id /* block */)animationCompletionBlock;
- (int)animationCount;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (bool)isExclusive;
- (void)jiggleCompletionBlock:(id /* block */)arg1;
- (id)padlockView;
- (double)padlockViewCenterOffsetFromForegroundViewCenter;
- (void)setAlongsideViewIsBecomingVisible:(bool)arg1;
- (void)setAnimationCompletionBlock:(id /* block */)arg1;
- (void)setAnimationCount:(int)arg1;
- (void)setPadlockView:(id)arg1;
- (void)setPadlockViewCenterOffsetFromForegroundViewCenter:(double)arg1;
- (void)setTextClippingView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTimeItemSnapshot:(id)arg1;
- (void)setTimeItemSnapshotCenterOffsetFromForegroundViewCenter:(double)arg1;
- (void)setViewToAnimateAlongside:(id)arg1;
- (void)setVisible:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)setWidthNeededDuringAnimation:(double)arg1;
- (void)setWidthNeededForFinalState:(double)arg1;
- (id)textClippingView;
- (id)textView;
- (id)timeItemSnapshot;
- (double)timeItemSnapshotCenterOffsetFromForegroundViewCenter;
- (double)updateContentsAndWidth;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (id)viewToAnimateAlongside;
- (double)widthNeededDuringAnimation;
- (double)widthNeededForFinalState;

@end