/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXMotionWindow : NSObject {
    double  _center;
    long long  _direction;
    double  _effectiveRadius;
    double  _lowerLimit;
    double  _maxIncrease;
    double  _radius;
    double  _upperLimit;
}

- (id)initWithRadius:(double)arg1 maxIncrease:(double)arg2 direction:(long long)arg3;
- (double)mappedOffset:(double)arg1;
- (void)reset;
- (void)setIncreaseFactor:(double)arg1 fixingOffset:(double)arg2;

@end
