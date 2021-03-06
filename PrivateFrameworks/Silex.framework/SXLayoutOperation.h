/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutOperation : NSOperation <SXLayouterDelegate> {
    double  _constrainedWidth;
    <SXDynamicAdController> * _dynamicAdController;
    bool  _executing;
    bool  _finished;
    SXLayoutAttributes * _layoutAttributes;
    SXLayoutBlueprint * _layoutBlueprint;
    SXLayoutDataProvider * _layoutDataProvider;
    NSString * _targetComponentIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic, readonly) double constrainedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDynamicAdController> *dynamicAdController;
@property bool executing;
@property bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXLayoutAttributes *layoutAttributes;
@property (nonatomic, retain) SXLayoutBlueprint *layoutBlueprint;
@property (nonatomic, readonly) SXLayoutDataProvider *layoutDataProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *targetComponentIdentifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (double)constrainedWidth;
- (id)createLayoutBlueprintForLayoutDataProvider:(id)arg1 documentColumnLayout:(id)arg2;
- (void)doFinishBookKeeping;
- (void)doStartBookKeeping;
- (id)dynamicAdController;
- (bool)executing;
- (void)finalizeLayoutBlueprint:(id)arg1 startOffset:(struct CGPoint { double x1; double x2; })arg2;
- (bool)finished;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3 dynamicAdController:(id)arg4;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isFinishedLayoutBlueprint:(id)arg1 forLayoutDataProvider:(id)arg2;
- (bool)isValidLayoutBlueprint:(id)arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2;
- (id)layoutAttributes;
- (id)layoutBlueprint;
- (id)layoutDataProvider;
- (void)layouter:(id)arg1 didFinishLayoutForComponent:(id)arg2 layoutBlueprint:(id)arg3 shouldContinueLayout:(bool*)arg4;
- (void)placeDynamicAdsForBlueprint:(id)arg1;
- (void)prepareLayoutBlueprint:(id)arg1;
- (void)registerComponent:(id)arg1 toLayoutBlueprint:(id)arg2 layoutDataProvider:(id)arg3 documentColumnLayout:(id)arg4;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setLayoutBlueprint:(id)arg1;
- (void)setTargetComponentIdentifier:(id)arg1;
- (void)start;
- (void)startLayoutWorkForBlueprint:(id)arg1;
- (id)targetComponentIdentifier;
- (void)updateLayoutBlueprint:(id)arg1 usingLayoutDataProvider:(id)arg2;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
