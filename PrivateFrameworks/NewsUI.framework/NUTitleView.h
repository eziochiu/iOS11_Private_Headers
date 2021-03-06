/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUTitleView : UIView {
    NUAnimationQueue * _animationQueue;
    <NUTitleViewDelegate> * _delegate;
    NUFadeViewAnimator * _fadeAnimator;
    NUCrossFadeTitleView * _incomingTitleView;
    NSObject<OS_dispatch_semaphore> * _lingerSemaphore;
    NUSlideViewAnimator * _slideAnimator;
    <NUTitleViewStyler> * _styler;
    NUCrossFadeTitleView * _titleView;
}

@property (nonatomic, readonly) NUAnimationQueue *animationQueue;
@property (nonatomic) <NUTitleViewDelegate> *delegate;
@property (nonatomic, readonly) NUFadeViewAnimator *fadeAnimator;
@property (nonatomic, retain) NUCrossFadeTitleView *incomingTitleView;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *lingerSemaphore;
@property (nonatomic, readonly) NUSlideViewAnimator *slideAnimator;
@property (nonatomic, retain) <NUTitleViewStyler> *styler;
@property (nonatomic, retain) NUCrossFadeTitleView *titleView;

- (void).cxx_destruct;
- (id)animationQueue;
- (void)applyTitleViewUpdate:(id)arg1 animation:(unsigned long long)arg2;
- (id)createMaskingLayerForTranslation;
- (id)delegate;
- (id)fadeAnimator;
- (void)finishDisplayingTitleViewUpdate:(id)arg1 finished:(id /* block */)arg2;
- (id)incomingTitleView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyler:(id)arg1;
- (void)layoutSubviews;
- (id)lingerSemaphore;
- (void)setDelegate:(id)arg1;
- (void)setIncomingTitleView:(id)arg1;
- (void)setLingerSemaphore:(id)arg1;
- (void)setStyler:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)slideAnimator;
- (id)styler;
- (id)titleView;
- (void)titleViewHandleTapGuesture;

@end
