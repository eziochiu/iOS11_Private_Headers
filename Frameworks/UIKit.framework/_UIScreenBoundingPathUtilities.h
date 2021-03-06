/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenBoundingPathUtilities : NSObject {
    UIBezierPath * _pathLandscapeLeft;
    UIBezierPath * _pathLandscapeRight;
    UIBezierPath * _pathPortrait;
    UIBezierPath * _pathPortraitUpsideDown;
    UIScreen * _screen;
}

@property (getter=_pathLandscapeLeft, setter=_setPathLandscapeLeft:, nonatomic, retain) UIBezierPath *pathLandscapeLeft;
@property (getter=_pathLandscapeRight, setter=_setPathLandscapeRight:, nonatomic, retain) UIBezierPath *pathLandscapeRight;
@property (getter=_pathPortrait, setter=_setPathPortrait:, nonatomic, retain) UIBezierPath *pathPortrait;
@property (getter=_pathPortraitUpsideDown, setter=_setPathPortraitUpsideDown:, nonatomic, retain) UIBezierPath *pathPortraitUpsideDown;
@property (getter=_screen, nonatomic) UIScreen *screen;

+ (id)boundingPathUtilitiesForScreen:(id)arg1;

- (void).cxx_destruct;
- (id)_bezierPathForCurrentOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inscribedRectInBoundingPathByInsettingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onEdges:(unsigned long long)arg2 inCoordinateSpace:(id)arg3 withOptions:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inscribedRectInScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpaceBoundsInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 byInsettingRectInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 onEdges:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint { double x1; double x2; })arg1 aspectRatio:(double)arg2 inCoordinateSpace:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectInScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpaceBoundsInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withCenterInScreen:(struct CGPoint { double x1; double x2; })arg3 aspectRatio:(double)arg4;
- (id)_pathLandscapeLeft;
- (id)_pathLandscapeRight;
- (id)_pathPortrait;
- (id)_pathPortraitUpsideDown;
- (id)_screen;
- (void)_setPathLandscapeLeft:(id)arg1;
- (void)_setPathLandscapeRight:(id)arg1;
- (void)_setPathPortrait:(id)arg1;
- (void)_setPathPortraitUpsideDown:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)setScreen:(id)arg1;

@end
