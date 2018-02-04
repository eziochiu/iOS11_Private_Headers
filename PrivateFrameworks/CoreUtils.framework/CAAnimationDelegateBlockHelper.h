/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CAAnimationDelegateBlockHelper : NSObject <CAAnimationDelegate> {
    id /* block */  _animationDidStartBlock;
    id /* block */  _animationDidStopBlock;
}

@property (nonatomic, copy) id /* block */ animationDidStartBlock;
@property (nonatomic, copy) id /* block */ animationDidStopBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (id /* block */)animationDidStartBlock;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id /* block */)animationDidStopBlock;
- (void)dealloc;
- (void)setAnimationDidStartBlock:(id /* block */)arg1;
- (void)setAnimationDidStopBlock:(id /* block */)arg1;

@end