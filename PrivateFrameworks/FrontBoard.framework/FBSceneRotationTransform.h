/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneRotationTransform : FBSceneTransform {
    long long  _degrees;
    double  _radians;
}

@property (nonatomic) long long degrees;
@property (nonatomic) double radians;

- (void)_updateTransform;
- (long long)degrees;
- (id)description;
- (id)initWithDegrees:(long long)arg1;
- (id)initWithRadians:(double)arg1;
- (double)radians;
- (void)setDegrees:(long long)arg1;
- (void)setRadians:(double)arg1;

@end