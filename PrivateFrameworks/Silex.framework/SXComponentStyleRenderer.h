/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentStyleRenderer : NSObject <SXViewportChangeListener> {
    UIView * _borderContainerView;
    SXComponentStyle * _componentStyle;
    SXComponentView * _componentView;
    bool  _didRegisterForDynamicBounds;
    UIView * _fillClippingView;
    SXGradientFillView * _gradientFillView;
    SXImageFillView * _imageFillView;
    SXVideoFillView * _videoFillView;
}

@property (nonatomic, retain) UIView *borderContainerView;
@property (nonatomic, readonly) SXComponentStyle *componentStyle;
@property (nonatomic, readonly) SXComponentView *componentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisterForDynamicBounds;
@property (nonatomic, retain) UIView *fillClippingView;
@property (nonatomic, retain) SXGradientFillView *gradientFillView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageFillView *imageFillView;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXVideoFillView *videoFillView;

- (void).cxx_destruct;
- (void)applyComponentStyle;
- (void)applyFill:(id)arg1;
- (id)borderContainerView;
- (id)componentStyle;
- (id)componentView;
- (void)componentVisiblityStateDidChange:(long long)arg1;
- (bool)didRegisterForDynamicBounds;
- (void)drawBorder:(id)arg1;
- (id)fillClippingView;
- (id)gradientFillView;
- (id)gradientViewForFill:(id)arg1;
- (id)imageFillView;
- (id)imageViewForFill:(id)arg1;
- (id)initWithComponentView:(id)arg1 componentStyle:(id)arg2;
- (void)prepare;
- (void)setBorderContainerView:(id)arg1;
- (void)setDidRegisterForDynamicBounds:(bool)arg1;
- (void)setFillClippingView:(id)arg1;
- (void)setGradientFillView:(id)arg1;
- (void)setImageFillView:(id)arg1;
- (void)setVideoFillView:(id)arg1;
- (id)videoFillView;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
