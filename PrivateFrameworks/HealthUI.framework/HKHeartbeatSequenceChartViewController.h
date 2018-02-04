/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHeartbeatSequenceChartViewController : HKScalarGraphViewController {
    HKAxis * _commonVerticalAxis;
    HKUIInteractiveChartDateLabelSlider * _dateLabelSlider;
    NSMutableArray * _graphSeries;
    double  _initialXAxisOffset;
    NSMutableArray * _sequenceDataSources;
    NSDate * _startDate;
}

@property (nonatomic, retain) HKAxis *commonVerticalAxis;
@property (nonatomic, retain) HKUIInteractiveChartDateLabelSlider *dateLabelSlider;
@property (nonatomic, retain) NSMutableArray *graphSeries;
@property (nonatomic) double initialXAxisOffset;
@property (nonatomic, retain) NSMutableArray *sequenceDataSources;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (void)_adjustGraphViewOptions;
- (void)_createDateLabelSlider;
- (id)_heartbeatSequenceSeriesForSource:(id)arg1 axis:(id)arg2 color:(id)arg3 lineWidth:(double)arg4 markerRadius:(double)arg5 dashStyle:(long long)arg6 annotate:(bool)arg7;
- (void)_recomputeAxisRanges;
- (void)_resizeDateLabelSlider:(struct CGSize { double x1; double x2; })arg1;
- (void)_synchronizeVerticalAxes;
- (id)_verticalNumericalAxis;
- (void)addSequenceData:(id)arg1;
- (void)addSequenceData:(id)arg1 color:(id)arg2 lineWidth:(double)arg3 markerRadius:(double)arg4 dashStyle:(long long)arg5 annotate:(bool)arg6;
- (id)commonVerticalAxis;
- (id)dateLabelSlider;
- (id)graphSeries;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphViewSizeChanged:(id)arg1;
- (id)initWithMinimumHeight:(double)arg1;
- (id)initWithMinimumHeight:(double)arg1 startDate:(id)arg2;
- (double)initialXAxisOffset;
- (id)sequenceDataSources;
- (void)setCommonVerticalAxis:(id)arg1;
- (void)setDateLabelSlider:(id)arg1;
- (void)setGraphSeries:(id)arg1;
- (void)setInitialXAxisOffset:(double)arg1;
- (void)setSequenceDataSources:(id)arg1;
- (long long)stackCountForGraphView:(id)arg1;
- (id)startDate;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end