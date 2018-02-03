/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIProgressiveBlurPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (readonly) Class superclass;

+ (id)alphaAnimationFactory;
+ (id)transformAnimationFactory;

- (void)animateTransition:(id)arg1;
- (id)initForPresenting:(bool)arg1;
- (bool)isPresenting;
- (double)transitionDuration:(id)arg1;

@end