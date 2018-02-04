/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneLayerHostView : UIView {
    FBSceneLayer * _sceneLayer;
}

@property (nonatomic, readonly, retain) FBSceneLayer *sceneLayer;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSceneLayer:(id)arg1;
- (id)sceneLayer;

@end