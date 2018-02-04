/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockChartDisplayMode : NSObject <NSCopying> {
    bool  _HUDEnabled;
    UIColor * _axisLabelsColor;
    struct CGGradient { } * _backgroundGradient;
    UIColor * _backgroundLinesColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _chartRenderingInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _chartSize;
    bool  _graphOverlapsYAxisLabels;
    NSString * _hash;
    unsigned long long  _horizontalGridlineCount;
    double  _intervalRowHeight;
    UIColor * _lineColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lineGraphInsets;
    double  _lineWidth;
    long long  _maxInterval;
    bool  _showsPriceLabelForPreviousClose;
    double  _showsTitle;
    bool  _showsVolume;
    bool  _usesDetailedAxisLabels;
    double  _volumeHeight;
    UIColor * _xAxisKeylineColor;
    unsigned long long  _yAxisLabelCount;
}

@property (nonatomic) bool HUDEnabled;
@property (nonatomic, retain) UIColor *axisLabelsColor;
@property (nonatomic) struct CGGradient { }*backgroundGradient;
@property (nonatomic, retain) UIColor *backgroundLinesColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } chartRenderingInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } chartSize;
@property (nonatomic) bool graphOverlapsYAxisLabels;
@property (nonatomic, readonly) double gutterHeight;
@property (nonatomic) unsigned long long horizontalGridlineCount;
@property (nonatomic) double intervalRowHeight;
@property (nonatomic, retain) UIColor *lineColor;
@property (nonatomic, readonly) double lineGraphBottomPadding;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } lineGraphInsets;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long maxInterval;
@property (nonatomic) bool showsPriceLabelForPreviousClose;
@property (nonatomic) double showsTitle;
@property (nonatomic) bool showsVolume;
@property (nonatomic) bool usesDetailedAxisLabels;
@property (nonatomic) double volumeHeight;
@property (nonatomic, retain) UIColor *xAxisKeylineColor;
@property (nonatomic) unsigned long long yAxisLabelCount;

+ (id)defaultDisplayMode;

- (void).cxx_destruct;
- (bool)HUDEnabled;
- (id)axisLabelsColor;
- (struct CGGradient { }*)backgroundGradient;
- (id)backgroundLinesColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })chartRenderingInsets;
- (struct CGSize { double x1; double x2; })chartSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)graphOverlapsYAxisLabels;
- (double)gutterHeight;
- (unsigned long long)hash;
- (unsigned long long)horizontalGridlineCount;
- (id)init;
- (double)intervalRowHeight;
- (bool)isEqual:(id)arg1;
- (id)lineColor;
- (double)lineGraphBottomPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })lineGraphInsets;
- (double)lineWidth;
- (long long)maxInterval;
- (void)setAxisLabelsColor:(id)arg1;
- (void)setBackgroundGradient:(struct CGGradient { }*)arg1;
- (void)setBackgroundLinesColor:(id)arg1;
- (void)setChartRenderingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setChartSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGraphOverlapsYAxisLabels:(bool)arg1;
- (void)setHUDEnabled:(bool)arg1;
- (void)setHorizontalGridlineCount:(unsigned long long)arg1;
- (void)setIntervalRowHeight:(double)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineGraphInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMaxInterval:(long long)arg1;
- (void)setShowsPriceLabelForPreviousClose:(bool)arg1;
- (void)setShowsTitle:(double)arg1;
- (void)setShowsVolume:(bool)arg1;
- (void)setUsesDetailedAxisLabels:(bool)arg1;
- (void)setVolumeHeight:(double)arg1;
- (void)setXAxisKeylineColor:(id)arg1;
- (void)setYAxisLabelCount:(unsigned long long)arg1;
- (bool)showsPriceLabelForPreviousClose;
- (double)showsTitle;
- (bool)showsVolume;
- (bool)usesDetailedAxisLabels;
- (double)volumeHeight;
- (id)xAxisKeylineColor;
- (unsigned long long)yAxisLabelCount;

@end