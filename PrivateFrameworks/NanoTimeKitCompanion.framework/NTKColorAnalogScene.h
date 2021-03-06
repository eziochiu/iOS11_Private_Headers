/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKColorAnalogScene : NTKAnalogScene {
    UIColor * _monogramColor;
    NTKCollectionNode * _ticks;
    NTKCollectionNode * _timeScrubbingReplacementTicks;
}

- (void).cxx_destruct;
- (void)applyColor:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromTickColor:(id)arg2 toTickColor:(id)arg3;
- (void)cleanupAfterZoom;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)hideTicks;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)performWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (id)scrubbingObscuredCollectionNodes;
- (void)setTickAlphaFromFraction:(double)arg1;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)showTicks;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;

@end
