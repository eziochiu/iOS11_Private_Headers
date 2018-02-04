/* made by EzioChiu.
 */

@protocol PTXParallaxObserver <NSObject>

@required

- (void)clearParallaxOffset;
- (void)handleParallaxOffset:(struct CGPoint { double x1; double x2; })arg1 lockStatus:(long long)arg2 strength:(double)arg3;

@end