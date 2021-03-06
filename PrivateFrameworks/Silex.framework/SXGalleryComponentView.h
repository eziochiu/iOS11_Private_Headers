/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXGalleryComponentView : SXMediaComponentView <SXDragManagerDataSource> {
    SXDragManager * _dragManager;
}

@property (nonatomic, retain) SXDragManager *dragManager;

- (void).cxx_destruct;
- (id)dragManager;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)hostingView;
- (id)imageViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)setDragManager:(id)arg1;
- (id)viewForDragManager:(id)arg1;

@end
