/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocumentStyleRenderer : NSObject <SXDocumentStyleRenderer, SXViewportChangeListener> {
    SXContext * _context;
    SXGradientFillView * _gradientFillView;
    SXImageFillView * _imageFillView;
    UIView * _topBackgroundView;
    SXVideoFillView * _videoFillView;
    SXViewport * _viewport;
}

@property (nonatomic, readonly) SXContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXGradientFillView *gradientFillView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageFillView *imageFillView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topBackgroundView;
@property (nonatomic, retain) SXVideoFillView *videoFillView;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyFillForStyle:(id)arg1 onView:(id)arg2;
- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (void)applyTopBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (id)context;
- (id)gradientFillView;
- (id)gradientViewForFill:(id)arg1;
- (id)imageFillView;
- (id)imageViewForFill:(id)arg1;
- (id)initWithContext:(id)arg1 viewport:(id)arg2;
- (void)layoutTopBackgroundView;
- (void)setGradientFillView:(id)arg1;
- (void)setImageFillView:(id)arg1;
- (void)setTopBackgroundView:(id)arg1;
- (void)setVideoFillView:(id)arg1;
- (id)topBackgroundView;
- (id)videoFillView;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (id)viewport;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
