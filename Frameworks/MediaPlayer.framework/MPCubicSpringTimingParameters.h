/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCubicSpringTimingParameters : UISpringTimingParameters {
    UICubicTimingParameters * _springCubicTimingParameters;
}

@property (nonatomic, copy) UICubicTimingParameters *springCubicTimingParameters;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cubicTimingParameters;
- (void)setSpringCubicTimingParameters:(id)arg1;
- (id)springCubicTimingParameters;

@end
