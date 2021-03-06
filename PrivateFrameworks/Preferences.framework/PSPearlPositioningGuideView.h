/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPearlPositioningGuideView : UIView {
    id /* block */  _animationCompletion;
    long long  _animationCurve;
    double  _animationDuration;
    NSDate * _animationStart;
    double  _cornerRadius;
    CADisplayLink * _displayLink;
    double  _edgeDistance;
    double  _lastAnimationTickProgres;
    double  _lineAlpha;
    double  _lineWidth;
    double  _postCornerLength;
    double  _startCornerRadius;
    double  _startEdgeDistance;
    double  _startLineAlpha;
    double  _startLineWidth;
    double  _startPostCornerLength;
    double  _targetCornerRadius;
    double  _targetEdgeDistance;
    double  _targetLineAlpha;
    double  _targetLineWidth;
    double  _targetPostCornerLength;
}

@property (nonatomic, copy) id /* block */ animationCompletion;
@property (nonatomic) long long animationCurve;
@property (nonatomic) double animationDuration;
@property (nonatomic, retain) NSDate *animationStart;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double edgeDistance;
@property (nonatomic) double lineAlpha;
@property (nonatomic) double lineWidth;
@property (nonatomic) double postCornerLength;

- (void).cxx_destruct;
- (void)_displayTick;
- (void)_startAnimationWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_startDisplay;
- (void)_stopDisplay;
- (double)_updatedFloatWithTarget:(double)arg1 current:(double)arg2 start:(double)arg3 progress:(double)arg4;
- (void)animateToBreatheOutValuesOverDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)animateToFinishedValuesOverDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)animateToOpenValuesOverDuration:(double)arg1 curve:(long long)arg2 completion:(id /* block */)arg3;
- (void)animateToPopOutValuesOverDuration:(double)arg1 completion:(id /* block */)arg2;
- (id /* block */)animationCompletion;
- (long long)animationCurve;
- (double)animationDuration;
- (id)animationStart;
- (void)breathe;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)edgeDistance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lineAlpha;
- (double)lineWidth;
- (double)postCornerLength;
- (void)resetValuesToStart;
- (void)setAnimationCompletion:(id /* block */)arg1;
- (void)setAnimationCurve:(long long)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationStart:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEdgeDistance:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLineAlpha:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setPostCornerLength:(double)arg1;

@end
