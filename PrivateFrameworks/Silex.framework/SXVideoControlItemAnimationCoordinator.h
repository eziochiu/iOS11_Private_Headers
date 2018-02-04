/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoControlItemAnimationCoordinator : NSObject <SXVideoControlItemAnimating> {
    NSMutableArray * _animationBlocks;
    NSMutableArray * _completionBlocks;
}

@property (nonatomic, readonly) NSMutableArray *animationBlocks;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithAnimationBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)animateWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (id)animationBlocks;
- (id)completionBlocks;
- (id)init;

@end