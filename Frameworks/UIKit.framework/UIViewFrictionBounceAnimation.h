/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewFrictionBounceAnimation : NSObject <UIIntervalAnimating> {
    double  _bounce;
    id  _current;
    double  _deceleration;
    id  _intermediate;
    id  _stableTarget;
    id  _target;
    id /* block */  _targetValueGetter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ targetValueGetter;

- (void).cxx_destruct;
- (id)initWithCurrent:(id)arg1 target:(id)arg2;
- (id)initWithCurrent:(id)arg1 targetValueGetter:(id /* block */)arg2;
- (bool)isStable;
- (void)setTargetValueGetter:(id /* block */)arg1;
- (void)setVelocity:(id)arg1;
- (id)stepWithDelta:(double)arg1;
- (id)targetValue;
- (id /* block */)targetValueGetter;
- (id)updatedTarget;
- (id)velocity;

@end
