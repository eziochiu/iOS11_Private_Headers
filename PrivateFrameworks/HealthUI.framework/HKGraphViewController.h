/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGraphViewController : HKViewController <HKGraphViewDelegate> {
    long long  _dateZoom;
    HKGraphView * _graphView;
    <HKGraphViewDelegate> * _graphViewDelegateProxy;
}

@property (nonatomic, readonly) long long dateZoom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKGraphView *graphView;
@property (nonatomic) <HKGraphViewDelegate> *graphViewDelegateProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)dateZoom;
- (id)graphView;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateAnnotationViewContentWithContexts:(id)arg2;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(bool)arg3;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (id)graphViewDelegateProxy;
- (void)graphViewDidBeginSelection:(id)arg1;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)graphViewSizeChanged:(id)arg1;
- (id)initWithGraphView:(id)arg1 dateZoom:(long long)arg2;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setGraphViewDelegateProxy:(id)arg1;
- (long long)stackCountForGraphView:(id)arg1;

@end