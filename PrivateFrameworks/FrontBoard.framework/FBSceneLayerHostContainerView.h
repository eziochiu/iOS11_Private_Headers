/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, _FBSceneGeometryObserver> {
    bool  _clippingDisabled;
    <FBSceneLayerHostContainerViewDataSource> * _dataSource;
    NSMutableArray * _hostViews;
    NSMutableArray * _hostedLayers;
    FBScene * _scene;
}

@property (getter=isClippingDisabled, nonatomic) bool clippingDisabled;
@property (nonatomic) <FBSceneLayerHostContainerViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSArray *hostedLayers;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (readonly) Class superclass;

- (void)_adjustHostViewFrame:(id)arg1;
- (id)_createHostViewForLayer:(id)arg1;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_rebuildLayers;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateRenderingMode;
- (id)dataSource;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasContent;
- (id)hostedLayers;
- (id)init;
- (id)initWithScene:(id)arg1;
- (bool)isClippingDisabled;
- (bool)isHosting;
- (void)rebuildLayers;
- (id)scene;
- (void)setClippingDisabled:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateRenderingMode;
- (id)window;

@end