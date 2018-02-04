/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SURotationController : NSObject {
    SUViewController * _viewController;
}

@property (nonatomic) SUViewController *viewController;

- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (bool)orientationAffectsViewFrame;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewFrameForInterfaceOrientation:(long long)arg1;

@end