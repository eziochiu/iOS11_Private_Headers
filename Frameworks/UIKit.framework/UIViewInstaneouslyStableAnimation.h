/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating> {
    id /* block */  _targetValueGetter;
    <UIVectorOperatable> * _velocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ targetValueGetter;

- (void).cxx_destruct;
- (id)initWithTargetValueGetter:(id /* block */)arg1 velocity:(id)arg2;
- (bool)isStable;
- (void)setTargetValueGetter:(id /* block */)arg1;
- (void)setVelocity:(id)arg1;
- (id)stepWithDelta:(double)arg1;
- (id)targetValue;
- (id /* block */)targetValueGetter;
- (id)value;
- (id)velocity;

@end
