/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVEnterFullScreenTransition : AVFullScreenTransition

- (void)animateAlongsideInteractiveTransitionAnimationForCancelling;
- (void)animateAlongsideInteractiveTransitionAnimationForFinishing;
- (void)animateAlongsideNonInteractiveTransitionAnimation;
- (void)completeTransition:(bool)arg1;
- (id)fullScreenViewController;
- (void)transitionWillBegin;
- (void)updateWithPercentComplete:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint { double x1; double x2; })arg4;

@end
