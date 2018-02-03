/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusAnimationCoordinatorManager : NSObject {
    UIFocusAnimationCoordinator * _activeFocusAnimationCoordinator;
    long long  _inheritedAnimationCoordinatorActiveAnimation;
    double  _lastFocusUpdateTime;
    UIFocusAnimationCoordinator * _lastFocusingItemAnimationCoordinator;
    NSHashTable * _unfocusingItems;
}

@property (nonatomic, retain) UIFocusAnimationCoordinator *activeFocusAnimationCoordinator;
@property (nonatomic) long long inheritedAnimationCoordinatorActiveAnimation;
@property (nonatomic) double lastFocusUpdateTime;
@property (nonatomic, retain) UIFocusAnimationCoordinator *lastFocusingItemAnimationCoordinator;
@property (nonatomic, readonly) NSHashTable *unfocusingItems;

- (void).cxx_destruct;
- (void)_cancelDelayedFocusingAnimationIfNecessary;
- (void)_performDelayedFocusingAnimationIfNecessary;
- (id)activeFocusAnimationCoordinator;
- (void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2;
- (long long)inheritedAnimationCoordinatorActiveAnimation;
- (id)init;
- (double)lastFocusUpdateTime;
- (id)lastFocusingItemAnimationCoordinator;
- (void)setActiveFocusAnimationCoordinator:(id)arg1;
- (void)setInheritedAnimationCoordinatorActiveAnimation:(long long)arg1;
- (void)setLastFocusUpdateTime:(double)arg1;
- (void)setLastFocusingItemAnimationCoordinator:(id)arg1;
- (id)unfocusingItems;
- (id)willUpdateFocusInContext:(id)arg1;

@end
